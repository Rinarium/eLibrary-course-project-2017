#ifndef DELETION_H
#define DELETION_H

#include <QDialog>

namespace Ui {
class Deletion;
}

class Deletion : public QDialog
{
    Q_OBJECT

public:
    explicit Deletion(QWidget *parent = 0);
    ~Deletion();
    void setText(QString text);
    void setForm(int value);


private slots:
    void on_no_pushButton_clicked();
    void on_yes_pushButton_clicked();
    void formingWindow();

    void on_ok_pushButton_clicked();

private:
    Ui::Deletion *ui;
    int form;
};

#endif // DELETION_H
