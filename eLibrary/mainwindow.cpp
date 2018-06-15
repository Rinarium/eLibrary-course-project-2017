#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <mydialog.h>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    this->setWindowTitle("Libroo");
    ui->lineSearch->setPlaceholderText("Поиск...");
    ui->lineSearch_Book->setPlaceholderText("Поиск...");
    ui->lbl_description_info->setAlignment(Qt::AlignBaseline);
    ui->lbl_description_info->setReadOnly(true);
    check_showDeleted = false;

    connect(ui->listWidget, SIGNAL(itemSelectionChanged()), this, SLOT(readerItem_selected()));
    connect(ui->listWidget_Book, SIGNAL(itemSelectionChanged()), this, SLOT(bookItem_selected()));
    connect(this, SIGNAL(sizeChanged(QSize*)), this, SLOT(newSize(QSize*)));

    current_reader = nullptr;
    current_book = nullptr;

    database.set_readerFilePath("Base/readers.txt");
    database.set_bookFilePath("Base/books.sqlite");
    database.set_readerPhotoPath("Base/ReaderPhoto");
    database.set_bookPhotoPath("Base/BookPhoto");
    database.set_bookTableName("Books");

    for (int i = 1; i < 3; i++)
    {
        ui->tableWidgetBooks->setColumnWidth(i, 110);
        ui->tableWidgetHistory->setColumnWidth(i, 110);
    }

    ui->tableWidgetBooks->hide();
    ui->tableWidgetBooks->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidgetHistory->setEditTriggers(QAbstractItemView::NoEditTriggers);

    emit load_DataBases();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionDatabases_triggered()
{
    WinLoad *window = new WinLoad();
    connect(window, SIGNAL(accepted()), this, SLOT(load_DataBases()));
    window->set_database(&database);
    window->setModal(true);
    window->show();
    window->exec();
}

void MainWindow::on_listWidget_itemClicked(QListWidgetItem *item)
{
    ListItem* equal_item;
    equal_item = (ListItem*) item;
    current_reader = equal_item->reader;
    current_itemReader = equal_item;
    ui->lbl_lname_info->setText(equal_item->reader->get_last_name());
    ui->lbl_name_info->setText(equal_item->reader->get_name());
    ui->lbl_mname_info->setText(equal_item->reader->get_middle_name());
    ui->lbl_adress_info->setText(equal_item->reader->get_adress());
    ui->lbl_phone_info->setText(equal_item->reader->get_phone_number());
    QPixmap copy = equal_item->reader->get_photo().scaled(200, 200, Qt::KeepAspectRatioByExpanding, Qt::SmoothTransformation);
    ui->photo->setPixmap(copy);
    QString date;
    date = equal_item->reader->get_birthday().toString("dd.MM.yyyy");
    ui->lbl_bday_info->setText(date);
    ui->lbl_id_info->setNum(equal_item->reader->get_id());

    ui->tableWidgetHistory->clearContents();
    int size = equal_item->reader->get_history().size();
    ui->tableWidgetHistory->setRowCount(size);
    QString converter;
    int position = 0;

    for (int i = 0; i < size; i++)
    {
        position = 0;
        QTableWidgetItem *element1 = new QTableWidgetItem();
        QTableWidgetItem *element2 = new QTableWidgetItem();
        QTableWidgetItem *element3 = new QTableWidgetItem();
        QTableWidgetItem *element4 = new QTableWidgetItem();
        converter.setNum(current_reader->get_history()[i].id, 10);
        if (converter.toInt() < 0)
        {
            switch(converter.toInt())
            {
                case -1:
                    element1->setText("Черный список");
                    break;
                case -2:
                    element1->setText("Удаление читателя");
                    break;
                case -3:
                    element1->setText("Изменение данных");
                    break;
            }
        }
        else
        {
            while (bookList[position].get_id() != current_reader->get_history()[i].id) position++;
            element1->setText(bookList[position].get_name());
        }
        ui->tableWidgetHistory->setItem(i,0,element1);
        element2->setText(current_reader->get_history()[i].dateBeging.toString("dd.MM.yyyy"));
        element2->setTextAlignment(Qt::AlignCenter);
        ui->tableWidgetHistory->setItem(i,1,element2);
        if (current_reader->get_history()[i].id == -2 && current_reader->get_history()[i].status == "удален")  element3->setText("-");
        else element3->setText(current_reader->get_history()[i].dateEnd.toString("dd.MM.yyyy"));
        element3->setTextAlignment(Qt::AlignCenter);
        ui->tableWidgetHistory->setItem(i,2,element3);
        element4->setText(current_reader->get_history()[i].status);
        element4->setTextAlignment(Qt::AlignCenter);
        ui->tableWidgetHistory->setItem(i,3,element4);
    }

    size = equal_item->reader->get_book().size();
    ui->tableWidgetBooks->setRowCount(size);

    for (int i = 0; i < size; i++)
    {
        position = 0;
        QTableWidgetItem *element5 = new QTableWidgetItem();
        QTableWidgetItem *element6 = new QTableWidgetItem();
        QTableWidgetItem *element7 = new QTableWidgetItem();
        while (bookList[position].get_id() != current_reader->get_book()[i].id) position++;
        element5->setText(bookList[position].get_name());
        ui->tableWidgetBooks->setItem(i,0,element5);
        element6->setText(current_reader->get_book()[i].dateBeging.toString("dd.MM.yyyy"));
        element6->setTextAlignment(Qt::AlignCenter);
        ui->tableWidgetBooks->setItem(i,1,element6);
        element7->setText(current_reader->get_book()[i].dateEnd.toString("dd.MM.yyyy"));
        element7->setTextAlignment(Qt::AlignCenter);
        ui->tableWidgetBooks->setItem(i,2,element7);
    }

    if (!ui->pushButton_AddBook->isEnabled())
    {
        ui->pushButton_AddBook->setEnabled(true);
        ui->pushButton_ReturnBook->setEnabled(true);
        ui->Button_Info_Reader->setEnabled(true);
    }

    ui->pushButton_DeleteReader->setText("Удалить");
    if (current_reader->get_checkDeleted())
    {
        ui->pushButton_AddBook->setEnabled(false);
        ui->pushButton_ReturnBook->setEnabled(false);
        ui->Button_Info_Reader->setEnabled(false);
        ui->pushButton_DeleteReader->setText("Восстановить");
    }

    if (current_reader->get_checkBlacklist())
    {
        ui->info_blacklist->setText("активен");
        ui->pushButton_AddBook->setEnabled(false);
    }
    else ui->info_blacklist->setText("неактивен");

    QSize winSize = this->size();
    emit sizeChanged(&winSize);
}

