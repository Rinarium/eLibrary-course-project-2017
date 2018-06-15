#ifndef WINRETURN_H
#define WINRETURN_H

#include <QDialog>
#include <QDate>
#include "listitem.h"
#include "reader.h"
#include "book.h"

namespace Ui {
class WinReturn;
}

class WinReturn : public QDialog
{
    Q_OBJECT

public:
    explicit WinReturn(QWidget *parent = 0);
    ~WinReturn();
    void fill_information(Reader *READER, QList<Book> &BOOKLIST);

private slots:
    void on_bookWidget_itemClicked(QListWidgetItem *item);
    void on_searchLine_textChanged(const QString &text);
    void bookItem_selected();
    void on_cancel_pushButton_clicked();
    void on_add_pushButton_clicked();

private:
    Ui::WinReturn *ui;
    Reader *reader;
    Book *book;
    QList<Book> *bookList;
    ListItem *current_itemBook;
    int returnID;
    bool retard;
};

#endif // WINRETURN_H
