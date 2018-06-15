#include "wininforeader.h"
#include "ui_wininforeader.h"
#include <iostream>

WinInfoReader::WinInfoReader(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::WinInfoReader)
{
    ui->setupUi(this);

    QPixmap photo;
    photo.load("anon.gif", 0, Qt::AutoColor);
    photo = photo.scaled(250, 250, Qt::KeepAspectRatioByExpanding, Qt::SmoothTransformation);
    ui->photo->setPixmap(photo);
}

WinInfoReader::~WinInfoReader()
{
    delete ui;
}

void WinInfoReader::fill_information(Reader *reader)
{
    connectItem(reader);
    ui->edit_name->setText(reader->get_name());
    ui->edit_last_name->setText(reader->get_last_name());
    ui->edit_middle_name->setText(reader->get_middle_name());
    ui->edit_birthday->setDate(reader->get_birthday());
    ui->edit_adress->setText(reader->get_adress());
    ui->edit_phone->setText(reader->get_phone_number());
    QPixmap copy;
    copy = reader->get_photo().scaled(250, 250, Qt::KeepAspectRatioByExpanding, Qt::SmoothTransformation);
    ui->photo->setPixmap(copy);
}

void WinInfoReader::on_pushButton_photo_clicked()
{
    pathPhoto = QFileDialog::getOpenFileName(this,tr("Выбрать фото"),"D://","Image File(*.jpg)");
    ui->edit_photo->setText(pathPhoto);
}

void WinInfoReader::on_edit_photo_textChanged(const QString &path)
{
    QPixmap photo(path), copy;
    if (photo.isNull()) photo.load("anon.gif");
    copy = photo.scaled(250, 250, Qt::KeepAspectRatioByExpanding, Qt::SmoothTransformation);
    ui->photo->setPixmap(copy);
    pathPhoto = path;
}

void WinInfoReader::on_pushButton_cancel_clicked()
{
    this->reject();
}

void WinInfoReader::fullfillCheck()
{
    Deletion *window = new Deletion();
    window->setForm(1);
    window->setText("Основные поля должны быть заполнены!");
    window->setModal(true);
    window->show();
    window->exec();
}

void WinInfoReader::on_pushButton_save_clicked()
{
    bool check = true;
    if (ui->edit_name->text().isEmpty()) check = false;
    if (ui->edit_last_name->text().isEmpty()) check = false;
    if (ui->edit_middle_name->text().isEmpty()) check = false;
    if (ui->edit_adress->text().isEmpty()) check = false;
    if (ui->edit_phone->text().isEmpty()) check = false;
    if (!check)
    {
        fullfillCheck();
    }
    else
    {
        selected_reader->set_name(ui->edit_name->text());
        selected_reader->set_last_name(ui->edit_last_name->text());
        selected_reader->set_middle_name(ui->edit_middle_name->text());
        selected_reader->set_adress(ui->edit_adress->text());
        selected_reader->set_phone_number(ui->edit_phone->text());
        const QPixmap *temp = ui->photo->pixmap();
        selected_reader->set_photo(*temp);
        selected_reader->set_birthday(ui->edit_birthday->date());

        if (selected_reader->get_history().size() > 1 && selected_reader->get_history().last().id != -3)
        {
            history moment;
            moment.id = -3;
            moment.dateBeging = QDate::currentDate();
            moment.dateEnd = QDate::currentDate();
            moment.status = "-";
            selected_reader->set_history(moment);
        }

        if (!pathPhoto.isEmpty()) emit changePhoto(pathPhoto);

        this->accept();
    }
}

void WinInfoReader::connectItem(Reader *reader)
{
    selected_reader = reader;
    selected_reader->set_checkChanged(true);
    ui->info_id->setNum(reader->get_id());
}