void MainWindow::updateInfo_Reader()
{
    ui->listWidget->setCurrentItem(current_itemReader);
    QString name = current_itemReader->reader->get_last_name()+" "+current_itemReader->reader->get_name()+" "+current_itemReader->reader->get_middle_name();
    current_itemReader->setText(name);
    database.update_readerFile(readerList);
    ui->listWidget->sortItems(Qt::AscendingOrder);
    ui->listWidget->setFocus();
    current_itemReader->setSelected(false);
    current_itemReader->setSelected(true);
}

void MainWindow::rejectNew_Reader()
{
    readerList.removeLast();
    int row = ui->listWidget->row(current_itemReader);
    ui->listWidget->takeItem(row);
}

void MainWindow::on_Button_Info_Reader_clicked()
{
    WinInfoReader window;
    connect(&window, SIGNAL(changePhoto(QString)), this, SLOT(changePhotoReader(QString)));
    connect(&window, SIGNAL(accepted()), this, SLOT(updateInfo_Reader()));
    window.setWindowTitle("Изменение данных");
    window.setModal(true);
    window.fill_information(current_reader);
    window.exec();
}

void MainWindow::on_pushButton_NewReader_clicked()
{
    WinInfoReader *window = new WinInfoReader();
    connect(window, SIGNAL(changePhoto(QString)), this, SLOT(changePhotoReader(QString)));
    connect(window, SIGNAL(rejected()), this, SLOT(rejectNew_Reader()));
    connect(window, SIGNAL(accepted()), this, SLOT(updateInfo_Reader()));
    window->setWindowTitle("Добавление читателя");
    window->setModal(true);
    window->show();
    Reader reader;
    readerList << reader;
    current_reader = &readerList.last();
    current_reader->set_id(readerList.size()-1);
    window->connectItem(current_reader);
    ListItem *item = new ListItem();
    item->reader = current_reader;
    ui->listWidget->addItem(item);
    current_itemReader = item;

    history moment;
    moment.id = -3;
    moment.dateBeging = QDate::currentDate();
    moment.dateEnd = QDate::currentDate();
    moment.status = "добавлен";
    current_reader->set_history(moment);

    window->exec();
}

