#include "database.h"

DataBase::DataBase()
{

}


DataBase::~DataBase()
{

}

void DataBase::set_readerFilePath(QString PATH)
{
    readerFilePath = PATH;
}

void DataBase::set_bookFilePath(QString PATH)
{
    bookFilePath = PATH;
}

void DataBase::set_readerPhotoPath(QString PATH)
{
    readerPhotoPath = PATH+"/r";
}

void DataBase::set_bookPhotoPath(QString PATH)
{
    bookPhotoPath = PATH+"/b";
}

void DataBase::set_bookTableName(QString NAME)
{
    bookTableName = NAME;
}

QString DataBase::get_readerFilePath()
{
    return readerFilePath;
}

QString DataBase::get_bookFilePath()
{
    return bookFilePath;
}

QString DataBase::get_readerPhotoPath()
{
    return readerPhotoPath;
}

QString DataBase::get_bookPhotoPath()
{
    return bookPhotoPath;
}

QString DataBase::get_bookTableName()
{
    return bookTableName;
}

bool DataBase::parse_readerFile(QList<Reader> &readerList)
{
    QFile file(readerFilePath);
    file.open(QFile::ReadOnly | QFile::Text);
    QTextStream in(&file);
    if (!file.isOpen()) return false;

    QString check;
    in >> check;
    if (check != "DBforeBible") return false;

    QString buff;
    int position;
    bool flag;

    buff = in.readLine();

    while(!in.atEnd())
    {
        Reader reader;
        position = 0;
        buff = in.readLine();
        QStringList separate = buff.split('|');

        reader.set_id(separate.at(position++).toInt(&flag, 10));
        reader.set_checkDeleted(separate.at(position++).toInt(&flag, 2));
        reader.set_name(separate.at(position++));
        reader.set_last_name(separate.at(position++));
        reader.set_middle_name(separate.at(position++));
        reader.set_birthday(QDate::fromString(separate.at(position++), "dd.MM.yyyy"));
        reader.set_adress(separate.at(position++));
        reader.set_phone_number(separate.at(position++));

        int count = separate.at(position++).toInt(&flag, 10);
        book buffBook;
        for(int i = 0; i < count; i++)
        {
            buffBook.id = separate.at(position++).toInt(&flag, 10);
            buffBook.dateBeging = QDate::fromString(separate.at(position++), "dd.MM.yyyy");
            buffBook.dateEnd = QDate::fromString(separate.at(position++), "dd.MM.yyyy");
            reader.set_book(buffBook);
        }

        count = separate.at(position++).toInt(&flag, 10);
        history buffAction;
        for(int i = 0; i < count; i++)
        {
            buffAction.id = separate.at(position++).toInt(&flag, 10);
            buffAction.dateBeging = QDate::fromString(separate.at(position++), "dd.MM.yyyy");
            buffAction.dateEnd = QDate::fromString(separate.at(position++), "dd.MM.yyyy");
            buffAction.status = separate.at(position++);
            if (buffAction.id == -1)
            {
                if (buffAction.dateEnd > QDate::currentDate()) reader.set_checkBlacklist(true);
                else buffAction.status = "неактивен";
            }
            reader.set_history(buffAction);
        }
        QString namePhoto; namePhoto.setNum(reader.get_id());
        QString fullPath = readerPhotoPath+namePhoto+".jpg";
        QPixmap photo(fullPath);
        if (photo.isNull()) photo.load("anon.gif");
        reader.set_photo(photo);
        readerList << reader;
    }

    file.close();

    return true;
}

void DataBase::update_readerFile(QList<Reader> &readerList)
{
    QFile file(readerFilePath);
    file.open(QFile::ReadWrite | QFile::Text);
    QTextStream upload(&file);

    QString buff;
    buff = upload.readLine();
    qint64 position = upload.pos();
    int number = 0;
    while (!readerList[number].get_checkChanged())
    {
        number++;
        if (number == readerList.size()) return;
        buff = upload.readLine();
        position = upload.pos();
    }

    upload.seek(position);
    for(; number < readerList.size(); number++)
    {
        upload << readerList[number].get_id() << '|';
        upload << readerList[number].get_checkDeleted() << '|';
        upload << readerList[number].get_name() << '|';
        upload << readerList[number].get_last_name() << '|';
        upload << readerList[number].get_middle_name() << '|';
        upload << readerList[number].get_birthday().toString("dd.MM.yyyy") << '|';
        upload << readerList[number].get_adress() << '|';
        upload << readerList[number].get_phone_number() << '|';

        upload << readerList[number].get_book().size() << '|';
        for(int i = 0; i < readerList[number].get_book().size(); i++)
        {
            upload << readerList[number].get_book()[i].id << '|';
            upload << readerList[number].get_book()[i].dateBeging.toString("dd.MM.yyyy") << '|';
            upload << readerList[number].get_book()[i].dateEnd.toString("dd.MM.yyyy") << '|';
        }

        upload << readerList[number].get_history().size();
        for(int i = 0; i < readerList[number].get_history().size(); i++)
        {
            upload << '|' << readerList[number].get_history()[i].id << '|';
            upload << readerList[number].get_history()[i].dateBeging.toString("dd.MM.yyyy") << '|';
            upload << readerList[number].get_history()[i].dateEnd.toString("dd.MM.yyyy") << '|';
            upload << readerList[number].get_history()[i].status;
        }
        upload << endl;
    }

    position = upload.pos();
    file.resize(position);
    file.close();
}

