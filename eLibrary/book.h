#ifndef BOOK_H
#define BOOK_H

#include <QObject>
#include <QWidget>

class Book
{
public:
    Book();
    ~Book();
    void set_id(int);
    void set_checkDeleted(bool);
    void set_checkDeleted(int);
    void set_checkChanged(bool);
    void set_name(QString);
    void set_author(QString);
    void set_publication(int);
    void set_pages(int);
    void set_quantity(int);
    void set_available(int);
    void set_description(QString);
    void set_photo(QPixmap);
    int get_id();
    bool get_checkDeleted();
    bool get_checkChanged();
    QString get_name();
    QString get_author();
    int get_publication();
    int get_pages();
    int get_quantity();
    int get_available();
    QString get_description();
    QPixmap get_photo();
private:
    int id;
    bool checkDeleted;
    bool checkChanged;
    QString name;
    QString author;
    int publication;
    int pages;
    int quantity;
    int available;
    QString description;
    QPixmap photo;
};

#endif // BOOK_H
