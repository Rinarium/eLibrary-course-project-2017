#ifndef READER_H
#define READER_H

#include <QObject>
#include <QWidget>
#include <QListWidgetItem>
#include <QDate>

struct book
{
    int id;
    QDate dateBeging;
    QDate dateEnd;

    friend bool operator == (const book &first, const book &second);
};

struct history
{
    int id;
    QDate dateBeging;
    QDate dateEnd;
    QString status;

    history& operator = (const book &value);
    friend bool operator == (const history &first, const history &second);
};

class Reader
{
public:
    Reader();
    ~Reader();
    void set_id(int);
    void set_checkDeleted(bool);
    void set_checkDeleted(int);
    void set_checkChanged(bool);
    void set_checkBlacklist(bool);
    void set_name(QString);
    void set_last_name(QString temp);
    void set_middle_name(QString);
    void set_adress(QString);
    void set_phone_number(QString);
    void set_birthday(QDate);
    void set_photo(QPixmap);
    void set_history(history);
    void unset_history(history);
    void set_book(book);
    void unset_book(book);
    int get_id();
    bool get_checkDeleted();
    bool get_checkChanged();
    bool get_checkBlacklist();
    QString get_name();
    QString get_last_name();
    QString get_middle_name();
    QString get_adress();
    QString get_phone_number();
    QDate get_birthday();
    QPixmap get_photo();
    QList<history> get_history();
    QList<book> get_book();
private:
    int id;
    bool checkDeleted;
    bool checkChanged;
    bool checkBlacklist;
    QString name;
    QString last_name;
    QString middle_name;
    QString adress;
    QString phone_number;
    QDate birthday;
    QPixmap photo;
    QList<history> historyList;
    QList<book> bookList;
};

#endif // READER_H
