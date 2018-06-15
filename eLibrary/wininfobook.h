#ifndef WININFOBOOK_H
#define WININFOBOOK_H

#include <QDialog>
#include <QLabel>
#include <QFileDialog>
#include "book.h"
#include "mainwindow.h"

namespace Ui {
class WinInfoBook;
}

class WinInfoBook : public QDialog
{
    Q_OBJECT

public:
    explicit WinInfoBook(QWidget *parent = 0);
    ~WinInfoBook();
    void fill_information(Book *);
    void fullfillCheck();
    void connectItem(Book *);

private slots:
    void on_pushButton_cancel_clicked();
    void on_pushButton_photo_clicked();
    void on_edit_photo_textChanged(const QString &path);
    void on_pushButton_save_clicked();

signals:
    void changePhoto(QString newPath);

private:
    Ui::WinInfoBook *ui;
    Book *selected_book;
    QString pathPhoto;
};

#endif // WININFOBOOK_H
