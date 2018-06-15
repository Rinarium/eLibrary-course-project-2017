/********************************************************************************
** Form generated from reading UI file 'winreturn.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINRETURN_H
#define UI_WINRETURN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_WinReturn
{
public:
    QLineEdit *searchLine;
    QLabel *lbl_dateReturn;
    QListWidget *bookWidget;
    QLabel *info_dateReturn;
    QLabel *lbl_bookName;
    QPushButton *cancel_pushButton;
    QPushButton *add_pushButton;
    QLabel *lbl_dateReal;
    QLabel *info_dateReal;
    QLabel *info_warning;
    QLabel *lbl_status;
    QComboBox *info_status;
    QLabel *info_bookName;

    void setupUi(QDialog *WinReturn)
    {
        if (WinReturn->objectName().isEmpty())
            WinReturn->setObjectName(QStringLiteral("WinReturn"));
        WinReturn->resize(615, 192);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(WinReturn->sizePolicy().hasHeightForWidth());
        WinReturn->setSizePolicy(sizePolicy);
        WinReturn->setMinimumSize(QSize(615, 192));
        WinReturn->setMaximumSize(QSize(615, 192));
        WinReturn->setStyleSheet(QLatin1String("QDialog {\n"
"background-color: #3a3633;\n"
"}"));
        searchLine = new QLineEdit(WinReturn);
        searchLine->setObjectName(QStringLiteral("searchLine"));
        searchLine->setGeometry(QRect(20, 20, 210, 21));
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
        lbl_dateReturn = new QLabel(WinReturn);
        lbl_dateReturn->setObjectName(QStringLiteral("lbl_dateReturn"));
        lbl_dateReturn->setGeometry(QRect(280, 50, 91, 25));
        lbl_dateReturn->setStyleSheet(QLatin1String("QLabel {\n"
"font: 9pt \"Tahoma\";\n"
"color: white;\n"
"}"));
        bookWidget = new QListWidget(WinReturn);
        bookWidget->setObjectName(QStringLiteral("bookWidget"));
        bookWidget->setGeometry(QRect(20, 48, 210, 131));
        bookWidget->setMinimumSize(QSize(210, 0));
        bookWidget->setMaximumSize(QSize(210, 16777215));
        bookWidget->setStyleSheet(QLatin1String("QListWidget {\n"
"border-width:2px;\n"
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
"    b"
                        "order: 2px solid grey;\n"
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
        info_dateReturn = new QLabel(WinReturn);
        info_dateReturn->setObjectName(QStringLiteral("info_dateReturn"));
        info_dateReturn->setGeometry(QRect(400, 50, 121, 25));
        info_dateReturn->setStyleSheet(QLatin1String("QLabel {\n"
"font: 9pt \"Tahoma\";\n"
"color: white;\n"
"}"));
        lbl_bookName = new QLabel(WinReturn);
        lbl_bookName->setObjectName(QStringLiteral("lbl_bookName"));
        lbl_bookName->setGeometry(QRect(280, 20, 47, 25));
        lbl_bookName->setStyleSheet(QLatin1String("QLabel {\n"
"font: 9pt \"Tahoma\";\n"
"color: white;\n"
"}"));
        cancel_pushButton = new QPushButton(WinReturn);
        cancel_pushButton->setObjectName(QStringLiteral("cancel_pushButton"));
        cancel_pushButton->setGeometry(QRect(510, 160, 80, 24));
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
        add_pushButton = new QPushButton(WinReturn);
        add_pushButton->setObjectName(QStringLiteral("add_pushButton"));
        add_pushButton->setGeometry(QRect(410, 160, 80, 24));
        add_pushButton->setMinimumSize(QSize(0, 23));
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
        lbl_dateReal = new QLabel(WinReturn);
        lbl_dateReal->setObjectName(QStringLiteral("lbl_dateReal"));
        lbl_dateReal->setGeometry(QRect(280, 80, 111, 25));
        lbl_dateReal->setStyleSheet(QLatin1String("QLabel {\n"
"font: 9pt \"Tahoma\";\n"
"color: white;\n"
"}"));
        info_dateReal = new QLabel(WinReturn);
        info_dateReal->setObjectName(QStringLiteral("info_dateReal"));
        info_dateReal->setGeometry(QRect(400, 80, 121, 25));
        info_dateReal->setStyleSheet(QLatin1String("QLabel {\n"
"font: 9pt \"Tahoma\";\n"
"color: white;\n"
"}"));
        info_warning = new QLabel(WinReturn);
        info_warning->setObjectName(QStringLiteral("info_warning"));
        info_warning->setGeometry(QRect(490, 80, 101, 25));
        QFont font;
        font.setFamily(QStringLiteral("Tahoma"));
        font.setPointSize(9);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        info_warning->setFont(font);
        info_warning->setStyleSheet(QLatin1String("QLabel {\n"
"font: 9pt \"Tahoma\";\n"
"color:#d81b1b;\n"
"}"));
        lbl_status = new QLabel(WinReturn);
        lbl_status->setObjectName(QStringLiteral("lbl_status"));
        lbl_status->setGeometry(QRect(280, 110, 71, 25));
        lbl_status->setStyleSheet(QLatin1String("QLabel {\n"
"font: 9pt \"Tahoma\";\n"
"color: white;\n"
"}"));
        info_status = new QComboBox(WinReturn);
        info_status->setObjectName(QStringLiteral("info_status"));
        info_status->setGeometry(QRect(360, 110, 111, 22));
        info_status->setStyleSheet(QLatin1String("QComboBox {\n"
"	border: 1px solid  #3a3633;\n"
"    padding: 1px 18px 1px 3px;\n"
"    min-width: 6em;\n"
"	color: white;\n"
"	background-color: #d81b1b;\n"
"	selection-color: white;\n"
"	selection-background-color: #E96060;\n"
"}\n"
"\n"
"QComboBox QAbstractItemView {\n"
"    background: #d81b1b;\n"
"	color: white;\n"
"	selection-background-color: #E96060;\n"
"}"));
        info_bookName = new QLabel(WinReturn);
        info_bookName->setObjectName(QStringLiteral("info_bookName"));
        info_bookName->setGeometry(QRect(330, 20, 271, 25));
        info_bookName->setStyleSheet(QLatin1String("QLabel {\n"
"font: 9pt \"Tahoma\";\n"
"color: white;\n"
"}"));
        QWidget::setTabOrder(bookWidget, searchLine);
        QWidget::setTabOrder(searchLine, add_pushButton);
        QWidget::setTabOrder(add_pushButton, cancel_pushButton);

        retranslateUi(WinReturn);

        QMetaObject::connectSlotsByName(WinReturn);
    } // setupUi

    void retranslateUi(QDialog *WinReturn)
    {
        WinReturn->setWindowTitle(QApplication::translate("WinReturn", "Dialog", Q_NULLPTR));
        lbl_dateReturn->setText(QApplication::translate("WinReturn", "\320\224\320\260\321\202\320\260 \320\262\320\276\320\267\320\262\321\200\320\260\321\202\320\260:", Q_NULLPTR));
        info_dateReturn->setText(QString());
        lbl_bookName->setText(QApplication::translate("WinReturn", "\320\232\320\275\320\270\320\263\320\260:", Q_NULLPTR));
        cancel_pushButton->setText(QApplication::translate("WinReturn", "\320\236\321\202\320\274\320\265\320\275\320\260", Q_NULLPTR));
        add_pushButton->setText(QApplication::translate("WinReturn", "\320\222\320\265\321\200\320\275\321\203\321\202\321\214", Q_NULLPTR));
        lbl_dateReal->setText(QApplication::translate("WinReturn", "\320\241\320\265\320\263\320\276\320\264\320\275\321\217\321\210\320\275\321\217\321\217 \320\264\320\260\321\202\320\260:", Q_NULLPTR));
        info_dateReal->setText(QString());
        info_warning->setText(QString());
        lbl_status->setText(QApplication::translate("WinReturn", "\320\241\320\276\321\201\321\202\320\276\321\217\320\275\320\270\320\265:", Q_NULLPTR));
        info_status->clear();
        info_status->insertItems(0, QStringList()
         << QApplication::translate("WinReturn", "\320\275\320\276\321\200\320\274\320\260\320\273\321\214\320\275\320\276\320\265", Q_NULLPTR)
         << QApplication::translate("WinReturn", "\320\277\320\276\321\202\320\265\321\200\321\217\320\275\320\260", Q_NULLPTR)
         << QApplication::translate("WinReturn", "\320\270\321\201\320\277\320\276\321\200\321\207\320\265\320\275\320\260", Q_NULLPTR)
        );
        info_bookName->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class WinReturn: public Ui_WinReturn {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINRETURN_H