void MainWindow::on_pushButton_Reverse_clicked()
{
    if(ui->tableWidgetHistory->isHidden())
    {
        ui->tableWidgetBooks->hide();
        ui->tableWidgetHistory->show();
        ui->pushButton_Reverse->setText("Текущие книги");
    }
    else
    {

        ui->tableWidgetHistory->hide();
        ui->tableWidgetBooks->show();
        ui->pushButton_Reverse->setText("История");
    }

    QSize winSize = this->size();
    emit sizeChanged(&winSize);
}

void MainWindow::on_listWidget_Book_itemClicked(QListWidgetItem *item)
{
    ListItem* equal_item;
    equal_item = (ListItem*) item;
    current_book = equal_item->book;
    current_itemBook = equal_item;
    ui->lbl_name_info_Book->setText(equal_item->book->get_name());
    ui->lbl_author_info->setText(equal_item->book->get_author());
    ui->lbl_publication_info->setNum(equal_item->book->get_publication());
    ui->lbl_pages_info->setNum(equal_item->book->get_pages());
    ui->lbl_quantity_info->setNum(equal_item->book->get_quantity());
    ui->lbl_available_info->setNum(equal_item->book->get_available());
    ui->lbl_id_Book_info->setNum(equal_item->book->get_id());
    ui->lbl_description_info->setText("<b>Описание:</b> "+equal_item->book->get_description());
    QPixmap copy = equal_item->book->get_photo().scaled(250, 375, Qt::KeepAspectRatioByExpanding, Qt::SmoothTransformation);
    ui->photo_Book->setPixmap(copy);

    if (!ui->pushButton_Info_Book->isEnabled()) ui->pushButton_Info_Book->setEnabled(true);

    ui->pushButton_DeleteBook->setText("Удалить");
    if (current_book->get_checkDeleted())
    {
        ui->pushButton_Info_Book->setEnabled(false);
        ui->pushButton_DeleteBook->setText("Восстановить");
    }
}

void MainWindow::updateInfo_Book()
{
    ui->listWidget_Book->setCurrentItem(current_itemBook);
    current_itemBook->setText(current_book->get_name());
    database.update_bookFile(bookList);
    ui->listWidget_Book->sortItems(Qt::AscendingOrder);
    ui->listWidget_Book->setFocus();
    current_itemBook->setSelected(false);
    current_itemBook->setSelected(true);
}

void MainWindow::rejectNew_Book()
{
    bookList.removeLast();
    int row = ui->listWidget_Book->row(current_itemBook);
    ui->listWidget_Book->takeItem(row);
}

void MainWindow::on_pushButton_Info_Book_clicked()
{
    WinInfoBook window;
    connect(&window, SIGNAL(changePhoto(QString)), this, SLOT(changePhotoBook(QString)));
    connect(&window, SIGNAL(accepted()), this, SLOT(updateInfo_Book()));
    window.setWindowTitle("Изменение данных");
    window.setModal(true);
    window.fill_information(current_book);
    window.exec();
}

void MainWindow::on_pushButton_NewBook_clicked()
{
    WinInfoBook window;
    connect(&window, SIGNAL(changePhoto(QString)), this, SLOT(changePhotoBook(QString)));
    connect(&window, SIGNAL(rejected()), this, SLOT(rejectNew_Book()));
    connect(&window, SIGNAL(accepted()), this, SLOT(updateInfo_Book()));
    window.setWindowTitle("Добавление книги");
    window.setModal(true);
    Book book;
    bookList << book;
    current_book = &bookList.last();
    current_book->set_id(bookList.size()-1);
    window.connectItem(current_book);
    ListItem *item = new ListItem();
    item->book = current_book;
    ui->listWidget_Book->addItem(item);
    current_itemBook = item;
    window.exec();
}

void MainWindow::readerItem_selected()
{
    current_itemReader = (ListItem*) ui->listWidget->currentItem();
    emit ui->listWidget->itemClicked(current_itemReader);
}

void MainWindow::bookItem_selected()
{
    current_itemBook = (ListItem*) ui->listWidget_Book->currentItem();
    emit ui->listWidget_Book->itemClicked(current_itemBook);
}

