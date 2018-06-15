#ifndef WININFOREADER_H
#define WININFOREADER_H

#include <QDialog>
#include <QLabel>
#include <QFileDialog>
#include "reader.h"
#include "mainwindow.h"

namespace Ui {
class WinInfoReader;
}

class WinInfoReader : public QDialog
{
    Q_OBJECT

public:
    explicit WinInfoReader(QWidget *parent = 0);
    ~WinInfoReader();
    void fill_information(Reader *);
    void fullfillCheck();
    void connectItem(Reader *);

private slots:
    void on_pushButton_photo_clicked();
    void on_edit_photo_textChanged(const QString &path);
    void on_pushButton_cancel_clicked();
    void on_pushButton_save_clicked();

signals:
    void changePhoto(QString newPath);

private:
    Ui::WinInfoReader *ui;
    Reader *selected_reader;
    QString pathPhoto;
};

#endif // WININFOREADER_H
