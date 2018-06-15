/********************************************************************************
** Form generated from reading UI file 'winbooking.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINBOOKING_H
#define UI_WINBOOKING_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_WinBooking
{
public:
    QListWidget *bookWidget;
    QLineEdit *searchLine;
    QDateEdit *dateTo_Edit;
    QLabel *lbl_readerName;
    QLabel *lbl_bookName;
    QLabel *lbl_dateFrom;
    QLabel *lbl_dateTo;
    QPushButton *add_pushButton;
    QPushButton *cancel_pushButton;
    QLabel *info_readerName;
    QLabel *info_bookName;
    QLabel *info_dateFrom;
    QLabel *lbl_available;
    QLabel *info_available;

    void setupUi(QDialog *WinBooking)
    {
        if (WinBooking->objectName().isEmpty())
            WinBooking->setObjectName(QStringLiteral("WinBooking"));
        WinBooking->resize(615, 220);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(WinBooking->sizePolicy().hasHeightForWidth());
        WinBooking->setSizePolicy(sizePolicy);
        WinBooking->setMinimumSize(QSize(615, 220));
        WinBooking->setMaximumSize(QSize(615, 220));
        WinBooking->setStyleSheet(QLatin1String("QDialog {\n"
"background-color: #3a3633;\n"
"}"));
        bookWidget = new QListWidget(WinBooking);
        bookWidget->setObjectName(QStringLiteral("bookWidget"));
        bookWidget->setGeometry(QRect(10, 48, 210, 161));
        bookWidget->setMinimumSize(QSize(210, 0));
        bookWidget->setMaximumSize(QSize(210, 16777215));
        bookWidget->setStyleSheet(QLatin1String("QListWidget {\n"
"border-width:2%;\n"
"border-color: #d81b1b;\n"
"border-style: solid;\n"
"padding: 2px;\n"
"padding-left: 2px;\n"
"padding-right: 2px;\n"
"background-color: #403D3A;\n"
"font: 10pt \"Tahoma\";\n"
"color: white;\n"
"}\n"
"QListWidget:item:selected {\n"
"background-color: #d81b1b;\n"
"color:white\n"
"}\n"
"QListWidget:item:hover {\n"
"background-color: #E96060;\n"
"color:white\n"
"}\n"
"\n"
"QListWidget::item:selected:!active{\n"
"background-color: #FF8181;\n"
"color:white\n"
"}\n"
"\n"
"QScrollBar:horizontal{\n"
"    border: 2px solid grey;\n"
"    background: #FF8181;\n"
"    height: 12px;\n"
"    margin: 0 10px 0 10px;\n"
"}\n"
"QScrollBar::handle:horizontal, QScrollBar::handle:vertical  {\n"
"    background: #d81b1b;\n"
"    min-width: 5px;\n"
"}\n"
"QScrollBar::add-line:horizontal  {\n"
"    border: 2px solid grey;\n"
"    background: #3a3633;\n"
"    width: 5px;\n"
"    subcontrol-position: top;\n"
"    subcontrol-origin: margin;\n"
"}\n"
"\n"
"QScrollBar::sub-line:horizontal  {\n"
"    bo"
                        "rder: 2px solid grey;\n"
"    background: #403D3A;\n"
"    width: 5px;\n"
"    subcontrol-position:bottom;\n"
"    subcontrol-origin: margin;\n"
"}\n"
"\n"
"QScrollBar:vertical{\n"
"    border: 2px solid grey;\n"
"    background: #FF8181;\n"
"    width: 12px;\n"
"    margin: 10px 0 10px 0;\n"
"}\n"
"\n"
"QScrollBar::add-line:vertical  {\n"
"    border: 2px solid grey;\n"
"    background: #403D3A;\n"
"    height: 5px;\n"
"    subcontrol-position: right;\n"
"    subcontrol-origin: margin;\n"
"}\n"
"\n"
"QScrollBar::sub-line:vertical  {\n"
"    border: 2px solid grey;\n"
"    background: #3a3633;\n"
"    height: 5px;\n"
"    subcontrol-position: left;\n"
"    subcontrol-origin: margin;\n"
"}"));
        searchLine = new QLineEdit(WinBooking);
        searchLine->setObjectName(QStringLiteral("searchLine"));
        searchLine->setGeometry(QRect(10, 20, 210, 21));
        searchLine->setMinimumSize(QSize(210, 0));
        searchLine->setMaximumSize(QSize(210, 16777215));
        searchLine->setStyleSheet(QLatin1String("QLineEdit {\n"
"border-width:2px;\n"
"border-color: #d81b1b;\n"
"border-style: solid;\n"
"font: 10pt \"Tahoma\";\n"
"color: white;\n"
"selection-color: white;\n"
"selection-background-color: #d81b1b;\n"
"background-color: #403D3A;\n"
"}"));
        dateTo_Edit = new QDateEdit(WinBooking);
        dateTo_Edit->setObjectName(QStringLiteral("dateTo_Edit"));
        dateTo_Edit->setGeometry(QRect(360, 140, 123, 22));
        dateTo_Edit->setStyleSheet(QLatin1String("QDateEdit\n"
"{\n"
"	border: 1px solid  #3a3633;\n"
"    padding: 1px 18px 1px 3px;\n"
"	font: 10pt \"Tahoma\";\n"
"    min-width: 6em;\n"
"	color: white;\n"
"	background-color: #d81b1b;\n"
"	selection-color: white;\n"
"	selection-background-color: #E96060;\n"
"}"));
        lbl_readerName = new QLabel(WinBooking);
        lbl_readerName->setObjectName(QStringLiteral("lbl_readerName"));
        lbl_readerName->setGeometry(QRect(270, 20, 47, 25));
        lbl_readerName->setStyleSheet(QLatin1String("QLabel {\n"
"font: 9pt \"Tahoma\";\n"
"color: white;\n"
"}"));
        lbl_bookName = new QLabel(WinBooking);
        lbl_bookName->setObjectName(QStringLiteral("lbl_bookName"));
        lbl_bookName->setGeometry(QRect(270, 50, 47, 25));
        lbl_bookName->setStyleSheet(QLatin1String("QLabel {\n"
"font: 9pt \"Tahoma\";\n"
"color: white;\n"
"}"));
        lbl_dateFrom = new QLabel(WinBooking);
        lbl_dateFrom->setObjectName(QStringLiteral("lbl_dateFrom"));
        lbl_dateFrom->setGeometry(QRect(270, 110, 81, 25));
        lbl_dateFrom->setStyleSheet(QLatin1String("QLabel {\n"
"font: 9pt \"Tahoma\";\n"
"color: white;\n"
"}"));
        lbl_dateTo = new QLabel(WinBooking);
        lbl_dateTo->setObjectName(QStringLiteral("lbl_dateTo"));
        lbl_dateTo->setGeometry(QRect(270, 140, 81, 25));
        lbl_dateTo->setStyleSheet(QLatin1String("QLabel {\n"
"font: 9pt \"Tahoma\";\n"
"color: white;\n"
"}"));
        add_pushButton = new QPushButton(WinBooking);
        add_pushButton->setObjectName(QStringLiteral("add_pushButton"));
        add_pushButton->setGeometry(QRect(400, 180, 80, 24));
        add_pushButton->setStyleSheet(QLatin1String("QPushButton {\n"
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
        cancel_pushButton = new QPushButton(WinBooking);
        cancel_pushButton->setObjectName(QStringLiteral("cancel_pushButton"));
        cancel_pushButton->setGeometry(QRect(500, 180, 80, 24));
        cancel_pushButton->setStyleSheet(QLatin1String("QPushButton {\n"
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
        info_readerName = new QLabel(WinBooking);
        info_readerName->setObjectName(QStringLiteral("info_readerName"));
        info_readerName->setGeometry(QRect(310, 20, 271, 25));
        info_readerName->setStyleSheet(QLatin1String("QLabel {\n"
"font: 9pt \"Tahoma\";\n"
"color: white;\n"
"}"));
        info_bookName = new QLabel(WinBooking);
        info_bookName->setObjectName(QStringLiteral("info_bookName"));
        info_bookName->setGeometry(QRect(310, 50, 271, 25));
        info_bookName->setStyleSheet(QLatin1String("QLabel {\n"
"font: 9pt \"Tahoma\";\n"
"color: white;\n"
"}"));
        info_dateFrom = new QLabel(WinBooking);
        info_dateFrom->setObjectName(QStringLiteral("info_dateFrom"));
        info_dateFrom->setGeometry(QRect(362, 110, 121, 25));
        info_dateFrom->setStyleSheet(QLatin1String("QLabel {\n"
"font: 9pt \"Tahoma\";\n"
"color: white;\n"
"}"));
        lbl_available = new QLabel(WinBooking);
        lbl_available->setObjectName(QStringLiteral("lbl_available"));
        lbl_available->setGeometry(QRect(270, 80, 71, 25));
        lbl_available->setStyleSheet(QLatin1String("QLabel {\n"
"font: 9pt \"Tahoma\";\n"
"color: white;\n"
"}"));
        info_available = new QLabel(WinBooking);
        info_available->setObjectName(QStringLiteral("info_available"));
        info_available->setGeometry(QRect(350, 80, 141, 25));
        info_available->setStyleSheet(QLatin1String("QLabel {\n"
"font: 9pt \"Tahoma\";\n"
"color: white;\n"
"}"));

        retranslateUi(WinBooking);

        QMetaObject::connectSlotsByName(WinBooking);
    } // setupUi

    void retranslateUi(QDialog *WinBooking)
    {
        WinBooking->setWindowTitle(QApplication::translate("WinBooking", "Dialog", Q_NULLPTR));
        lbl_readerName->setText(QApplication::translate("WinBooking", "\320\232\320\276\320\274\321\203:", Q_NULLPTR));
        lbl_bookName->setText(QApplication::translate("WinBooking", "\320\232\320\275\320\270\320\263\320\260:", Q_NULLPTR));
        lbl_dateFrom->setText(QApplication::translate("WinBooking", "\320\224\320\260\321\202\320\260 \320\262\321\213\320\264\320\260\321\207\320\270:", Q_NULLPTR));
        lbl_dateTo->setText(QApplication::translate("WinBooking", "\320\224\320\260\321\202\320\260 \320\262\320\276\320\267\320\262\321\200\320\260\321\202\320\260:", Q_NULLPTR));
        add_pushButton->setText(QApplication::translate("WinBooking", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", Q_NULLPTR));
        cancel_pushButton->setText(QApplication::translate("WinBooking", "\320\236\321\202\320\274\320\265\320\275\320\260", Q_NULLPTR));
        info_readerName->setText(QString());
        info_bookName->setText(QString());
        info_dateFrom->setText(QString());
        lbl_available->setText(QApplication::translate("WinBooking", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276:", Q_NULLPTR));
        info_available->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class WinBooking: public Ui_WinBooking {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINBOOKING_H
