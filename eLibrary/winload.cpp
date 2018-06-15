#include "winload.h"
#include "ui_winload.h"

WinLoad::WinLoad(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::WinLoad)
{
    ui->setupUi(this);
    database = nullptr;
    setWindowTitle("Базы данных");
}

WinLoad::~WinLoad()
{
    delete ui;
}

void WinLoad::set_database(DataBase *DB)
{
    database = DB;
}

void WinLoad::on_pushButton_readers_clicked()
{
    QString path = QFileDialog::getOpenFileName(this,tr("Выбрать базу данных"),"/home","Image File(*.txt)");
    ui->edit_readers->setText(path);
}

void WinLoad::on_pushButton_readersPhoto_clicked()
{
    QString path = QFileDialog::getExistingDirectory(this, tr("Выбрать фото читателей"),"/home", QFileDialog::ShowDirsOnly | QFileDialog::DontResolveSymlinks);
    ui->edit_readersPhoto->setText(path);
}

void WinLoad::on_pushButton_books_clicked()
{
    QString path = QFileDialog::getOpenFileName(this,tr("Выбрать базу данных"),"/home","Image File(*.sqlite)");
    ui->edit_books->setText(path);
}

void WinLoad::on_pushButton_booksPhoto_clicked()
{
    QString path = QFileDialog::getExistingDirectory(this, tr("Выбрать фото книг"),"/home", QFileDialog::ShowDirsOnly | QFileDialog::DontResolveSymlinks);
    ui->edit_booksPhoto->setText(path);
}

void WinLoad::on_pushButton_cancel_clicked()
{
    this->hide();
}

void WinLoad::fullfillCheck()
{
    Deletion *window = new Deletion();
    window->setForm(1);
    window->setText("Все поля должны быть заполнены!");
    window->setModal(true);
    window->show();
    window->exec();
}

void WinLoad::on_pushButton_save_clicked()
{
    bool check = true;
    if (ui->edit_readers->text().isEmpty()) check = false;
    if (ui->edit_readersPhoto->text().isEmpty()) check = false;
    if (ui->edit_books->text().isEmpty()) check = false;
    if (ui->edit_booksPhoto->text().isEmpty()) check = false;
    if (ui->edit_booksTable->text().isEmpty()) check = false;
    if (!check)
    {
        fullfillCheck();
    }
    else
    {
        database->set_readerFilePath(ui->edit_readers->text());
        database->set_readerPhotoPath(ui->edit_readersPhoto->text());
        database->set_bookFilePath(ui->edit_books->text());
        database->set_bookPhotoPath(ui->edit_booksPhoto->text());
        database->set_bookTableName(ui->edit_booksTable->text());
        this->accept();
    }
}
