#include "deletion.h"
#include "ui_deletion.h"

Deletion::Deletion(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Deletion)
{
    ui->setupUi(this);
    ui->text->setAlignment(Qt::AlignCenter);
}

Deletion::~Deletion()
{
    delete ui;
}

void Deletion::on_no_pushButton_clicked()
{
    this->hide();
}

void Deletion::on_yes_pushButton_clicked()
{
    this->accept();
}

void Deletion::on_ok_pushButton_clicked()
{
    this->accept();
}

void Deletion::setText(QString text)
{
    ui->text->setText(text);
}

void Deletion::setForm(int value)
{
    form = value;
    emit formingWindow();
}

void Deletion::formingWindow()
{
    QPixmap icon;
    switch (form)
    {
    case 0:
        this->setWindowTitle("О программе");
        icon.load("icon.gif", 0, Qt::AutoColor);
        icon = icon.scaled(100, 100, Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
        ui->no_pushButton->hide();
        ui->yes_pushButton->hide();
        break;
    case 1:
        this->setWindowTitle("Предупреждение");
        icon.load("warning.gif", 0, Qt::AutoColor);
        icon = icon.scaled(100, 100, Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
        ui->no_pushButton->hide();
        ui->yes_pushButton->hide();
        break;
    case 2:
        this->setWindowTitle("Предупрежние");
        icon.load("question.gif", 0, Qt::AutoColor);
        icon = icon.scaled(100, 100, Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
        ui->ok_pushButton->hide();
        break;
    }
    ui->icon->setPixmap(icon);
}
