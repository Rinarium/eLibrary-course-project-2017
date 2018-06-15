/********************************************************************************
** Form generated from reading UI file 'wininfobook.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WININFOBOOK_H
#define UI_WININFOBOOK_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WinInfoBook
{
public:
    QPushButton *pushButton_cancel;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *nameLayout;
    QLabel *lbl_name;
    QLineEdit *edit_name;
    QHBoxLayout *authorlLayout;
    QLabel *lbl_author;
    QLineEdit *edit_author;
    QHBoxLayout *publicationLayout;
    QLabel *lbl_publication;
    QSpinBox *edit_publication;
    QHBoxLayout *pageslLayout;
    QLabel *lbl_pages;
    QLineEdit *edit_pages;
    QHBoxLayout *quantityLayout;
    QLabel *lbl_qunatity;
    QSpinBox *edit_quantity;
    QHBoxLayout *idLayout;
    QLabel *lbl_id;
    QLabel *info_id;
    QWidget *horizontalLayoutWidget_8;
    QHBoxLayout *photolLayout;
    QLabel *lbl_photo;
    QLineEdit *edit_photo;
    QPushButton *pushButton_photo;
    QPushButton *pushButton_save;
    QLabel *photo;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *descriptionLayout;
    QVBoxLayout *infoLayout;
    QLabel *lbl_description;
    QSpacerItem *verticalSpacer;
    QTextEdit *edit_description;

    void setupUi(QDialog *WinInfoBook)
    {
        if (WinInfoBook->objectName().isEmpty())
            WinInfoBook->setObjectName(QStringLiteral("WinInfoBook"));
        WinInfoBook->resize(670, 590);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(WinInfoBook->sizePolicy().hasHeightForWidth());
        WinInfoBook->setSizePolicy(sizePolicy);
        WinInfoBook->setMinimumSize(QSize(670, 590));
        WinInfoBook->setMaximumSize(QSize(670, 590));
        WinInfoBook->setStyleSheet(QLatin1String("QDialog {\n"
"background-color: #3a3633;\n"
"}"));
        pushButton_cancel = new QPushButton(WinInfoBook);
        pushButton_cancel->setObjectName(QStringLiteral("pushButton_cancel"));
        pushButton_cancel->setGeometry(QRect(550, 540, 80, 21));
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
        verticalLayoutWidget = new QWidget(WinInfoBook);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(40, 50, 229, 261));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
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

        authorlLayout = new QHBoxLayout();
        authorlLayout->setObjectName(QStringLiteral("authorlLayout"));
        lbl_author = new QLabel(verticalLayoutWidget);
        lbl_author->setObjectName(QStringLiteral("lbl_author"));
        lbl_author->setMinimumSize(QSize(55, 0));
        lbl_author->setStyleSheet(QLatin1String("QLabel {\n"
"font: 9pt \"Tahoma\";\n"
"color: white;\n"
"}"));

        authorlLayout->addWidget(lbl_author);

        edit_author = new QLineEdit(verticalLayoutWidget);
        edit_author->setObjectName(QStringLiteral("edit_author"));
        edit_author->setStyleSheet(QLatin1String("QLineEdit {\n"
"border-width:1px;\n"
"border-color: #3a3633;\n"
"border-style: solid;\n"
"font: 10pt \"Tahoma\";\n"
"color: white;\n"
"selection-color: white;\n"
"selection-background-color: #d81b1b;\n"
"background-color: #524E4B;\n"
"}"));

        authorlLayout->addWidget(edit_author);


        verticalLayout->addLayout(authorlLayout);

        publicationLayout = new QHBoxLayout();
        publicationLayout->setObjectName(QStringLiteral("publicationLayout"));
        lbl_publication = new QLabel(verticalLayoutWidget);
        lbl_publication->setObjectName(QStringLiteral("lbl_publication"));
        lbl_publication->setMinimumSize(QSize(75, 0));
        lbl_publication->setMaximumSize(QSize(70, 16777215));
        lbl_publication->setStyleSheet(QLatin1String("QLabel {\n"
"font: 9pt \"Tahoma\";\n"
"color: white;\n"
"}"));

        publicationLayout->addWidget(lbl_publication);

        edit_publication = new QSpinBox(verticalLayoutWidget);
        edit_publication->setObjectName(QStringLiteral("edit_publication"));
        edit_publication->setStyleSheet(QLatin1String("QSpinBox\n"
"{\n"
"	border: 1px solid  #3a3633;\n"
"    padding: 1px 18px 1px 3px;\n"
"	font: 10pt \"Tahoma\";\n"
"    min-width: 6em;\n"
"	color: white;\n"
"selection-color: white;\n"
"selection-background-color: #d81b1b;\n"
"background-color: #524E4B;\n"
"}"));

        publicationLayout->addWidget(edit_publication);


        verticalLayout->addLayout(publicationLayout);

        pageslLayout = new QHBoxLayout();
        pageslLayout->setObjectName(QStringLiteral("pageslLayout"));
        lbl_pages = new QLabel(verticalLayoutWidget);
        lbl_pages->setObjectName(QStringLiteral("lbl_pages"));
        lbl_pages->setMinimumSize(QSize(0, 0));
        lbl_pages->setMaximumSize(QSize(55, 16777215));
        lbl_pages->setStyleSheet(QLatin1String("QLabel {\n"
"font: 9pt \"Tahoma\";\n"
"color: white;\n"
"}"));

        pageslLayout->addWidget(lbl_pages);

        edit_pages = new QLineEdit(verticalLayoutWidget);
        edit_pages->setObjectName(QStringLiteral("edit_pages"));
        edit_pages->setStyleSheet(QLatin1String("QLineEdit {\n"
"border-width:1px;\n"
"border-color: #3a3633;\n"
"border-style: solid;\n"
"font: 10pt \"Tahoma\";\n"
"color: white;\n"
"selection-color: white;\n"
"selection-background-color: #d81b1b;\n"
"background-color: #524E4B;\n"
"}"));

        pageslLayout->addWidget(edit_pages);


        verticalLayout->addLayout(pageslLayout);

        quantityLayout = new QHBoxLayout();
        quantityLayout->setObjectName(QStringLiteral("quantityLayout"));
        lbl_qunatity = new QLabel(verticalLayoutWidget);
        lbl_qunatity->setObjectName(QStringLiteral("lbl_qunatity"));
        lbl_qunatity->setMinimumSize(QSize(75, 0));
        lbl_qunatity->setMaximumSize(QSize(70, 16777215));
        lbl_qunatity->setStyleSheet(QLatin1String("QLabel {\n"
"font: 9pt \"Tahoma\";\n"
"color: white;\n"
"}"));

        quantityLayout->addWidget(lbl_qunatity);

        edit_quantity = new QSpinBox(verticalLayoutWidget);
        edit_quantity->setObjectName(QStringLiteral("edit_quantity"));
        edit_quantity->setStyleSheet(QLatin1String("QSpinBox\n"
"{\n"
"	border: 1px solid  #3a3633;\n"
"    padding: 1px 18px 1px 3px;\n"
"	font: 10pt \"Tahoma\";\n"
"    min-width: 6em;\n"
"	color: white;\n"
"selection-color: white;\n"
"selection-background-color: #d81b1b;\n"
"background-color: #524E4B;\n"
"}"));

        quantityLayout->addWidget(edit_quantity);


        verticalLayout->addLayout(quantityLayout);

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

        horizontalLayoutWidget_8 = new QWidget(WinInfoBook);
        horizontalLayoutWidget_8->setObjectName(QStringLiteral("horizontalLayoutWidget_8"));
        horizontalLayoutWidget_8->setGeometry(QRect(40, 470, 591, 30));
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

        pushButton_save = new QPushButton(WinInfoBook);
        pushButton_save->setObjectName(QStringLiteral("pushButton_save"));
        pushButton_save->setEnabled(true);
        pushButton_save->setGeometry(QRect(460, 540, 80, 21));
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
        photo = new QLabel(WinInfoBook);
        photo->setObjectName(QStringLiteral("photo"));
        photo->setGeometry(QRect(380, 30, 200, 300));
        photo->setMinimumSize(QSize(200, 300));
        photo->setMaximumSize(QSize(200, 300));
        photo->setStyleSheet(QLatin1String("QLabel\n"
"{\n"
"border-width:2px;\n"
"border-color: #d81b1b;\n"
"border-style: solid;\n"
"}"));
        horizontalLayoutWidget = new QWidget(WinInfoBook);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(40, 350, 591, 80));
        descriptionLayout = new QHBoxLayout(horizontalLayoutWidget);
        descriptionLayout->setObjectName(QStringLiteral("descriptionLayout"));
        descriptionLayout->setContentsMargins(0, 0, 0, 0);
        infoLayout = new QVBoxLayout();
        infoLayout->setObjectName(QStringLiteral("infoLayout"));
        lbl_description = new QLabel(horizontalLayoutWidget);
        lbl_description->setObjectName(QStringLiteral("lbl_description"));
        lbl_description->setStyleSheet(QLatin1String("QLabel {\n"
"font: 9pt \"Tahoma\";\n"
"color: white;\n"
"}"));

        infoLayout->addWidget(lbl_description);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        infoLayout->addItem(verticalSpacer);


        descriptionLayout->addLayout(infoLayout);

        edit_description = new QTextEdit(horizontalLayoutWidget);
        edit_description->setObjectName(QStringLiteral("edit_description"));
        edit_description->setStyleSheet(QLatin1String("QTextEdit {\n"
"border-width:1px;\n"
"border-color: #3a3633;\n"
"border-style: solid;\n"
"font: 10pt \"Tahoma\";\n"
"color: white;\n"
"selection-color: white;\n"
"selection-background-color: #d81b1b;\n"
"background-color: #524E4B;\n"
"}"));

        descriptionLayout->addWidget(edit_description);


        retranslateUi(WinInfoBook);

        QMetaObject::connectSlotsByName(WinInfoBook);
    } // setupUi

    void retranslateUi(QDialog *WinInfoBook)
    {
        WinInfoBook->setWindowTitle(QApplication::translate("WinInfoBook", "Dialog", Q_NULLPTR));
        pushButton_cancel->setText(QApplication::translate("WinInfoBook", "\320\236\321\202\320\274\320\265\320\275\320\260", Q_NULLPTR));
        lbl_name->setText(QApplication::translate("WinInfoBook", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265:", Q_NULLPTR));
        lbl_author->setText(QApplication::translate("WinInfoBook", "\320\220\320\262\321\202\320\276\321\200:", Q_NULLPTR));
        lbl_publication->setText(QApplication::translate("WinInfoBook", "\320\223\320\276\320\264 \320\270\320\267\320\264\320\260\320\275\320\270\321\217:", Q_NULLPTR));
        lbl_pages->setText(QApplication::translate("WinInfoBook", "\320\241\321\202\321\200\320\260\320\275\320\270\321\206:", Q_NULLPTR));
        lbl_qunatity->setText(QApplication::translate("WinInfoBook", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276:", Q_NULLPTR));
        lbl_id->setText(QApplication::translate("WinInfoBook", "ID:", Q_NULLPTR));
        info_id->setText(QString());
        lbl_photo->setText(QApplication::translate("WinInfoBook", "\320\244\320\276\321\202\320\276:", Q_NULLPTR));
        pushButton_photo->setText(QApplication::translate("WinInfoBook", "\320\222\321\213\320\261\321\200\320\260\321\202\321\214", Q_NULLPTR));
        pushButton_save->setText(QApplication::translate("WinInfoBook", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", Q_NULLPTR));
        photo->setText(QString());
        lbl_description->setText(QApplication::translate("WinInfoBook", "\320\236\320\277\320\270\321\201\320\260\320\275\320\270\320\265:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class WinInfoBook: public Ui_WinInfoBook {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WININFOBOOK_H
