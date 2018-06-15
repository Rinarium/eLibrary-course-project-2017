#include "book.h"

Book::Book()
{
    quantity = 0;
    available = 0;
    publication = 0;
    checkDeleted = false;
    checkChanged = false;
}

Book::~Book()
{

}

void Book::set_id(int ID)
{
    id = ID;
}

void Book::set_checkDeleted(bool CHECK)
{
    checkDeleted = CHECK;
}

void Book::set_checkDeleted(int CHECK)
{
    checkDeleted = (bool) CHECK;
}

void Book::set_checkChanged(bool CHECK)
{
    checkChanged = CHECK;
}

void Book::set_name(QString NAME)
{
    name = NAME;
}

void Book::set_author(QString AUTHOR)
{
    author = AUTHOR;
}

void Book::set_publication(int PUBLICATION)
{
    publication = PUBLICATION;
}

void Book::set_pages(int PAGES)
{
    pages = PAGES;
}

void Book::set_quantity(int QUANTITY)
{
    quantity = QUANTITY;
}

void Book::set_available(int AVAILABLE)
{
    available = AVAILABLE;
}

void Book::set_description(QString DESCRIPTION)
{
    description = DESCRIPTION;
}

void Book::set_photo(QPixmap PHOTO)
{
    photo = PHOTO;
}

int Book::get_id()
{
    return id;
}

bool Book::get_checkDeleted()
{
    return checkDeleted;
}

bool Book::get_checkChanged()
{
    return checkChanged;
}

QString Book::get_name()
{
    return name;
}

QString Book::get_author()
{
    return author;
}

int Book::get_publication()
{
    return publication;
}

int Book::get_pages()
{
    return pages;
}

int Book::get_quantity()
{
    return quantity;
}

int Book::get_available()
{
    return available;
}

QString Book::get_description()
{
    return description;
}

QPixmap Book::get_photo()
{
    return photo;
}
