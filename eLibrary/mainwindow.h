#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QListWidgetItem>
#include <QTableWidgetItem>
#include <QMessageBox>
#include <QDate>
#include "database.h"
#include "listitem.h"
#include "winload.h"
#include "wininforeader.h"
#include "wininfobook.h"
#include "winbooking.h"
#include "winreturn.h"
#include "deletion.h"
#include "reader.h"
#include "book.h"

namespace Ui {
class MainWindow;
class ListItem;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    QList<Reader> readerList;
    QList<Book> bookList;
    Reader *current_reader;
    Book *current_book;
    ListItem *current_itemReader, *current_itemBook;
    void resizeEvent(QResizeEvent *event);
    void fill_listWidgets();

private slots:
    void on_actionDatabases_triggered();
    void on_listWidget_itemClicked(QListWidgetItem *item);
    void updateInfo_Reader();
    void rejectNew_Reader();
    void on_Button_Info_Reader_clicked();
    void on_pushButton_NewReader_clicked();
    void on_pushButton_Reverse_clicked();
    void on_listWidget_Book_itemClicked(QListWidgetItem *item);
    void updateInfo_Book();
    void rejectNew_Book();
    void on_pushButton_Info_Book_clicked();
    void on_pushButton_NewBook_clicked();
    void readerItem_selected();
    void bookItem_selected();
    void on_lineSearch_textChanged(const QString &text);
    void on_lineSearch_Book_textChanged(const QString &text);
    void on_pushButton_AddBook_clicked();
    void on_pushButton_ReturnBook_clicked();
    void on_pushButton_DeleteReader_clicked();
    void on_pushButton_DeleteBook_clicked();
    void deleteReader();
    void deleteBook();
    void restoreReader();
    void restoreBook();
    void newSize(QSize *newSize);
    void on_actionDeleted_triggered();    
    void on_tableWidgetHistory_itemDoubleClicked(QTableWidgetItem *item);
    void on_tableWidgetBooks_itemDoubleClicked(QTableWidgetItem *item);
    void on_actionAbout_triggered();
    void load_DataBases();
    void changePhotoReader(QString newPath);
    void changePhotoBook(QString newPath);

signals:
    void sizeChanged(QSize *newSize);

private:
    Ui::MainWindow *ui;
    DataBase database;
    bool check_showDeleted;
};

#endif // MAINWINDOW_H