void MainWindow::on_lineSearch_textChanged(const QString &text)
{
    QString enteredText = text.toLower();
    QListWidgetItem *item;
    QStringList separateName,
                separateText = enteredText.split(' ');

    for (int i = 0; i < ui->listWidget->count(); i++)
    {
        item = ui->listWidget->item(i);
        separateName = item->text().split(' ');

        for (int j = 0; j < separateName.size(); j++)
        {
            separateName[j] = separateName[j].toLower();

            if (separateText.size() == 1)
            {
                if (!separateName[j].indexOf(enteredText, 0))
                {
                    if (item->isHidden()) item->setHidden(false);
                    ui->listWidget->setCurrentItem(item);
                    item->setSelected(true);
                    break;
                }
                else item->setHidden(true);
            }
            else
            {
                for (int k = 0; k < separateName.size(); k++)
                {
                    if (separateName[k] != separateText[0]) continue;
                    if (item->text().toLower().indexOf(enteredText, 0) >= 0)
                    {
                        if (item->isHidden()) item->setHidden(false);
                        ui->listWidget->setCurrentItem(item);
                        item->setSelected(true);
                        break;
                    }
                    else item->setHidden(true);
                }
            }
        }
    }
}

void MainWindow::on_lineSearch_Book_textChanged(const QString &text)
{
    QString enteredText = text.toLower();
    QListWidgetItem *item;
    QStringList separateName,
                separateText = enteredText.split(' ');

    for (int i = 0; i < ui->listWidget_Book->count(); i++)
    {
        item = ui->listWidget_Book->item(i);
        separateName = item->text().split(' ');

        for (int j = 0; j < separateName.size(); j++)
        {
            separateName[j] = separateName[j].toLower();

            if (separateText.size() == 1)
            {
                if (!separateName[j].indexOf(enteredText, 0))
                {
                    if (item->isHidden()) item->setHidden(false);
                    ui->listWidget_Book->setCurrentItem(item);
                    item->setSelected(true);
                    break;
                }
                else item->setHidden(true);
            }
            else
            {
                for (int k = 0; k < separateName.size(); k++)
                {
                    if (separateName[k] != separateText[0]) continue;
                    if (item->text().toLower().indexOf(enteredText, 0) >= 0)
                    {
                        if (item->isHidden()) item->setHidden(false);
                        ui->listWidget_Book->setCurrentItem(item);
                        item->setSelected(true);
                        break;
                    }
                    else item->setHidden(true);
                }
            }
        }
    }
}

void MainWindow::on_pushButton_AddBook_clicked()
{
    WinBooking *window = new WinBooking();
    connect(window, SIGNAL(accepted()), this, SLOT(updateInfo_Reader()));
    connect(window, SIGNAL(accepted()), this, SLOT(updateInfo_Book()));
    window->setWindowTitle("Добавление книги читателю");
    window->setModal(true);
    window->show();
    window->fill_information(current_reader, bookList);
    window->exec();
}

void MainWindow::on_pushButton_ReturnBook_clicked()
{
    if(!current_reader->get_book().size())
    {
        Deletion *warning = new Deletion();
        warning->setForm(1);
        warning->setText("Список книг пуст!");
        warning->show();
        warning->exec();
        return;
    }
    WinReturn *window = new WinReturn();
    connect(window, SIGNAL(accepted()), this, SLOT(updateInfo_Reader()));
    connect(window, SIGNAL(accepted()), this, SLOT(updateInfo_Book()));
    window->setWindowTitle("Возврат книги");
    window->setModal(true);
    window->show();
    window->fill_information(current_reader, bookList);
    window->exec();
}

void MainWindow::deleteReader()
{
    current_reader->set_checkDeleted(true);
    current_reader->set_checkChanged(true);

    history moment;
    moment.id = -2;
    if (current_reader->get_history().size() && current_reader->get_history().last().id == -2)
    {
        moment.dateBeging = current_reader->get_history().last().dateBeging;
        moment.dateEnd = current_reader->get_history().last().dateBeging;
        current_reader->unset_history(current_reader->get_history().last());
    }
    else
    {
        moment.dateBeging = QDate::currentDate();
        moment.dateEnd = QDate::currentDate();
    }
    moment.status = "удален";
    current_reader->set_history(moment);

    if (!check_showDeleted)
    {
        int row = ui->listWidget->row(current_itemReader);
        current_itemReader = (ListItem*) ui->listWidget->takeItem(row);
        delete current_itemReader;
        current_itemReader = (ListItem*) ui->listWidget->item(0);
    }

    ui->listWidget->setCurrentItem(current_itemReader);
    current_itemReader->setSelected(true);
    emit updateInfo_Reader();
}

