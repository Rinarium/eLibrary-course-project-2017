#include "wininfobook.h"
#include "ui_wininfobook.h"

WinInfoBook::WinInfoBook(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::WinInfoBook)
{
    ui->setupUi(this);

    ui->edit_publication->setMinimum(0);
    ui->edit_publication->setMaximum(2200);
    ui->edit_quantity->setMaximum(500);

    QPixmap photo;
    photo.load("book.gif");
    photo = photo.scaled(200, 300, Qt::KeepAspectRatioByExpanding, Qt::SmoothTransformation);
    ui->photo->setPixmap(photo);
}

WinInfoBook::~WinInfoBook()
{
    delete ui;
}

void WinInfoBook::fill_information(Book *book)
{
    connectItem(book);
    ui->edit_name->setText(book->get_name());
    ui->edit_author->setText(book->get_author());
    ui->edit_publication->setValue(book->get_publication());
    ui->edit_quantity->setMinimum(0);
    QString converter;
    converter.setNum(book->get_pages());
    ui->edit_pages->setText(converter);
    ui->edit_quantity->setValue(book->get_quantity());
    ui->edit_quantity->setMinimum(book->get_quantity() - book->get_available());
    ui->edit_description->setText(book->get_description());
    QPixmap copy;
    copy = book->get_photo().scaled(200, 300, Qt::KeepAspectRatioByExpanding, Qt::SmoothTransformation);
    ui->photo->setPixmap(copy);
}

void WinInfoBook::on_pushButton_cancel_clicked()
{
    this->reject();
}

void WinInfoBook::on_pushButton_photo_clicked()
{
    QString pathPhoto = QFileDialog::getOpenFileName(this,tr("Выбрать фото"),"D://","Image File(*.jpg)");
    ui->edit_photo->setText(pathPhoto);
}

void WinInfoBook::on_edit_photo_textChanged(const QString &path)
{
    QPixmap photo(path), copy;
    if (photo.isNull()) photo.load("book.gif");
    copy = photo.scaled(200, 300, Qt::KeepAspectRatioByExpanding, Qt::SmoothTransformation);
    ui->photo->setPixmap(copy);
    pathPhoto = path;
}

void WinInfoBook::fullfillCheck()
{
    Deletion *window = new Deletion();
    window->setForm(1);
    window->setText("Основные поля должны быть заполнены!");
    window->setModal(true);
    window->show();
    window->exec();
}

void WinInfoBook::on_pushButton_save_clicked()
{
    bool check = true;
    if (ui->edit_name->text().isEmpty()) check = false;
    if (ui->edit_author->text().isEmpty()) check = false;
    if (!ui->edit_publication->text().toInt()) check = false;
    if (!ui->edit_pages->text().toInt()) check = false;
    if (!ui->edit_quantity->text().toInt()) check = false;
    if (!check)
    {
        fullfillCheck();
    }
    else
    {
        selected_book->set_name(ui->edit_name->text());
        selected_book->set_author(ui->edit_author->text());
        selected_book->set_publication(ui->edit_publication->text().toInt());
        selected_book->set_pages(ui->edit_pages->text().toInt());
        selected_book->set_available(selected_book->get_available()+ui->edit_quantity->text().toInt()-selected_book->get_quantity());
        selected_book->set_quantity(ui->edit_quantity->text().toInt());
        selected_book->set_description(ui->edit_description->toPlainText());
        const QPixmap *temp = ui->photo->pixmap();
        selected_book->set_photo(*temp);

        if (!pathPhoto.isEmpty()) emit changePhoto(pathPhoto);

        this->accept();
    }
}

void WinInfoBook::connectItem(Book *book)
{
    selected_book = book;
    selected_book->set_checkChanged(true);
    ui->info_id->setNum(book->get_id());
}