bool DataBase::parse_bookFile(QList<Book> &bookList)
{
    QSqlDatabase Base = QSqlDatabase::addDatabase("QSQLITE");
    QSqlQuery Query;

    Base.setDatabaseName(bookFilePath);

    QString SelectTable = "SELECT * FROM '%1'";
    QString Connection = SelectTable.arg(bookTableName);

    Base.open();
    if (!Query.exec(Connection)) return false;
    Query.first();

    Book book;

    do
    {
        book.set_id(Query.value(0).toInt());
        book.set_name(Query.value(1).toString());
        book.set_author(Query.value(2).toString());
        book.set_publication(Query.value(3).toInt());
        book.set_pages(Query.value(4).toInt());
        book.set_quantity(Query.value(5).toInt());
        book.set_available(Query.value(6).toInt());
        book.set_description(Query.value(7).toString());
        book.set_checkDeleted(Query.value(8).toBool());
        QString namePhoto; namePhoto.setNum(book.get_id());
        QString fullPath = bookPhotoPath+namePhoto+".jpg";
        QPixmap photo(fullPath);
        if (photo.isNull()) photo.load("book.gif");
        book.set_photo(photo);
        bookList << book;
    }while(Query.next());

    return true;
}

void DataBase::update_bookFile(QList<Book> &bookList)
{
    QSqlDatabase Base = QSqlDatabase::addDatabase("QSQLITE");
    QSqlQuery Query;

    Base.setDatabaseName(bookFilePath);

    QString SelectTable = "SELECT * FROM '%1'";
    QString Connection = SelectTable.arg(bookTableName);
    QString Correction;

    Base.open();
    if (!Query.exec(Connection)) return;



    Query.last();
    if (Query.value(0).toInt() != bookList.last().get_id())
    {
        QString Insert = "INSERT INTO '%1'(Name, Author, Publication, Pages, Quantity, Available, Description, Deleted)"
                         "VALUES('%2','%3','%4','%5','%6','%7','%8','%9')";

        bookList.last().set_available(bookList.last().get_quantity());
        bookList.last().set_checkChanged(false);

        Correction = Insert.arg(bookTableName)
                           .arg(bookList.last().get_name())
                           .arg(bookList.last().get_author())
                           .arg(bookList.last().get_publication())
                           .arg(bookList.last().get_pages())
                           .arg(bookList.last().get_quantity())
                           .arg(bookList.last().get_available())
                           .arg(bookList.last().get_description())
                           .arg(bookList.last().get_checkDeleted());
    }
    else
    {
        int position = 0;
        while (!bookList[position].get_checkChanged()) position++;
        bookList[position].set_checkChanged(false);

        QString ChangeValue = "UPDATE '%1' "
                              "SET Name = '%2',"
                              "Author = '%3',"
                              "Publication = '%4',"
                              "Pages = '%5',"
                              "Quantity = '%6',"
                              "Available = '%7',"
                              "Description = '%8',"
                              "Deleted = '%9' "
                              "WHERE ID='%10';";

        Correction = ChangeValue.arg(bookTableName)
                                .arg(bookList[position].get_name())
                                .arg(bookList[position].get_author())
                                .arg(bookList[position].get_publication())
                                .arg(bookList[position].get_pages())
                                .arg(bookList[position].get_quantity())
                                .arg(bookList[position].get_available())
                                .arg(bookList[position].get_description())
                                .arg(bookList[position].get_checkDeleted())
                                .arg(bookList[position].get_id());
    }
    qDebug() << Query.exec(Correction)  << endl;
}
