/********************************************************************************
** Form generated from reading UI file 'winload.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINLOAD_H
#define UI_WINLOAD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_WinLoad
{
public:
    QLabel *lbl_readers;
    QLabel *lbl_readersPhoto;
    QLabel *lbl_booksPhoto;
    QLabel *lbl_books;
    QLabel *lbl_booksTable;
    QLineEdit *edit_readers;
    QLineEdit *edit_books;
    QLineEdit *edit_readersPhoto;
    QLineEdit *edit_booksPhoto;
    QLineEdit *edit_booksTable;
    QPushButton *pushButton_readers;
    QPushButton *pushButton_readersPhoto;
    QPushButton *pushButton_books;
    QPushButton *pushButton_booksPhoto;
    QPushButton *pushButton_cancel;
    QPushButton *pushButton_save;

    void setupUi(QDialog *WinLoad)
    {
        if (WinLoad->objectName().isEmpty())
            WinLoad->setObjectName(QStringLiteral("WinLoad"));
        WinLoad->resize(620, 255);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(WinLoad->sizePolicy().hasHeightForWidth());
        WinLoad->setSizePolicy(sizePolicy);
        WinLoad->setMinimumSize(QSize(620, 255));
        WinLoad->setMaximumSize(QSize(620, 255));
        WinLoad->setStyleSheet(QLatin1String("QDialog {\n"
"background-color: #3a3633;\n"
"}"));
        lbl_readers = new QLabel(WinLoad);
        lbl_readers->setObjectName(QStringLiteral("lbl_readers"));
        lbl_readers->setGeometry(QRect(30, 20, 61, 16));
        lbl_readers->setStyleSheet(QLatin1String("QLabel {\n"
"font: 9pt \"Tahoma\";\n"
"color: white;\n"
"}"));
        lbl_readersPhoto = new QLabel(WinLoad);
        lbl_readersPhoto->setObjectName(QStringLiteral("lbl_readersPhoto"));
        lbl_readersPhoto->setGeometry(QRect(30, 60, 101, 16));
        lbl_readersPhoto->setStyleSheet(QLatin1String("QLabel {\n"
"font: 9pt \"Tahoma\";\n"
"color: white;\n"
"}"));
        lbl_booksPhoto = new QLabel(WinLoad);
        lbl_booksPhoto->setObjectName(QStringLiteral("lbl_booksPhoto"));
        lbl_booksPhoto->setGeometry(QRect(30, 140, 91, 16));
        lbl_booksPhoto->setStyleSheet(QLatin1String("QLabel {\n"
"font: 9pt \"Tahoma\";\n"
"color: white;\n"
"}"));
        lbl_books = new QLabel(WinLoad);
        lbl_books->setObjectName(QStringLiteral("lbl_books"));
        lbl_books->setGeometry(QRect(30, 100, 61, 16));
        lbl_books->setStyleSheet(QLatin1String("QLabel {\n"
"font: 9pt \"Tahoma\";\n"
"color: white;\n"
"}"));
        lbl_booksTable = new QLabel(WinLoad);
        lbl_booksTable->setObjectName(QStringLiteral("lbl_booksTable"));
        lbl_booksTable->setGeometry(QRect(30, 180, 141, 16));
        lbl_booksTable->setStyleSheet(QLatin1String("QLabel {\n"
"font: 9pt \"Tahoma\";\n"
"color: white;\n"
"}"));
        edit_readers = new QLineEdit(WinLoad);
        edit_readers->setObjectName(QStringLiteral("edit_readers"));
        edit_readers->setGeometry(QRect(140, 20, 351, 21));
        edit_readers->setStyleSheet(QLatin1String("QLineEdit {\n"
"border-width:1px;\n"
"border-color: #3a3633;\n"
"border-style: solid;\n"
"font: 10pt \"Tahoma\";\n"
"color: white;\n"
"selection-color: white;\n"
"selection-background-color: #d81b1b;\n"
"background-color: #524E4B;\n"
"}"));
        edit_books = new QLineEdit(WinLoad);
        edit_books->setObjectName(QStringLiteral("edit_books"));
        edit_books->setGeometry(QRect(140, 100, 351, 21));
        edit_books->setStyleSheet(QLatin1String("QLineEdit {\n"
"border-width:1px;\n"
"border-color: #3a3633;\n"
"border-style: solid;\n"
"font: 10pt \"Tahoma\";\n"
"color: white;\n"
"selection-color: white;\n"
"selection-background-color: #d81b1b;\n"
"background-color: #524E4B;\n"
"}"));
        edit_readersPhoto = new QLineEdit(WinLoad);
        edit_readersPhoto->setObjectName(QStringLiteral("edit_readersPhoto"));
        edit_readersPhoto->setGeometry(QRect(140, 60, 351, 21));
        edit_readersPhoto->setStyleSheet(QLatin1String("QLineEdit {\n"
"border-width:1px;\n"
"border-color: #3a3633;\n"
"border-style: solid;\n"
"font: 10pt \"Tahoma\";\n"
"color: white;\n"
"selection-color: white;\n"
"selection-background-color: #d81b1b;\n"
"background-color: #524E4B;\n"
"}"));
        edit_booksPhoto = new QLineEdit(WinLoad);
        edit_booksPhoto->setObjectName(QStringLiteral("edit_booksPhoto"));
        edit_booksPhoto->setGeometry(QRect(140, 140, 351, 21));
        edit_booksPhoto->setStyleSheet(QLatin1String("QLineEdit {\n"
"border-width:1px;\n"
"border-color: #3a3633;\n"
"border-style: solid;\n"
"font: 10pt \"Tahoma\";\n"
"color: white;\n"
"selection-color: white;\n"
"selection-background-color: #d81b1b;\n"
"background-color: #524E4B;\n"
"}"));
        edit_booksTable = new QLineEdit(WinLoad);
        edit_booksTable->setObjectName(QStringLiteral("edit_booksTable"));
        edit_booksTable->setGeometry(QRect(180, 180, 311, 21));
        edit_booksTable->setStyleSheet(QLatin1String("QLineEdit {\n"
"border-width:1px;\n"
"border-color: #3a3633;\n"
"border-style: solid;\n"
"font: 10pt \"Tahoma\";\n"
"color: white;\n"
"selection-color: white;\n"
"selection-background-color: #d81b1b;\n"
"background-color: #524E4B;\n"
"}"));
        pushButton_readers = new QPushButton(WinLoad);
        pushButton_readers->setObjectName(QStringLiteral("pushButton_readers"));
        pushButton_readers->setGeometry(QRect(510, 20, 80, 21));
        pushButton_readers->setStyleSheet(QLatin1String("QPushButton {\n"
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
        pushButton_readersPhoto = new QPushButton(WinLoad);
        pushButton_readersPhoto->setObjectName(QStringLiteral("pushButton_readersPhoto"));
        pushButton_readersPhoto->setGeometry(QRect(510, 60, 80, 21));
        pushButton_readersPhoto->setStyleSheet(QLatin1String("QPushButton {\n"
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
        pushButton_books = new QPushButton(WinLoad);
        pushButton_books->setObjectName(QStringLiteral("pushButton_books"));
        pushButton_books->setGeometry(QRect(510, 100, 80, 21));
        pushButton_books->setStyleSheet(QLatin1String("QPushButton {\n"
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
        pushButton_booksPhoto = new QPushButton(WinLoad);
        pushButton_booksPhoto->setObjectName(QStringLiteral("pushButton_booksPhoto"));
        pushButton_booksPhoto->setGeometry(QRect(510, 140, 80, 21));
        pushButton_booksPhoto->setStyleSheet(QLatin1String("QPushButton {\n"
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
        pushButton_cancel = new QPushButton(WinLoad);
        pushButton_cancel->setObjectName(QStringLiteral("pushButton_cancel"));
        pushButton_cancel->setGeometry(QRect(510, 220, 80, 24));
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
        pushButton_save = new QPushButton(WinLoad);
        pushButton_save->setObjectName(QStringLiteral("pushButton_save"));
        pushButton_save->setGeometry(QRect(400, 220, 80, 24));
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

        retranslateUi(WinLoad);

        QMetaObject::connectSlotsByName(WinLoad);
    } // setupUi

    void retranslateUi(QDialog *WinLoad)
    {
        WinLoad->setWindowTitle(QApplication::translate("WinLoad", "Dialog", Q_NULLPTR));
        lbl_readers->setText(QApplication::translate("WinLoad", "\320\247\320\270\321\202\320\260\321\202\320\265\320\273\320\270:", Q_NULLPTR));
        lbl_readersPhoto->setText(QApplication::translate("WinLoad", "\320\244\320\276\321\202\320\276 \321\207\320\270\321\202\320\260\321\202\320\265\320\273\320\265\320\271:", Q_NULLPTR));
        lbl_booksPhoto->setText(QApplication::translate("WinLoad", "\320\244\320\276\321\202\320\276 \320\272\320\275\320\270\320\263:", Q_NULLPTR));
        lbl_books->setText(QApplication::translate("WinLoad", "\320\232\320\275\320\270\320\263\320\270:", Q_NULLPTR));
        lbl_booksTable->setText(QApplication::translate("WinLoad", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \321\202\320\260\320\261\320\273\320\270\321\206\321\213 \320\272\320\275\320\270\320\263:", Q_NULLPTR));
        pushButton_readers->setText(QApplication::translate("WinLoad", "\320\222\321\213\320\261\321\200\320\260\321\202\321\214", Q_NULLPTR));
        pushButton_readersPhoto->setText(QApplication::translate("WinLoad", "\320\222\321\213\320\261\321\200\320\260\321\202\321\214", Q_NULLPTR));
        pushButton_books->setText(QApplication::translate("WinLoad", "\320\222\321\213\320\261\321\200\320\260\321\202\321\214", Q_NULLPTR));
        pushButton_booksPhoto->setText(QApplication::translate("WinLoad", "\320\222\321\213\320\261\321\200\320\260\321\202\321\214", Q_NULLPTR));
        pushButton_cancel->setText(QApplication::translate("WinLoad", "\320\236\321\202\320\274\320\265\320\275\320\260", Q_NULLPTR));
        pushButton_save->setText(QApplication::translate("WinLoad", "\320\227\320\260\320\263\321\200\321\203\320\267\320\270\321\202\321\214", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class WinLoad: public Ui_WinLoad {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINLOAD_H
