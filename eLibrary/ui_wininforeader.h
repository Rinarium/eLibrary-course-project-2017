/********************************************************************************
** Form generated from reading UI file 'wininforeader.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WININFOREADER_H
#define UI_WININFOREADER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WinInfoReader
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *last_namelLayout;
    QLabel *lbl_last_nam;
    QLineEdit *edit_last_name;
    QHBoxLayout *nameLayout;
    QLabel *lbl_name;
    QLineEdit *edit_name;
    QHBoxLayout *middle_nameLayout;
    QLabel *lbl_middle_name;
    QLineEdit *edit_middle_name;
    QHBoxLayout *birthdaylLayout;
    QLabel *lbl_birthday;
    QDateEdit *edit_birthday;
    QHBoxLayout *adressLayout;
    QLabel *lbl_adress;
    QLineEdit *edit_adress;
    QHBoxLayout *phoneLayout;
    QLabel *lbl_phone;
    QLineEdit *edit_phone;
    QHBoxLayout *idLayout;
    QLabel *lbl_id;
    QLabel *info_id;
    QWidget *horizontalLayoutWidget_8;
    QHBoxLayout *photolLayout;
    QLabel *lbl_photo;
    QLineEdit *edit_photo;
    QPushButton *pushButton_photo;
    QLabel *photo;
    QPushButton *pushButton_save;
    QPushButton *pushButton_cancel;

    void setupUi(QDialog *WinInfoReader)
    {
        if (WinInfoReader->objectName().isEmpty())
            WinInfoReader->setObjectName(QStringLiteral("WinInfoReader"));
        WinInfoReader->resize(640, 450);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(WinInfoReader->sizePolicy().hasHeightForWidth());
        WinInfoReader->setSizePolicy(sizePolicy);
        WinInfoReader->setMinimumSize(QSize(640, 450));
        WinInfoReader->setMaximumSize(QSize(640, 450));
        WinInfoReader->setStyleSheet(QLatin1String("QDialog {\n"
"background-color: #3a3633;\n"
"}"));
        verticalLayoutWidget = new QWidget(WinInfoReader);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(30, 40, 222, 251));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        last_namelLayout = new QHBoxLayout();
        last_namelLayout->setObjectName(QStringLiteral("last_namelLayout"));
        lbl_last_nam = new QLabel(verticalLayoutWidget);
        lbl_last_nam->setObjectName(QStringLiteral("lbl_last_nam"));
        lbl_last_nam->setMinimumSize(QSize(55, 0));
        lbl_last_nam->setStyleSheet(QLatin1String("QLabel {\n"
"font: 9pt \"Tahoma\";\n"
"color: white;\n"
"}"));

        last_namelLayout->addWidget(lbl_last_nam);

        edit_last_name = new QLineEdit(verticalLayoutWidget);
        edit_last_name->setObjectName(QStringLiteral("edit_last_name"));
        edit_last_name->setStyleSheet(QLatin1String("QLineEdit {\n"
"border-width:1px;\n"
"border-color: #3a3633;\n"
"border-style: solid;\n"
"font: 10pt \"Tahoma\";\n"
"color: white;\n"
"selection-color: white;\n"
"selection-background-color: #d81b1b;\n"
"background-color: #524E4B;\n"
"}"));

        last_namelLayout->addWidget(edit_last_name);


        verticalLayout->addLayout(last_namelLayout);

        nameLayout = new QHBoxLayout();
        nameLayout->setObjectName(QStringLiteral("nameLayout"));
        lbl_name = new QLabel(verticalLayoutWidget);
        lbl_name->setObjectName(QStringLiteral("lbl_name"));
        lbl_name->setMinimumSize(QSize(55, 0));
        lbl_name->setStyleSheet(QLatin1String("QLabel {\n"
"font: 9pt \"Tahoma\";\n"
"color: white;\n"
"}"));

        nameLayout->addWidget(lbl_name);

        edit_name = new QLineEdit(verticalLayoutWidget);
        edit_name->setObjectName(QStringLiteral("edit_name"));
        edit_name->setStyleSheet(QLatin1String("QLineEdit {\n"
"border-width:1px;\n"
"border-color: #3a3633;\n"
"border-style: solid;\n"
"font: 10pt \"Tahoma\";\n"
"color: white;\n"
"selection-color: white;\n"
"selection-background-color: #d81b1b;\n"
"background-color: #524E4B;\n"
"}"));

        nameLayout->addWidget(edit_name);


        verticalLayout->addLayout(nameLayout);

        middle_nameLayout = new QHBoxLayout();
        middle_nameLayout->setObjectName(QStringLiteral("middle_nameLayout"));
        lbl_middle_name = new QLabel(verticalLayoutWidget);
        lbl_middle_name->setObjectName(QStringLiteral("lbl_middle_name"));
        lbl_middle_name->setMinimumSize(QSize(55, 0));
        lbl_middle_name->setStyleSheet(QLatin1String("QLabel {\n"
"font: 9pt \"Tahoma\";\n"
"color: white;\n"
"}"));

        middle_nameLayout->addWidget(lbl_middle_name);

        edit_middle_name = new QLineEdit(verticalLayoutWidget);
        edit_middle_name->setObjectName(QStringLiteral("edit_middle_name"));
        edit_middle_name->setStyleSheet(QLatin1String("QLineEdit {\n"
"border-width:1px;\n"
"border-color: #3a3633;\n"
"border-style: solid;\n"
"font: 10pt \"Tahoma\";\n"
"color: white;\n"
"selection-color: white;\n"
"selection-background-color: #d81b1b;\n"
"background-color: #524E4B;\n"
"}"));

        middle_nameLayout->addWidget(edit_middle_name);


        verticalLayout->addLayout(middle_nameLayout);

        birthdaylLayout = new QHBoxLayout();
        birthdaylLayout->setObjectName(QStringLiteral("birthdaylLayout"));
        lbl_birthday = new QLabel(verticalLayoutWidget);
        lbl_birthday->setObjectName(QStringLiteral("lbl_birthday"));
        lbl_birthday->setMinimumSize(QSize(0, 0));
        lbl_birthday->setStyleSheet(QLatin1String("QLabel {\n"
"font: 9pt \"Tahoma\";\n"
"color: white;\n"
"}"));

        birthdaylLayout->addWidget(lbl_birthday);

        edit_birthday = new QDateEdit(verticalLayoutWidget);
        edit_birthday->setObjectName(QStringLiteral("edit_birthday"));
        edit_birthday->setStyleSheet(QLatin1String("QDateEdit\n"
"{\n"
"	border: 1px solid  #3a3633;\n"
"    padding: 1px 18px 1px 3px;\n"
"	font: 10pt \"Tahoma\";\n"
"    min-width: 6em;\n"
"	color: white;\n"
"	background-color: #524E4B;\n"
"	selection-color: white;\n"
"	selection-background-color: #d81b1b;\n"
"}"));

        birthdaylLayout->addWidget(edit_birthday);


        verticalLayout->addLayout(birthdaylLayout);

        adressLayout = new QHBoxLayout();
        adressLayout->setObjectName(QStringLiteral("adressLayout"));
        lbl_adress = new QLabel(verticalLayoutWidget);
        lbl_adress->setObjectName(QStringLiteral("lbl_adress"));
        lbl_adress->setMinimumSize(QSize(55, 0));
        lbl_adress->setStyleSheet(QLatin1String("QLabel {\n"
"font: 9pt \"Tahoma\";\n"
"color: white;\n"
"}"));

        adressLayout->addWidget(lbl_adress);

        edit_adress = new QLineEdit(verticalLayoutWidget);
        edit_adress->setObjectName(QStringLiteral("edit_adress"));
        edit_adress->setStyleSheet(QLatin1String("QLineEdit {\n"
"border-width:1px;\n"
"border-color: #3a3633;\n"
"border-style: solid;\n"
"font: 10pt \"Tahoma\";\n"
"color: white;\n"
"selection-color: white;\n"
"selection-background-color: #d81b1b;\n"
"background-color: #524E4B;\n"
"}"));

        adressLayout->addWidget(edit_adress);


        verticalLayout->addLayout(adressLayout);

        phoneLayout = new QHBoxLayout();
        phoneLayout->setObjectName(QStringLiteral("phoneLayout"));
        lbl_phone = new QLabel(verticalLayoutWidget);
        lbl_phone->setObjectName(QStringLiteral("lbl_phone"));
        lbl_phone->setMinimumSize(QSize(55, 0));
        lbl_phone->setStyleSheet(QLatin1String("QLabel {\n"
"font: 9pt \"Tahoma\";\n"
"color: white;\n"
"}"));

        phoneLayout->addWidget(lbl_phone);

        edit_phone = new QLineEdit(verticalLayoutWidget);
        edit_phone->setObjectName(QStringLiteral("edit_phone"));
        edit_phone->setStyleSheet(QLatin1String("QLineEdit {\n"
"border-width:1px;\n"
"border-color: #3a3633;\n"
"border-style: solid;\n"
"font: 10pt \"Tahoma\";\n"
"color: white;\n"
"selection-color: white;\n"
"selection-background-color: #d81b1b;\n"
"background-color: #524E4B;\n"
"}"));

        phoneLayout->addWidget(edit_phone);


        verticalLayout->addLayout(phoneLayout);

        idLayout = new QHBoxLayout();
        idLayout->setObjectName(QStringLiteral("idLayout"));
        lbl_id = new QLabel(verticalLayoutWidget);
        lbl_id->setObjectName(QStringLiteral("lbl_id"));
        lbl_id->setMinimumSize(QSize(20, 0));
        lbl_id->setMaximumSize(QSize(20, 16777215));
        lbl_id->setStyleSheet(QLatin1String("QLabel {\n"
"font: 9pt \"Tahoma\";\n"
"color: white;\n"
"}"));

        idLayout->addWidget(lbl_id);

        info_id = new QLabel(verticalLayoutWidget);
        info_id->setObjectName(QStringLiteral("info_id"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(info_id->sizePolicy().hasHeightForWidth());
        info_id->setSizePolicy(sizePolicy1);
        info_id->setStyleSheet(QLatin1String("QLabel {\n"
"font: 9pt \"Tahoma\";\n"
"color: white;\n"
"}"));

        idLayout->addWidget(info_id);


        verticalLayout->addLayout(idLayout);

        horizontalLayoutWidget_8 = new QWidget(WinInfoReader);
        horizontalLayoutWidget_8->setObjectName(QStringLiteral("horizontalLayoutWidget_8"));
        horizontalLayoutWidget_8->setGeometry(QRect(30, 340, 591, 30));
        photolLayout = new QHBoxLayout(horizontalLayoutWidget_8);
        photolLayout->setObjectName(QStringLiteral("photolLayout"));
        photolLayout->setContentsMargins(0, 0, 0, 0);
        lbl_photo = new QLabel(horizontalLayoutWidget_8);
        lbl_photo->setObjectName(QStringLiteral("lbl_photo"));
        lbl_photo->setMinimumSize(QSize(50, 0));
        lbl_photo->setStyleSheet(QLatin1String("QLabel {\n"
"font: 9pt \"Tahoma\";\n"
"color: white;\n"
"}"));

        photolLayout->addWidget(lbl_photo);

        edit_photo = new QLineEdit(horizontalLayoutWidget_8);
        edit_photo->setObjectName(QStringLiteral("edit_photo"));
        edit_photo->setStyleSheet(QLatin1String("QLineEdit {\n"
"border-width:1px;\n"
"border-color: #3a3633;\n"
"border-style: solid;\n"
"font: 10pt \"Tahoma\";\n"
"color: white;\n"
"selection-color: white;\n"
"selection-background-color: #d81b1b;\n"
"background-color: #524E4B;\n"
"}"));

        photolLayout->addWidget(edit_photo);

        pushButton_photo = new QPushButton(horizontalLayoutWidget_8);
        pushButton_photo->setObjectName(QStringLiteral("pushButton_photo"));
        pushButton_photo->setMinimumSize(QSize(80, 21));
        pushButton_photo->setMaximumSize(QSize(80, 21));
        pushButton_photo->setStyleSheet(QLatin1String("QPushButton {\n"
"background-color: #d81b1b;\n"
"border-width:0px;\n"
"border-color: #3a3633;\n"
"border-style: solid;\n"
"padding: 5px;\n"
"padding-left: 5px;\n"
"padding-right: 5px;\n"
"font: 10pt \"Tahoma\";\n"
"color: white;\n"
"}\n"
"QPushButton:pressed {\n"
"background-color:rgba(255,255,255,.2);\n"
"}\n"
"QPushButton:hover { background: rgb(255,37,37); }\n"
"QPushButton:disabled { background:#3a3633; }"));

        photolLayout->addWidget(pushButton_photo);

        photo = new QLabel(WinInfoReader);
        photo->setObjectName(QStringLiteral("photo"));
        photo->setGeometry(QRect(340, 40, 250, 250));
        photo->setMinimumSize(QSize(250, 250));
        photo->setMaximumSize(QSize(250, 250));
        photo->setStyleSheet(QLatin1String("QLabel\n"
"{\n"
"border-width:2px;\n"
"border-color: #d81b1b;\n"
"border-style: solid;\n"
"}"));
        pushButton_save = new QPushButton(WinInfoReader);
        pushButton_save->setObjectName(QStringLiteral("pushButton_save"));
        pushButton_save->setEnabled(true);
        pushButton_save->setGeometry(QRect(450, 410, 80, 21));
        pushButton_save->setStyleSheet(QLatin1String("QPushButton {\n"
"background-color: #d81b1b;\n"
"border-width:0px;\n"
"border-color: #3a3633;\n"
"border-style: solid;\n"
"padding: 5px;\n"
"padding-left: 5px;\n"
"padding-right: 5px;\n"
"font: 10pt \"Tahoma\";\n"
"color: white;\n"
"}\n"
"QPushButton:pressed {\n"
"background-color:rgba(255,255,255,.2);\n"
"}\n"
"QPushButton:hover { background: rgb(255,37,37); }\n"
"QPushButton:disabled { background:#3a3633; }"));
        pushButton_cancel = new QPushButton(WinInfoReader);
        pushButton_cancel->setObjectName(QStringLiteral("pushButton_cancel"));
        pushButton_cancel->setGeometry(QRect(540, 410, 80, 21));
        pushButton_cancel->setStyleSheet(QLatin1String("QPushButton {\n"
"background-color: #d81b1b;\n"
"border-width:0px;\n"
"border-color: #3a3633;\n"
"border-style: solid;\n"
"padding: 5px;\n"
"padding-left: 5px;\n"
"padding-right: 5px;\n"
"font: 10pt \"Tahoma\";\n"
"color: white;\n"
"}\n"
"QPushButton:pressed {\n"
"background-color:rgba(255,255,255,.2);\n"
"}\n"
"QPushButton:hover { background: rgb(255,37,37); }\n"
"QPushButton:disabled { background:#3a3633; }"));
        QWidget::setTabOrder(pushButton_save, edit_last_name);
        QWidget::setTabOrder(edit_last_name, edit_name);
        QWidget::setTabOrder(edit_name, edit_middle_name);
        QWidget::setTabOrder(edit_middle_name, edit_birthday);
        QWidget::setTabOrder(edit_birthday, edit_adress);
        QWidget::setTabOrder(edit_adress, edit_phone);
        QWidget::setTabOrder(edit_phone, pushButton_photo);
        QWidget::setTabOrder(pushButton_photo, edit_photo);
        QWidget::setTabOrder(edit_photo, pushButton_cancel);

        retranslateUi(WinInfoReader);

        QMetaObject::connectSlotsByName(WinInfoReader);
    } // setupUi

    void retranslateUi(QDialog *WinInfoReader)
    {
        WinInfoReader->setWindowTitle(QApplication::translate("WinInfoReader", "Dialog", Q_NULLPTR));
        lbl_last_nam->setText(QApplication::translate("WinInfoReader", "\320\244\320\260\320\274\320\270\320\273\320\270\321\217:", Q_NULLPTR));
        lbl_name->setText(QApplication::translate("WinInfoReader", "\320\230\320\274\321\217:", Q_NULLPTR));
        lbl_middle_name->setText(QApplication::translate("WinInfoReader", "\320\236\321\202\321\207\320\265\321\201\321\202\320\262\320\276:", Q_NULLPTR));
        lbl_birthday->setText(QApplication::translate("WinInfoReader", "\320\224\320\260\321\202\320\260 \321\200\320\276\320\266\320\264\320\265\320\275\320\270\321\217:", Q_NULLPTR));
        lbl_adress->setText(QApplication::translate("WinInfoReader", "\320\220\320\264\321\200\320\265\321\201:", Q_NULLPTR));
        lbl_phone->setText(QApplication::translate("WinInfoReader", "\320\242\320\265\320\273\320\265\321\204\320\276\320\275:", Q_NULLPTR));
        lbl_id->setText(QApplication::translate("WinInfoReader", "ID:", Q_NULLPTR));
        info_id->setText(QString());
        lbl_photo->setText(QApplication::translate("WinInfoReader", "\320\244\320\276\321\202\320\276:", Q_NULLPTR));
        pushButton_photo->setText(QApplication::translate("WinInfoReader", "\320\222\321\213\320\261\321\200\320\260\321\202\321\214", Q_NULLPTR));
        photo->setText(QString());
        pushButton_save->setText(QApplication::translate("WinInfoReader", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", Q_NULLPTR));
        pushButton_cancel->setText(QApplication::translate("WinInfoReader", "\320\236\321\202\320\274\320\265\320\275\320\260", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class WinInfoReader: public Ui_WinInfoReader {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WININFOREADER_H
