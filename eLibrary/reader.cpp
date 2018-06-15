#include "reader.h"

Reader::Reader()
{
    id = 0;
    checkDeleted = false;
    checkChanged = false;
    checkBlacklist = false;
    name = "";
    last_name = "";
    middle_name = "";
    birthday = QDate::fromString("01.01.1900", "dd.MM.yyyy");
    adress = "";
    phone_number = "";
    photo.load("");
}

Reader::~Reader()
{

}

void Reader::set_id(int ID)
{
    id = ID;
}

void Reader::set_checkDeleted(bool CHECK)
{
    checkDeleted = CHECK;
}

void Reader::set_checkDeleted(int CHECK)
{
    checkDeleted = (bool) CHECK;
}

void Reader::set_checkChanged(bool CHECK)
{
    checkChanged = CHECK;
}

void Reader::set_checkBlacklist(bool CHECK)
{
    checkBlacklist = CHECK;
}

void Reader::set_name(QString NAME)
{
    name = NAME;
}

void Reader::set_last_name(QString L_NAME)
{
    last_name = L_NAME;
}

void Reader::set_middle_name(QString M_NAME)
{
    middle_name = M_NAME;
}

void Reader::set_phone_number(QString NUMBER)
{
    phone_number = NUMBER;
}

void Reader::set_birthday(QDate DATE)
{
    birthday = DATE;
}

void Reader::set_photo(QPixmap PHOTO)
{
    photo = PHOTO;
}

void Reader::set_adress(QString ADRESS)
{
    adress = ADRESS;
}

void Reader::set_history(history ELEMENT)
{
    historyList << ELEMENT;
}

void Reader::unset_history(history ELEMENT)
{
    historyList.removeOne(ELEMENT);
}

void Reader::set_book(book BOOK)
{
    bookList << BOOK;
}

void Reader::unset_book(book BOOK)
{
    bookList.removeOne(BOOK);
}

int Reader::get_id()
{
    return id;
}

bool Reader::get_checkDeleted()
{
    return checkDeleted;
}

bool Reader::get_checkChanged()
{
    return checkChanged;
}

bool Reader::get_checkBlacklist()
{
    return checkBlacklist;
}

QString Reader::get_name()
{
    return name;
}

QString Reader::get_last_name()
{
    return last_name;
}

QString Reader::get_middle_name()
{
    return middle_name;
}

QDate Reader::get_birthday()
{
    return birthday;
}

QPixmap Reader::get_photo()
{
    return photo;
}

QString Reader::get_phone_number()
{
    return phone_number;
}

QString Reader::get_adress()
{
    return adress;
}

QList<history> Reader::get_history()
{
    return historyList;
}

QList<book> Reader::get_book()
{
    return bookList;
}

bool operator == (const book &first, const book &second)
{
    if (first.id != second.id) return false;
    if (first.dateBeging != second.dateBeging) return false;
    if (first.dateEnd != second.dateEnd) return false;
    return true;
}

history& history::operator = (const book &value)
{
    this->id = value.id;
    this->dateBeging = value.dateBeging;
    this->dateEnd = value.dateEnd;

    return *this;
}


bool operator == (const history &first, const history &second)
{
    if (first.id != second.id) return false;
    if (first.dateBeging != second.dateBeging) return false;
    if (first.dateEnd != second.dateEnd) return false;
    if (first.status != second.status) return false;
    return true;
}