void MainWindow::deleteBook()
{
    current_book->set_checkDeleted(true);
    current_book->set_checkChanged(true);

    if (!check_showDeleted)
    {
        int row = ui->listWidget_Book->row(current_itemBook);
        current_itemBook = (ListItem*) ui->listWidget_Book->takeItem(row);
        delete current_itemBook;
        current_itemBook = (ListItem*) ui->listWidget_Book->item(0);
    }

    ui->listWidget_Book->setCurrentItem(current_itemBook);
    current_itemBook->setSelected(true);
    emit updateInfo_Book();
}

void MainWindow::on_pushButton_DeleteReader_clicked()
{
    if (current_reader->get_book().size())
    {
        Deletion *warning = new Deletion();
        warning->setForm(1);
        warning->setText("Невозможно удалить читателя!");
        warning->show();
        warning->exec();
        return;
    }
    Deletion *window = new Deletion();
    window->setForm(2);
    window->setModal(true);
    if (!current_reader->get_checkDeleted())
    {
        connect(window, SIGNAL(accepted()), this, SLOT(deleteReader()));
        window->setText("Вы уверены, что хотите удалить читателя?");
    }
    else
    {
        connect(window, SIGNAL(accepted()), this, SLOT(restoreReader()));
        window->setText("Вы уверены, что хотите восстановить читателя?");
    }
    window->show();
    window->exec();
}

void MainWindow::on_pushButton_DeleteBook_clicked()
{
    Deletion *window = new Deletion();
    window->setForm(2);
    window->setModal(true);
    if (!current_book->get_checkDeleted())
    {
        connect(window, SIGNAL(accepted()), this, SLOT(deleteBook()));
        window->setText("Вы уверены, что хотите удалить книгу?");
    }
    else
    {
        connect(window, SIGNAL(accepted()), this, SLOT(restoreBook()));
        window->setText("Вы уверены, что хотите восстановить книгу?");
    }
    window->show();
    window->exec();
}

void MainWindow::resizeEvent(QResizeEvent *event)
{
    QSize *size = new QSize();
    *size = event->size();
    emit sizeChanged(size);
}

void MainWindow::newSize(QSize *newSize)
{
    QSize size = *newSize;
    size.setWidth(size.width()-267);

    if (!current_reader)
    {
        size.setWidth(size.width()-235);
        ui->tableWidgetBooks->setColumnWidth(0,size.width());
        ui->tableWidgetHistory->setColumnWidth(0,size.width()*0.75);
        ui->tableWidgetHistory->setColumnWidth(3, size.width()*0.25);
        return;

    }

    if (!current_reader->get_history().size()) size.setWidth(size.width()-235);
    else size.setWidth(size.width()-248);
    ui->tableWidgetHistory->setColumnWidth(0,size.width()*0.75);
    ui->tableWidgetHistory->setColumnWidth(3, size.width()*0.25);

    size = *newSize;
    size.setWidth(size.width()-267);

    if (!current_reader->get_book().size()) size.setWidth(size.width()-235);
    else size.setWidth(size.width()-248);
    ui->tableWidgetBooks->setColumnWidth(0,size.width());
}

void MainWindow::fill_listWidgets()
{
    for (int i = 0; i < readerList.size(); i++)
    {
        ListItem *item = new ListItem();
        item->reader = &readerList[i];
        item->setText(item->reader->get_last_name()+" "+item->reader->get_name()+" "+item->reader->get_middle_name());
        if (!check_showDeleted)
        {
           if (readerList[i].get_checkDeleted()) continue;
        }

        ui->listWidget->addItem(item);
    }
    ui->listWidget->sortItems(Qt::AscendingOrder);
    current_itemReader = (ListItem*) ui->listWidget->item(0);
    ui->listWidget->setFocus();
    ui->listWidget->setCurrentItem(current_itemReader);
    current_itemReader->setSelected(true);

    for(int i = 0; i < bookList.size(); i++)
    {
        ListItem *item = new ListItem();
        item->book = &bookList[i];
        item->setText(item->book->get_name());
        if (!check_showDeleted)
        {
           if (bookList[i].get_checkDeleted()) continue;
        }
        ui->listWidget_Book->addItem(item);
    }
    ui->listWidget_Book->sortItems(Qt::AscendingOrder);
    current_itemBook = (ListItem*) ui->listWidget_Book->item(0);
    ui->listWidget_Book->activateWindow();
    ui->listWidget_Book->setCurrentItem(current_itemBook);
    current_itemBook->setSelected(true);
}

void MainWindow::on_actionDeleted_triggered()
{
    if (!check_showDeleted)
    {
        check_showDeleted = true;
        ui->actionDeleted->setText("Удаленные читатели/книги  ✓");
    }
    else
    {
        check_showDeleted = false;
        ui->actionDeleted->setText("Удаленные читатели/книги");
    }

    ui->listWidget->clear();
    ui->listWidget_Book->clear();
    fill_listWidgets();
}

