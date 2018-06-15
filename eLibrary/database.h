#ifndef DATABASE_H
#define DATABASE_H

#include <QMainWindow>
#include <QTextStream>
#include <QFile>
#include <QList>
#include <QDebug>
#include <QtSql/QtSql>
#include "reader.h"
#include "book.h"

class DataBase
{
public:
    DataBase();
    ~DataBase();
    void set_readerFilePath(QString);
    void set_bookFilePath(QString);
    void set_readerPhotoPath(QString);
    void set_bookPhotoPath(QString);
    void set_bookTableName(QString);
    QString get_readerFilePath();
    QString get_bookFilePath();
    QString get_readerPhotoPath();
    QString get_bookPhotoPath();
    QString get_bookTableName();
    bool parse_readerFile(QList<Reader>&);
    void update_readerFile(QList<Reader>&);
    bool parse_bookFile(QList<Book>&);
    void update_bookFile(QList<Book>&);
private:
    QString readerFilePath;
    QString bookFilePath;
    QString readerPhotoPath;
    QString bookPhotoPath;
    QString bookTableName;
};

#endif // DATABASE_H
