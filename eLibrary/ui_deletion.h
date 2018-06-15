/********************************************************************************
** Form generated from reading UI file 'deletion.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETION_H
#define UI_DELETION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Deletion
{
public:
    QLabel *text;
    QPushButton *no_pushButton;
    QPushButton *yes_pushButton;
    QPushButton *ok_pushButton;
    QLabel *icon;

    void setupUi(QDialog *Deletion)
    {
        if (Deletion->objectName().isEmpty())
            Deletion->setObjectName(QStringLiteral("Deletion"));
        Deletion->resize(400, 140);
        Deletion->setMinimumSize(QSize(400, 140));
        Deletion->setMaximumSize(QSize(400, 140));
        Deletion->setStyleSheet(QLatin1String("QDialog {\n"
"background-color: #3a3633;\n"
"}"));
        text = new QLabel(Deletion);
        text->setObjectName(QStringLiteral("text"));
        text->setGeometry(QRect(120, 30, 270, 60));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(text->sizePolicy().hasHeightForWidth());
        text->setSizePolicy(sizePolicy);
        text->setMinimumSize(QSize(200, 60));
        text->setMaximumSize(QSize(270, 50));
        QFont font;
        font.setFamily(QStringLiteral("Tahoma"));
        font.setPointSize(9);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        text->setFont(font);
        text->setStyleSheet(QLatin1String("QLabel {\n"
"font: 9pt \"Tahoma\";\n"
"color: white;\n"
"}"));
        no_pushButton = new QPushButton(Deletion);
        no_pushButton->setObjectName(QStringLiteral("no_pushButton"));
        no_pushButton->setGeometry(QRect(260, 100, 80, 21));
        no_pushButton->setStyleSheet(QLatin1String("QPushButton {\n"
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
        yes_pushButton = new QPushButton(Deletion);
        yes_pushButton->setObjectName(QStringLiteral("yes_pushButton"));
        yes_pushButton->setGeometry(QRect(160, 100, 80, 21));
        yes_pushButton->setStyleSheet(QLatin1String("QPushButton {\n"
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
        ok_pushButton = new QPushButton(Deletion);
        ok_pushButton->setObjectName(QStringLiteral("ok_pushButton"));
        ok_pushButton->setGeometry(QRect(210, 100, 80, 21));
        ok_pushButton->setStyleSheet(QLatin1String("QPushButton {\n"
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
        icon = new QLabel(Deletion);
        icon->setObjectName(QStringLiteral("icon"));
        icon->setGeometry(QRect(20, 20, 100, 100));
        icon->setMinimumSize(QSize(100, 100));
        icon->setMaximumSize(QSize(60, 60));

        retranslateUi(Deletion);

        QMetaObject::connectSlotsByName(Deletion);
    } // setupUi

    void retranslateUi(QDialog *Deletion)
    {
        Deletion->setWindowTitle(QApplication::translate("Deletion", "Dialog", Q_NULLPTR));
        text->setText(QString());
        no_pushButton->setText(QApplication::translate("Deletion", "\320\235\320\265\321\202", Q_NULLPTR));
        yes_pushButton->setText(QApplication::translate("Deletion", "\320\224\320\260", Q_NULLPTR));
        ok_pushButton->setText(QApplication::translate("Deletion", "\320\236\320\232", Q_NULLPTR));
        icon->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Deletion: public Ui_Deletion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETION_H