void MainWindow::restoreReader()
{
    current_reader->set_checkDeleted(false);
    current_reader->set_checkChanged(true);
    int position = 0;
    while (current_reader->get_history()[position].id != -2 || current_reader->get_history()[position].status != "удален")
        position++;
    history moment;
    moment.id = current_reader->get_history()[position].id;
    moment.dateBeging = current_reader->get_history()[position].dateBeging;
    moment.dateEnd = QDate::currentDate();
    moment.status = "восстановлен";
    current_reader->unset_history(current_reader->get_history()[position]);
    current_reader->set_history(moment);
    updateInfo_Reader();
}

void MainWindow::restoreBook()
{
    current_book->set_checkDeleted(false);
    current_book->set_checkChanged(true);
    updateInfo_Book();
}

void MainWindow::on_tableWidgetHistory_itemDoubleClicked(QTableWidgetItem *item)
{
    if (item->column()) return;

    int position = 0;
    do
    {
        if (item->text() == bookList[position].get_name()) break;
        position++;
    } while(position < bookList.size());

    if (position == bookList.size()) return;
    if (bookList[position].get_checkDeleted())
    {
        Deletion *warning = new Deletion();
        warning->setForm(1);
        warning->setText("Эта книга удалена!");
        warning->show();
        warning->exec();
        return;
    }

    current_itemBook = (ListItem*) ui->listWidget_Book->findItems(bookList[position].get_name(), Qt::MatchWrap)[0];
    ui->listWidget_Book->setCurrentItem(current_itemBook);
    current_itemBook->setSelected(true);
    emit ui->tabWidget->setCurrentIndex(1);
}

void MainWindow::on_tableWidgetBooks_itemDoubleClicked(QTableWidgetItem *item)
{
    emit on_tableWidgetHistory_itemDoubleClicked(item);
}

void MainWindow::on_actionAbout_triggered()
{
    Deletion *window = new Deletion();
    window->setForm(0);
    window->setText("By Egor Ptashnik. Version: 1.0");
    window->show();
    window->exec();
}

void MainWindow::load_DataBases()
{
    ui->listWidget->clear();
    ui->listWidget_Book->clear();
    readerList.clear();
    bookList.clear();

    if (database.parse_readerFile(readerList) && database.parse_bookFile(bookList))
    {
        ui->pushButton_AddBook->setEnabled(true);
        ui->pushButton_DeleteBook->setEnabled(true);
        ui->pushButton_DeleteReader->setEnabled(true);
        ui->pushButton_Info_Book->setEnabled(true);
        ui->pushButton_NewBook->setEnabled(true);
        ui->pushButton_NewReader->setEnabled(true);
        ui->pushButton_ReturnBook->setEnabled(true);
        ui->pushButton_Reverse->setEnabled(true);
        ui->Button_Info_Reader->setEnabled(true);
        ui->actionDeleted->setEnabled(true);
        fill_listWidgets();
    }
    else
    {
        ui->pushButton_AddBook->setEnabled(false);
        ui->pushButton_DeleteBook->setEnabled(false);
        ui->pushButton_DeleteReader->setEnabled(false);
        ui->pushButton_Info_Book->setEnabled(false);
        ui->pushButton_NewBook->setEnabled(false);
        ui->pushButton_NewReader->setEnabled(false);
        ui->pushButton_ReturnBook->setEnabled(false);
        ui->pushButton_Reverse->setEnabled(false);
        ui->Button_Info_Reader->setEnabled(false);
        ui->actionDeleted->setEnabled(false);
        Deletion *window = new Deletion();
        window->setForm(1);
        window->setText("Ошибка! Выберите базы данных.");
        window->setModal(true);
        window->show();
        window->exec();
    }
}

void MainWindow::changePhotoReader(QString newPath)
{
    QString oldPath;
    oldPath.setNum(current_reader->get_id());
    oldPath = database.get_readerPhotoPath()+oldPath+".jpg";
    QFile::remove(oldPath);
    QFile::copy(newPath, oldPath);
}

void MainWindow::changePhotoBook(QString newPath)
{
    QString oldPath;
    oldPath.setNum(current_book->get_id());
    oldPath = database.get_bookPhotoPath()+oldPath+".jpg";
    QFile::remove(oldPath);
    QFile::copy(newPath, oldPath);
}
