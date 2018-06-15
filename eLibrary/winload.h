#ifndef WINLOAD_H
#define WINLOAD_H

#include <QDialog>
#include <QFileDialog>
#include "database.h"
#include "deletion.h"

namespace Ui {
class WinLoad;
}

class WinLoad : public QDialog
{
    Q_OBJECT

public:
    explicit WinLoad(QWidget *parent = 0);
    ~WinLoad();
    void set_database(DataBase *DB);
    void fullfillCheck();

private slots:
    void on_pushButton_readers_clicked();
    void on_pushButton_readersPhoto_clicked();
    void on_pushButton_books_clicked();
    void on_pushButton_booksPhoto_clicked();
    void on_pushButton_cancel_clicked();
    void on_pushButton_save_clicked();

private:
    Ui::WinLoad *ui;
    DataBase *database;
};

#endif // WINLOAD_H
