/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionDatabases;
    QAction *actionDeleted;
    QAction *actionAbout;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_2;
    QTabWidget *tabWidget;
    QWidget *tab_reader;
    QHBoxLayout *horizontalLayout_15;
    QVBoxLayout *listLayout;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *lineSearch;
    QPushButton *pushButton_NewReader;
    QListWidget *listWidget;
    QVBoxLayout *infoLayout;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *last_nameLayout;
    QLabel *lbl_lname;
    QLabel *lbl_lname_info;
    QHBoxLayout *nameLayout;
    QLabel *lbl_name;
    QLabel *lbl_name_info;
    QHBoxLayout *middle_nameLayout;
    QLabel *lbl_mname;
    QLabel *lbl_mname_info;
    QHBoxLayout *birthdayLayout;
    QLabel *lbl_bday;
    QLabel *lbl_bday_info;
    QHBoxLayout *adressLayout;
    QLabel *lbl_adress;
    QLabel *lbl_adress_info;
    QHBoxLayout *phoneLayout;
    QLabel *lbl_phone;
    QLabel *lbl_phone_info;
    QHBoxLayout *optionLayout;
    QHBoxLayout *idLayout;
    QLabel *lbl_id;
    QLabel *lbl_id_info;
    QHBoxLayout *blacklistLayout;
    QLabel *lbl_blacklist;
    QLabel *info_blacklist;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QLabel *photo;
    QTableWidget *tableWidgetHistory;
    QTableWidget *tableWidgetBooks;
    QHBoxLayout *horizontalLayout_button;
    QPushButton *Button_Info_Reader;
    QPushButton *pushButton_DeleteReader;
    QPushButton *pushButton_Reverse;
    QPushButton *pushButton_AddBook;
    QPushButton *pushButton_ReturnBook;
    QWidget *tab_book;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *listLayout_Book;
    QHBoxLayout *horizontalLayout_7;
    QLineEdit *lineSearch_Book;
    QPushButton *pushButton_NewBook;
    QListWidget *listWidget_Book;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_Book;
    QHBoxLayout *nameLayout_Book;
    QLabel *lbl_name_Book;
    QLabel *lbl_name_info_Book;
    QHBoxLayout *authorLayout;
    QLabel *lbl_author;
    QLabel *lbl_author_info;
    QHBoxLayout *publicationLayout;
    QLabel *lbl_publication;
    QLabel *lbl_publication_info;
    QHBoxLayout *pagesLayout;
    QLabel *lbl_pages;
    QLabel *lbl_pages_info;
    QHBoxLayout *quantiryLayout;
    QLabel *lbl_quantity;
    QLabel *lbl_quantity_info;
    QHBoxLayout *availableLayout;
    QLabel *lbl_available;
    QLabel *lbl_available_info;
    QHBoxLayout *idBook_Layout;
    QLabel *lbl_id_Book;
    QLabel *lbl_id_Book_info;
    QHBoxLayout *descriptionLayout;
    QVBoxLayout *verticalLayout_3;
    QTextEdit *lbl_description_info;
    QSpacerItem *verticalSpacer_2;
    QLabel *photo_Book;
    QHBoxLayout *Book_Layout_button;
    QPushButton *pushButton_DeleteBook;
    QPushButton *pushButton_Info_Book;
    QMenuBar *menuBar;
    QMenu *menuFile;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(926, 590);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(770, 590));
        MainWindow->setMaximumSize(QSize(16777215, 16777215));
        MainWindow->setStyleSheet(QLatin1String("QMainWindow {\n"
"background-color: #3a3633 ;\n"
"border-width:0px;\n"
"border-color: #524E4B;\n"
"border-style: solid;\n"
"padding: 5px;\n"
"padding-left: 5px;\n"
"padding-right: 5px;\n"
"font: 10pt \"Tahoma\";\n"
"}"));
        actionDatabases = new QAction(MainWindow);
        actionDatabases->setObjectName(QStringLiteral("actionDatabases"));
        actionDeleted = new QAction(MainWindow);
        actionDeleted->setObjectName(QStringLiteral("actionDeleted"));
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout_2 = new QVBoxLayout(centralWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setStyleSheet(QLatin1String("QTabBar::tab {\n"
"    background: #d81b1b;\n"
"    border: 1px solid #3a3633;\n"
"    padding: 2px;\n"
"	font: 8pt  \"Tahoma\";\n"
"	color: white;\n"
"}\n"
"\n"
"QTabBar::tab:hover {\n"
"    background: #E96060;\n"
"}\n"
"\n"
"QTabBar::tab:selected {\n"
"    border-color: #CB2121;\n"
"    border-bottom-color: #3a3633; /* same as pane color */\n"
"}\n"
"\n"
"QTabWidget::pane {   \n"
"background-color: #3a3633;\n"
"border:1px solid #4E4A46;\n"
"}\n"
"\n"
"QTabWidget QWidget {\n"
"   background-color: #3a3633;\n"
"}"));
        tab_reader = new QWidget();
        tab_reader->setObjectName(QStringLiteral("tab_reader"));
        horizontalLayout_15 = new QHBoxLayout(tab_reader);
        horizontalLayout_15->setSpacing(6);
        horizontalLayout_15->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        listLayout = new QVBoxLayout();
        listLayout->setSpacing(6);
        listLayout->setObjectName(QStringLiteral("listLayout"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        lineSearch = new QLineEdit(tab_reader);
        lineSearch->setObjectName(QStringLiteral("lineSearch"));
        lineSearch->setMaximumSize(QSize(195, 16777215));
        lineSearch->setStyleSheet(QLatin1String("QLineEdit {\n"
"border-width:2px;\n"
"border-color: #d81b1b;\n"
"border-style: solid;\n"
"font: 10pt \"Tahoma\";\n"
"color: white;\n"
"selection-color: white;\n"
"selection-background-color: #d81b1b;\n"
"background-color: #403D3A;\n"
"}"));

        horizontalLayout_4->addWidget(lineSearch);

        pushButton_NewReader = new QPushButton(tab_reader);
        pushButton_NewReader->setObjectName(QStringLiteral("pushButton_NewReader"));
        pushButton_NewReader->setMinimumSize(QSize(20, 20));
        pushButton_NewReader->setMaximumSize(QSize(20, 20));
        pushButton_NewReader->setStyleSheet(QLatin1String("QPushButton {\n"
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
"QPushButton:disabled {\n"
" background:#1A1A1A; \n"
"color:#9B9B9B;\n"
"}"));

        horizontalLayout_4->addWidget(pushButton_NewReader);


        listLayout->addLayout(horizontalLayout_4);

        listWidget = new QListWidget(tab_reader);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setMinimumSize(QSize(220, 0));
        listWidget->setMaximumSize(QSize(210, 16777215));
        listWidget->setStyleSheet(QLatin1String("QListWidget {\n"
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

        listLayout->addWidget(listWidget);


        horizontalLayout_15->addLayout(listLayout);

        infoLayout = new QVBoxLayout();
        infoLayout->setSpacing(6);
        infoLayout->setObjectName(QStringLiteral("infoLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        last_nameLayout = new QHBoxLayout();
        last_nameLayout->setSpacing(6);
        last_nameLayout->setObjectName(QStringLiteral("last_nameLayout"));
        lbl_lname = new QLabel(tab_reader);
        lbl_lname->setObjectName(QStringLiteral("lbl_lname"));
        lbl_lname->setMinimumSize(QSize(60, 20));
        lbl_lname->setMaximumSize(QSize(60, 20));
        QFont font;
        font.setFamily(QStringLiteral("Tahoma"));
        font.setPointSize(9);
        font.setBold(true);
        font.setItalic(false);
        font.setWeight(75);
        lbl_lname->setFont(font);
        lbl_lname->setStyleSheet(QLatin1String("QLabel {\n"
"font: bold 9pt  \"Tahoma\";\n"
"color: white;\n"
"}"));

        last_nameLayout->addWidget(lbl_lname);

        lbl_lname_info = new QLabel(tab_reader);
        lbl_lname_info->setObjectName(QStringLiteral("lbl_lname_info"));
        lbl_lname_info->setMinimumSize(QSize(0, 20));
        lbl_lname_info->setMaximumSize(QSize(16777215, 20));
        lbl_lname_info->setStyleSheet(QLatin1String("QLabel {\n"
"font: 9pt  \"Tahoma\";\n"
"color: white;\n"
"}"));

        last_nameLayout->addWidget(lbl_lname_info);


        verticalLayout_4->addLayout(last_nameLayout);

        nameLayout = new QHBoxLayout();
        nameLayout->setSpacing(6);
        nameLayout->setObjectName(QStringLiteral("nameLayout"));
        lbl_name = new QLabel(tab_reader);
        lbl_name->setObjectName(QStringLiteral("lbl_name"));
        lbl_name->setMinimumSize(QSize(30, 20));
        lbl_name->setMaximumSize(QSize(30, 20));
        lbl_name->setFont(font);
        lbl_name->setStyleSheet(QLatin1String("QLabel {\n"
"font: bold 9pt  \"Tahoma\";\n"
"color: white;\n"
"}"));

        nameLayout->addWidget(lbl_name);

        lbl_name_info = new QLabel(tab_reader);
        lbl_name_info->setObjectName(QStringLiteral("lbl_name_info"));
        lbl_name_info->setMinimumSize(QSize(0, 20));
        lbl_name_info->setMaximumSize(QSize(16777215, 20));
        lbl_name_info->setStyleSheet(QLatin1String("QLabel {\n"
"font: 9pt  \"Tahoma\";\n"
"color: white;\n"
"}"));

        nameLayout->addWidget(lbl_name_info);


        verticalLayout_4->addLayout(nameLayout);

        middle_nameLayout = new QHBoxLayout();
        middle_nameLayout->setSpacing(6);
        middle_nameLayout->setObjectName(QStringLiteral("middle_nameLayout"));
        lbl_mname = new QLabel(tab_reader);
        lbl_mname->setObjectName(QStringLiteral("lbl_mname"));
        lbl_mname->setMinimumSize(QSize(0, 20));
        lbl_mname->setMaximumSize(QSize(65, 20));
        lbl_mname->setFont(font);
        lbl_mname->setStyleSheet(QLatin1String("QLabel {\n"
"font: bold 9pt  \"Tahoma\";\n"
"color: white;\n"
"}"));

        middle_nameLayout->addWidget(lbl_mname);

        lbl_mname_info = new QLabel(tab_reader);
        lbl_mname_info->setObjectName(QStringLiteral("lbl_mname_info"));
        lbl_mname_info->setMinimumSize(QSize(0, 20));
        lbl_mname_info->setMaximumSize(QSize(16777215, 20));
        lbl_mname_info->setStyleSheet(QLatin1String("QLabel {\n"
"font: 9pt  \"Tahoma\";\n"
"color: white;\n"
"}"));

        middle_nameLayout->addWidget(lbl_mname_info);


        verticalLayout_4->addLayout(middle_nameLayout);

        birthdayLayout = new QHBoxLayout();
        birthdayLayout->setSpacing(6);
        birthdayLayout->setObjectName(QStringLiteral("birthdayLayout"));
        lbl_bday = new QLabel(tab_reader);
        lbl_bday->setObjectName(QStringLiteral("lbl_bday"));
        lbl_bday->setMinimumSize(QSize(110, 20));
        lbl_bday->setMaximumSize(QSize(110, 20));
        lbl_bday->setFont(font);
        lbl_bday->setStyleSheet(QLatin1String("QLabel {\n"
"font: bold 9pt  \"Tahoma\";\n"
"color: white;\n"
"}"));

        birthdayLayout->addWidget(lbl_bday);

        lbl_bday_info = new QLabel(tab_reader);
        lbl_bday_info->setObjectName(QStringLiteral("lbl_bday_info"));
        lbl_bday_info->setMinimumSize(QSize(0, 20));
        lbl_bday_info->setMaximumSize(QSize(16777215, 20));
        lbl_bday_info->setStyleSheet(QLatin1String("QLabel {\n"
"font: 9pt  \"Tahoma\";\n"
"color: white;\n"
"}"));

        birthdayLayout->addWidget(lbl_bday_info, 0, Qt::AlignLeft);


        verticalLayout_4->addLayout(birthdayLayout);

        adressLayout = new QHBoxLayout();
        adressLayout->setSpacing(6);
        adressLayout->setObjectName(QStringLiteral("adressLayout"));
        lbl_adress = new QLabel(tab_reader);
        lbl_adress->setObjectName(QStringLiteral("lbl_adress"));
        lbl_adress->setMinimumSize(QSize(45, 20));
        lbl_adress->setMaximumSize(QSize(45, 20));
        lbl_adress->setFont(font);
        lbl_adress->setStyleSheet(QLatin1String("QLabel {\n"
"font: bold 9pt  \"Tahoma\";\n"
"color: white;\n"
"}"));

        adressLayout->addWidget(lbl_adress);

        lbl_adress_info = new QLabel(tab_reader);
        lbl_adress_info->setObjectName(QStringLiteral("lbl_adress_info"));
        lbl_adress_info->setMinimumSize(QSize(0, 20));
        lbl_adress_info->setMaximumSize(QSize(16777215, 20));
        lbl_adress_info->setStyleSheet(QLatin1String("QLabel {\n"
"font: 9pt  \"Tahoma\";\n"
"color: white;\n"
"}"));

        adressLayout->addWidget(lbl_adress_info);


        verticalLayout_4->addLayout(adressLayout);

        phoneLayout = new QHBoxLayout();
        phoneLayout->setSpacing(6);
        phoneLayout->setObjectName(QStringLiteral("phoneLayout"));
        lbl_phone = new QLabel(tab_reader);
        lbl_phone->setObjectName(QStringLiteral("lbl_phone"));
        lbl_phone->setMinimumSize(QSize(60, 20));
        lbl_phone->setMaximumSize(QSize(60, 20));
        lbl_phone->setFont(font);
        lbl_phone->setStyleSheet(QLatin1String("QLabel {\n"
"font: bold 9pt  \"Tahoma\";\n"
"color: white;\n"
"}"));

        phoneLayout->addWidget(lbl_phone);

        lbl_phone_info = new QLabel(tab_reader);
        lbl_phone_info->setObjectName(QStringLiteral("lbl_phone_info"));
        lbl_phone_info->setMinimumSize(QSize(0, 20));
        lbl_phone_info->setMaximumSize(QSize(16777215, 20));
        lbl_phone_info->setStyleSheet(QLatin1String("QLabel {\n"
"font: 9pt  \"Tahoma\";\n"
"color: white;\n"
"}"));

        phoneLayout->addWidget(lbl_phone_info);


        verticalLayout_4->addLayout(phoneLayout);

        optionLayout = new QHBoxLayout();
        optionLayout->setSpacing(6);
        optionLayout->setObjectName(QStringLiteral("optionLayout"));
        idLayout = new QHBoxLayout();
        idLayout->setSpacing(6);
        idLayout->setObjectName(QStringLiteral("idLayout"));
        lbl_id = new QLabel(tab_reader);
        lbl_id->setObjectName(QStringLiteral("lbl_id"));
        lbl_id->setMinimumSize(QSize(20, 0));
        lbl_id->setMaximumSize(QSize(20, 20));
        lbl_id->setFont(font);
        lbl_id->setStyleSheet(QLatin1String("QLabel {\n"
"font: bold 9pt  \"Tahoma\";\n"
"color: white;\n"
"}"));

        idLayout->addWidget(lbl_id);

        lbl_id_info = new QLabel(tab_reader);
        lbl_id_info->setObjectName(QStringLiteral("lbl_id_info"));
        lbl_id_info->setMaximumSize(QSize(16777215, 20));
        lbl_id_info->setStyleSheet(QLatin1String("QLabel {\n"
"font: 9pt  \"Tahoma\";\n"
"color: white;\n"
"}"));

        idLayout->addWidget(lbl_id_info);


        optionLayout->addLayout(idLayout);


        verticalLayout_4->addLayout(optionLayout);

        blacklistLayout = new QHBoxLayout();
        blacklistLayout->setSpacing(6);
        blacklistLayout->setObjectName(QStringLiteral("blacklistLayout"));
        lbl_blacklist = new QLabel(tab_reader);
        lbl_blacklist->setObjectName(QStringLiteral("lbl_blacklist"));
        lbl_blacklist->setMinimumSize(QSize(100, 0));
        lbl_blacklist->setMaximumSize(QSize(100, 16777215));
        lbl_blacklist->setFont(font);
        lbl_blacklist->setStyleSheet(QLatin1String("QLabel {\n"
"font: bold 9pt  \"Tahoma\";\n"
"color: white;\n"
"}"));

        blacklistLayout->addWidget(lbl_blacklist, 0, Qt::AlignLeft);

        info_blacklist = new QLabel(tab_reader);
        info_blacklist->setObjectName(QStringLiteral("info_blacklist"));
        info_blacklist->setStyleSheet(QLatin1String("QLabel {\n"
"font: 9pt  \"Tahoma\";\n"
"color: white;\n"
"}"));

        blacklistLayout->addWidget(info_blacklist);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        blacklistLayout->addItem(horizontalSpacer_2);


        verticalLayout_4->addLayout(blacklistLayout);


        horizontalLayout->addLayout(verticalLayout_4);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        photo = new QLabel(tab_reader);
        photo->setObjectName(QStringLiteral("photo"));
        photo->setMinimumSize(QSize(200, 200));
        photo->setMaximumSize(QSize(200, 200));
        photo->setStyleSheet(QLatin1String("QLabel\n"
"{\n"
"border-width:2px;\n"
"border-color: #d81b1b;\n"
"border-style: solid;\n"
"}"));

        horizontalLayout->addWidget(photo);


        infoLayout->addLayout(horizontalLayout);

        tableWidgetHistory = new QTableWidget(tab_reader);
        if (tableWidgetHistory->columnCount() < 4)
            tableWidgetHistory->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidgetHistory->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setTextAlignment(Qt::AlignCenter);
        tableWidgetHistory->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setTextAlignment(Qt::AlignCenter);
        tableWidgetHistory->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setTextAlignment(Qt::AlignCenter);
        tableWidgetHistory->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        tableWidgetHistory->setObjectName(QStringLiteral("tableWidgetHistory"));
        tableWidgetHistory->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tableWidgetHistory->sizePolicy().hasHeightForWidth());
        tableWidgetHistory->setSizePolicy(sizePolicy1);
        tableWidgetHistory->setStyleSheet(QLatin1String("QTableView {\n"
"font: 10pt \"Tahoma\";\n"
"color: white;\n"
"selection-color: white;\n"
"selection-background-color: #d81b1b;\n"
"background-color: #403D3A;\n"
"}\n"
"\n"
"QTableView QTableCornerButton::section {\n"
"    background: #d81b1b;;\n"
"    border: 2px outset #d81b1b;\n"
"}\n"
"\n"
"QHeaderView::section{\n"
"border-style: solid;\n"
"border-bottom: 1px solid rgb(0,0,0);\n"
"background-color: #d81b1b;\n"
"color: white;\n"
"subcontrol-origin: margin; subcontrol-position: top right; padding:2px;\n"
"qproperty-alignment: AlignCenter;\n"
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
""
                        "\n"
"QScrollBar::sub-line:horizontal  {\n"
"    border: 2px solid grey;\n"
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

        infoLayout->addWidget(tableWidgetHistory);

        tableWidgetBooks = new QTableWidget(tab_reader);
        if (tableWidgetBooks->columnCount() < 3)
            tableWidgetBooks->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidgetBooks->setHorizontalHeaderItem(0, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidgetBooks->setHorizontalHeaderItem(1, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidgetBooks->setHorizontalHeaderItem(2, __qtablewidgetitem6);
        tableWidgetBooks->setObjectName(QStringLiteral("tableWidgetBooks"));
        tableWidgetBooks->setStyleSheet(QLatin1String("QTableView {\n"
"font: 10pt \"Tahoma\";\n"
"color: white;\n"
"selection-color: white;\n"
"selection-background-color: #d81b1b;\n"
"background-color: #403D3A;\n"
"}\n"
"\n"
"QTableView QTableCornerButton::section {\n"
"    background: #d81b1b;;\n"
"    border: 2px outset #d81b1b;\n"
"}\n"
"\n"
"QHeaderView::section{\n"
"border-style: solid;\n"
"border-bottom: 1px solid rgb(0,0,0);\n"
"background-color: #d81b1b;\n"
"color: white;\n"
"subcontrol-origin: margin; subcontrol-position: top right; padding:2px;\n"
"qproperty-alignment: AlignCenter;\n"
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
""
                        "\n"
"QScrollBar::sub-line:horizontal  {\n"
"    border: 2px solid grey;\n"
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

        infoLayout->addWidget(tableWidgetBooks);

        horizontalLayout_button = new QHBoxLayout();
        horizontalLayout_button->setSpacing(6);
        horizontalLayout_button->setObjectName(QStringLiteral("horizontalLayout_button"));
        Button_Info_Reader = new QPushButton(tab_reader);
        Button_Info_Reader->setObjectName(QStringLiteral("Button_Info_Reader"));
        Button_Info_Reader->setMaximumSize(QSize(200, 16777215));
        Button_Info_Reader->setStyleSheet(QLatin1String("QPushButton {\n"
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
"QPushButton:disabled {\n"
" background:#1A1A1A; \n"
"color:#9B9B9B;\n"
"}"));
        Button_Info_Reader->setFlat(false);

        horizontalLayout_button->addWidget(Button_Info_Reader);

        pushButton_DeleteReader = new QPushButton(tab_reader);
        pushButton_DeleteReader->setObjectName(QStringLiteral("pushButton_DeleteReader"));
        pushButton_DeleteReader->setEnabled(true);
        pushButton_DeleteReader->setMaximumSize(QSize(200, 16777215));
        pushButton_DeleteReader->setStyleSheet(QLatin1String("QPushButton {\n"
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
"QPushButton:disabled {\n"
" background:#1A1A1A; \n"
"color:#9B9B9B;\n"
"}"));
        pushButton_DeleteReader->setFlat(false);

        horizontalLayout_button->addWidget(pushButton_DeleteReader);

        pushButton_Reverse = new QPushButton(tab_reader);
        pushButton_Reverse->setObjectName(QStringLiteral("pushButton_Reverse"));
        pushButton_Reverse->setEnabled(true);
        pushButton_Reverse->setMaximumSize(QSize(200, 16777215));
        pushButton_Reverse->setStyleSheet(QLatin1String("QPushButton {\n"
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
"QPushButton:disabled {\n"
" background:#1A1A1A; \n"
"color:#9B9B9B;\n"
"}"));
        pushButton_Reverse->setCheckable(false);
        pushButton_Reverse->setFlat(false);

        horizontalLayout_button->addWidget(pushButton_Reverse);

        pushButton_AddBook = new QPushButton(tab_reader);
        pushButton_AddBook->setObjectName(QStringLiteral("pushButton_AddBook"));
        pushButton_AddBook->setMaximumSize(QSize(200, 16777215));
        pushButton_AddBook->setStyleSheet(QLatin1String("QPushButton {\n"
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
"QPushButton:disabled {\n"
" background:#1A1A1A; \n"
"color:#9B9B9B;\n"
"}"));

        horizontalLayout_button->addWidget(pushButton_AddBook);

        pushButton_ReturnBook = new QPushButton(tab_reader);
        pushButton_ReturnBook->setObjectName(QStringLiteral("pushButton_ReturnBook"));
        pushButton_ReturnBook->setMaximumSize(QSize(200, 16777215));
        pushButton_ReturnBook->setStyleSheet(QLatin1String("QPushButton {\n"
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
"QPushButton:disabled {\n"
" background:#1A1A1A; \n"
"color:#9B9B9B;\n"
"}"));

        horizontalLayout_button->addWidget(pushButton_ReturnBook);


        infoLayout->addLayout(horizontalLayout_button);


        horizontalLayout_15->addLayout(infoLayout);

        tabWidget->addTab(tab_reader, QString());
        tab_book = new QWidget();
        tab_book->setObjectName(QStringLiteral("tab_book"));
        horizontalLayout_2 = new QHBoxLayout(tab_book);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        listLayout_Book = new QVBoxLayout();
        listLayout_Book->setSpacing(6);
        listLayout_Book->setObjectName(QStringLiteral("listLayout_Book"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        lineSearch_Book = new QLineEdit(tab_book);
        lineSearch_Book->setObjectName(QStringLiteral("lineSearch_Book"));
        lineSearch_Book->setMaximumSize(QSize(195, 16777215));
        lineSearch_Book->setStyleSheet(QLatin1String("QLineEdit {\n"
"border-width:2px;\n"
"border-color: #d81b1b;\n"
"border-style: solid;\n"
"font: 10pt \"Tahoma\";\n"
"color: white;\n"
"selection-color: white;\n"
"selection-background-color: #d81b1b;\n"
"background-color: #403D3A;\n"
"}"));

        horizontalLayout_7->addWidget(lineSearch_Book);

        pushButton_NewBook = new QPushButton(tab_book);
        pushButton_NewBook->setObjectName(QStringLiteral("pushButton_NewBook"));
        pushButton_NewBook->setMinimumSize(QSize(20, 20));
        pushButton_NewBook->setMaximumSize(QSize(20, 20));
        pushButton_NewBook->setStyleSheet(QLatin1String("QPushButton {\n"
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
"QPushButton:disabled {\n"
" background:#1A1A1A; \n"
"color:#9B9B9B;\n"
"}"));

        horizontalLayout_7->addWidget(pushButton_NewBook);


        listLayout_Book->addLayout(horizontalLayout_7);

        listWidget_Book = new QListWidget(tab_book);
        listWidget_Book->setObjectName(QStringLiteral("listWidget_Book"));
        listWidget_Book->setMaximumSize(QSize(220, 16777215));
        listWidget_Book->setStyleSheet(QLatin1String("QListWidget {\n"
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

        listLayout_Book->addWidget(listWidget_Book);


        horizontalLayout_2->addLayout(listLayout_Book);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        verticalLayout_Book = new QVBoxLayout();
        verticalLayout_Book->setSpacing(6);
        verticalLayout_Book->setObjectName(QStringLiteral("verticalLayout_Book"));
        nameLayout_Book = new QHBoxLayout();
        nameLayout_Book->setSpacing(6);
        nameLayout_Book->setObjectName(QStringLiteral("nameLayout_Book"));
        lbl_name_Book = new QLabel(tab_book);
        lbl_name_Book->setObjectName(QStringLiteral("lbl_name_Book"));
        lbl_name_Book->setMinimumSize(QSize(0, 20));
        lbl_name_Book->setMaximumSize(QSize(65, 20));
        lbl_name_Book->setFont(font);
        lbl_name_Book->setStyleSheet(QLatin1String("QLabel {\n"
"font: bold 9pt  \"Tahoma\";\n"
"color: white;\n"
"}"));

        nameLayout_Book->addWidget(lbl_name_Book);

        lbl_name_info_Book = new QLabel(tab_book);
        lbl_name_info_Book->setObjectName(QStringLiteral("lbl_name_info_Book"));
        lbl_name_info_Book->setMinimumSize(QSize(0, 20));
        lbl_name_info_Book->setMaximumSize(QSize(16777215, 20));
        lbl_name_info_Book->setStyleSheet(QLatin1String("QLabel {\n"
"font: 9pt  \"Tahoma\";\n"
"color: white;\n"
"}"));

        nameLayout_Book->addWidget(lbl_name_info_Book);


        verticalLayout_Book->addLayout(nameLayout_Book);

        authorLayout = new QHBoxLayout();
        authorLayout->setSpacing(6);
        authorLayout->setObjectName(QStringLiteral("authorLayout"));
        lbl_author = new QLabel(tab_book);
        lbl_author->setObjectName(QStringLiteral("lbl_author"));
        lbl_author->setMinimumSize(QSize(0, 20));
        lbl_author->setMaximumSize(QSize(45, 20));
        lbl_author->setFont(font);
        lbl_author->setStyleSheet(QLatin1String("QLabel {\n"
"font: bold 9pt  \"Tahoma\";\n"
"color: white;\n"
"}"));

        authorLayout->addWidget(lbl_author);

        lbl_author_info = new QLabel(tab_book);
        lbl_author_info->setObjectName(QStringLiteral("lbl_author_info"));
        lbl_author_info->setMinimumSize(QSize(0, 20));
        lbl_author_info->setMaximumSize(QSize(16777215, 20));
        lbl_author_info->setStyleSheet(QLatin1String("QLabel {\n"
"font: 9pt  \"Tahoma\";\n"
"color: white;\n"
"}"));

        authorLayout->addWidget(lbl_author_info);


        verticalLayout_Book->addLayout(authorLayout);

        publicationLayout = new QHBoxLayout();
        publicationLayout->setSpacing(6);
        publicationLayout->setObjectName(QStringLiteral("publicationLayout"));
        lbl_publication = new QLabel(tab_book);
        lbl_publication->setObjectName(QStringLiteral("lbl_publication"));
        lbl_publication->setMinimumSize(QSize(85, 20));
        lbl_publication->setMaximumSize(QSize(85, 20));
        lbl_publication->setFont(font);
        lbl_publication->setStyleSheet(QLatin1String("QLabel {\n"
"font: bold 9pt  \"Tahoma\";\n"
"color: white;\n"
"}"));

        publicationLayout->addWidget(lbl_publication);

        lbl_publication_info = new QLabel(tab_book);
        lbl_publication_info->setObjectName(QStringLiteral("lbl_publication_info"));
        lbl_publication_info->setMinimumSize(QSize(0, 20));
        lbl_publication_info->setMaximumSize(QSize(16777215, 20));
        lbl_publication_info->setStyleSheet(QLatin1String("QLabel {\n"
"font: 9pt  \"Tahoma\";\n"
"color: white;\n"
"}"));

        publicationLayout->addWidget(lbl_publication_info);


        verticalLayout_Book->addLayout(publicationLayout);

        pagesLayout = new QHBoxLayout();
        pagesLayout->setSpacing(6);
        pagesLayout->setObjectName(QStringLiteral("pagesLayout"));
        lbl_pages = new QLabel(tab_book);
        lbl_pages->setObjectName(QStringLiteral("lbl_pages"));
        lbl_pages->setMinimumSize(QSize(0, 20));
        lbl_pages->setMaximumSize(QSize(60, 20));
        lbl_pages->setFont(font);
        lbl_pages->setStyleSheet(QLatin1String("QLabel {\n"
"font: bold 9pt  \"Tahoma\";\n"
"color: white;\n"
"}"));

        pagesLayout->addWidget(lbl_pages);

        lbl_pages_info = new QLabel(tab_book);
        lbl_pages_info->setObjectName(QStringLiteral("lbl_pages_info"));
        lbl_pages_info->setMinimumSize(QSize(0, 20));
        lbl_pages_info->setMaximumSize(QSize(16777215, 20));
        lbl_pages_info->setStyleSheet(QLatin1String("QLabel {\n"
"font: 9pt  \"Tahoma\";\n"
"color: white;\n"
"}"));

        pagesLayout->addWidget(lbl_pages_info);


        verticalLayout_Book->addLayout(pagesLayout);

        quantiryLayout = new QHBoxLayout();
        quantiryLayout->setSpacing(6);
        quantiryLayout->setObjectName(QStringLiteral("quantiryLayout"));
        lbl_quantity = new QLabel(tab_book);
        lbl_quantity->setObjectName(QStringLiteral("lbl_quantity"));
        lbl_quantity->setMinimumSize(QSize(0, 20));
        lbl_quantity->setMaximumSize(QSize(90, 20));
        lbl_quantity->setFont(font);
        lbl_quantity->setStyleSheet(QLatin1String("QLabel {\n"
"font: bold 9pt  \"Tahoma\";\n"
"color: white;\n"
"}"));

        quantiryLayout->addWidget(lbl_quantity);

        lbl_quantity_info = new QLabel(tab_book);
        lbl_quantity_info->setObjectName(QStringLiteral("lbl_quantity_info"));
        lbl_quantity_info->setMinimumSize(QSize(0, 20));
        lbl_quantity_info->setMaximumSize(QSize(16777215, 20));
        lbl_quantity_info->setStyleSheet(QLatin1String("QLabel {\n"
"font: 9pt  \"Tahoma\";\n"
"color: white;\n"
"}"));

        quantiryLayout->addWidget(lbl_quantity_info);


        verticalLayout_Book->addLayout(quantiryLayout);

        availableLayout = new QHBoxLayout();
        availableLayout->setSpacing(6);
        availableLayout->setObjectName(QStringLiteral("availableLayout"));
        lbl_available = new QLabel(tab_book);
        lbl_available->setObjectName(QStringLiteral("lbl_available"));
        lbl_available->setMinimumSize(QSize(67, 20));
        lbl_available->setMaximumSize(QSize(67, 20));
        lbl_available->setFont(font);
        lbl_available->setStyleSheet(QLatin1String("QLabel {\n"
"font: bold 9pt  \"Tahoma\";\n"
"color: white;\n"
"}"));

        availableLayout->addWidget(lbl_available);

        lbl_available_info = new QLabel(tab_book);
        lbl_available_info->setObjectName(QStringLiteral("lbl_available_info"));
        lbl_available_info->setMinimumSize(QSize(0, 20));
        lbl_available_info->setMaximumSize(QSize(16777215, 20));
        lbl_available_info->setStyleSheet(QLatin1String("QLabel {\n"
"font: 9pt  \"Tahoma\";\n"
"color: white;\n"
"}"));

        availableLayout->addWidget(lbl_available_info);


        verticalLayout_Book->addLayout(availableLayout);

        idBook_Layout = new QHBoxLayout();
        idBook_Layout->setSpacing(6);
        idBook_Layout->setObjectName(QStringLiteral("idBook_Layout"));
        lbl_id_Book = new QLabel(tab_book);
        lbl_id_Book->setObjectName(QStringLiteral("lbl_id_Book"));
        lbl_id_Book->setMaximumSize(QSize(20, 20));
        lbl_id_Book->setFont(font);
        lbl_id_Book->setStyleSheet(QLatin1String("QLabel {\n"
"font: bold 9pt  \"Tahoma\";\n"
"color: white;\n"
"}"));

        idBook_Layout->addWidget(lbl_id_Book);

        lbl_id_Book_info = new QLabel(tab_book);
        lbl_id_Book_info->setObjectName(QStringLiteral("lbl_id_Book_info"));
        lbl_id_Book_info->setMaximumSize(QSize(16777215, 20));
        lbl_id_Book_info->setStyleSheet(QLatin1String("QLabel {\n"
"font: 9pt  \"Tahoma\";\n"
"color: white;\n"
"}"));

        idBook_Layout->addWidget(lbl_id_Book_info);


        verticalLayout_Book->addLayout(idBook_Layout);

        descriptionLayout = new QHBoxLayout();
        descriptionLayout->setSpacing(6);
        descriptionLayout->setObjectName(QStringLiteral("descriptionLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        lbl_description_info = new QTextEdit(tab_book);
        lbl_description_info->setObjectName(QStringLiteral("lbl_description_info"));
        lbl_description_info->setEnabled(true);
        lbl_description_info->setStyleSheet(QLatin1String("QTextEdit {\n"
"border-width:10px;\n"
"border-color:#d81b1b;\n"
"border-style: solid;\n"
"font: 9pt \"Tahoma\";\n"
"color: white;\n"
"selection-color: white;\n"
"selection-background-color: #d81b1b;\n"
"}"));

        verticalLayout_3->addWidget(lbl_description_info);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);


        descriptionLayout->addLayout(verticalLayout_3);


        verticalLayout_Book->addLayout(descriptionLayout);


        horizontalLayout_3->addLayout(verticalLayout_Book);

        photo_Book = new QLabel(tab_book);
        photo_Book->setObjectName(QStringLiteral("photo_Book"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(photo_Book->sizePolicy().hasHeightForWidth());
        photo_Book->setSizePolicy(sizePolicy2);
        photo_Book->setMinimumSize(QSize(250, 375));
        photo_Book->setMaximumSize(QSize(250, 375));
        photo_Book->setStyleSheet(QLatin1String("QLabel\n"
"{\n"
"border-width:2px;\n"
"border-color: #d81b1b;\n"
"border-style: solid;\n"
"}"));

        horizontalLayout_3->addWidget(photo_Book, 0, Qt::AlignTop);


        verticalLayout->addLayout(horizontalLayout_3);

        Book_Layout_button = new QHBoxLayout();
        Book_Layout_button->setSpacing(6);
        Book_Layout_button->setObjectName(QStringLiteral("Book_Layout_button"));
        pushButton_DeleteBook = new QPushButton(tab_book);
        pushButton_DeleteBook->setObjectName(QStringLiteral("pushButton_DeleteBook"));
        pushButton_DeleteBook->setMinimumSize(QSize(200, 0));
        pushButton_DeleteBook->setMaximumSize(QSize(200, 16777215));
        pushButton_DeleteBook->setStyleSheet(QLatin1String("QPushButton {\n"
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
"QPushButton:disabled {\n"
" background:#1A1A1A; \n"
"color:#9B9B9B;\n"
"}"));

        Book_Layout_button->addWidget(pushButton_DeleteBook);

        pushButton_Info_Book = new QPushButton(tab_book);
        pushButton_Info_Book->setObjectName(QStringLiteral("pushButton_Info_Book"));
        pushButton_Info_Book->setMaximumSize(QSize(200, 16777215));
        pushButton_Info_Book->setStyleSheet(QLatin1String("QPushButton {\n"
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
"QPushButton:disabled {\n"
" background:#1A1A1A; \n"
"color:#9B9B9B;\n"
"}"));

        Book_Layout_button->addWidget(pushButton_Info_Book);


        verticalLayout->addLayout(Book_Layout_button);


        horizontalLayout_2->addLayout(verticalLayout);

        tabWidget->addTab(tab_book, QString());

        verticalLayout_2->addWidget(tabWidget);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 926, 18));
        menuBar->setStyleSheet(QLatin1String("QMenuBar {\n"
"background-color: #3a3633;\n"
"font: 8pt \"Tahoma\";\n"
"color: white;\n"
"border-style: solid;\n"
"border-bottom-width: 1px; \n"
"border-color: #524E4B;\n"
"}\n"
"\n"
"QMenuBar::item:hover {\n"
"background: #524E4B;\n"
"border-style: solid;\n"
"}\n"
"\n"
"QMenuBar::item:selected {\n"
"background: #524E4B;\n"
"border-style: solid;\n"
"}\n"
""));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuFile->setStyleSheet(QLatin1String("QMenu {\n"
"background-color: #3a3633;\n"
"font: 8pt \"Tahoma\";\n"
"color: white;\n"
"}\n"
"\n"
"QMenu:hover {\n"
"background: #524E4B;\n"
"border-style: solid;\n"
"}\n"
"\n"
"QMenu:selected {\n"
"background: #524E4B;\n"
"border-style: solid;\n"
"}\n"
"\n"
"QMenu::item:hover {\n"
"    background: #524E4B;\n"
"border-style: solid;\n"
"border-bottom-width: 1%; \n"
"border-top-width: 1%; \n"
"border-color: #FFFFFF;\n"
"}\n"
"\n"
"QMenu::item:selected {\n"
"    background: #524E4B;\n"
"border-style: solid;\n"
"border-bottom-width: 1%; \n"
"border-top-width: 1%; \n"
"border-color: #FFFFFF;\n"
"}\n"
"\n"
"QMenu::item:disabled {\n"
"color:#9B9B9B;\n"
"}"));
        MainWindow->setMenuBar(menuBar);
        QWidget::setTabOrder(listWidget, lineSearch);
        QWidget::setTabOrder(lineSearch, pushButton_NewReader);
        QWidget::setTabOrder(pushButton_NewReader, Button_Info_Reader);
        QWidget::setTabOrder(Button_Info_Reader, pushButton_DeleteReader);
        QWidget::setTabOrder(pushButton_DeleteReader, pushButton_Reverse);
        QWidget::setTabOrder(pushButton_Reverse, pushButton_AddBook);
        QWidget::setTabOrder(pushButton_AddBook, pushButton_ReturnBook);
        QWidget::setTabOrder(pushButton_ReturnBook, listWidget_Book);
        QWidget::setTabOrder(listWidget_Book, lineSearch_Book);
        QWidget::setTabOrder(lineSearch_Book, pushButton_NewBook);
        QWidget::setTabOrder(pushButton_NewBook, pushButton_DeleteBook);
        QWidget::setTabOrder(pushButton_DeleteBook, pushButton_Info_Book);
        QWidget::setTabOrder(pushButton_Info_Book, tableWidgetHistory);
        QWidget::setTabOrder(tableWidgetHistory, tableWidgetBooks);

        menuBar->addAction(menuFile->menuAction());
        menuFile->addAction(actionDatabases);
        menuFile->addAction(actionDeleted);
        menuFile->addAction(actionAbout);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        actionDatabases->setText(QApplication::translate("MainWindow", "\320\221\320\260\320\267\321\213 \320\264\320\260\320\275\320\275\321\213\321\205", Q_NULLPTR));
        actionDeleted->setText(QApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\265\320\275\320\275\321\213\320\265 \321\207\320\270\321\202\320\260\321\202\320\265\320\273\320\270/\320\272\320\275\320\270\320\263\320\270", Q_NULLPTR));
        actionAbout->setText(QApplication::translate("MainWindow", "\320\236 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\265", Q_NULLPTR));
        pushButton_NewReader->setText(QApplication::translate("MainWindow", "+", Q_NULLPTR));
        lbl_lname->setText(QApplication::translate("MainWindow", "\320\244\320\260\320\274\320\270\320\273\320\270\321\217:", Q_NULLPTR));
        lbl_lname_info->setText(QString());
        lbl_name->setText(QApplication::translate("MainWindow", "\320\230\320\274\321\217:", Q_NULLPTR));
        lbl_name_info->setText(QString());
        lbl_mname->setText(QApplication::translate("MainWindow", "\320\236\321\202\321\207\320\265\321\201\321\202\320\262\320\276:", Q_NULLPTR));
        lbl_mname_info->setText(QString());
        lbl_bday->setText(QApplication::translate("MainWindow", "\320\224\320\260\321\202\320\260 \321\200\320\276\320\266\320\264\320\265\320\275\320\270\321\217:", Q_NULLPTR));
        lbl_bday_info->setText(QString());
        lbl_adress->setText(QApplication::translate("MainWindow", "\320\220\320\264\321\200\320\265\321\201:", Q_NULLPTR));
        lbl_adress_info->setText(QString());
        lbl_phone->setText(QApplication::translate("MainWindow", "\320\242\320\265\320\273\320\265\321\204\320\276\320\275:", Q_NULLPTR));
        lbl_phone_info->setText(QString());
        lbl_id->setText(QApplication::translate("MainWindow", "ID:", Q_NULLPTR));
        lbl_id_info->setText(QString());
        lbl_blacklist->setText(QApplication::translate("MainWindow", "\320\247\320\265\321\200\320\275\321\213\320\271 \321\201\320\277\320\270\321\201\320\276\320\272:", Q_NULLPTR));
        info_blacklist->setText(QString());
        photo->setText(QString());
        QTableWidgetItem *___qtablewidgetitem = tableWidgetHistory->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "\320\232\320\275\320\270\320\263\320\260", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidgetHistory->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "\320\235\320\260\321\207\320\260\320\273\321\214\320\275\320\260\321\217 \320\264\320\260\321\202\320\260", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidgetHistory->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "\320\232\320\276\320\275\320\265\321\207\320\275\320\260\321\217 \320\264\320\260\321\202\320\260", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidgetHistory->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "\320\241\321\202\320\260\321\202\321\203\321\201", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidgetBooks->horizontalHeaderItem(0);
        ___qtablewidgetitem4->setText(QApplication::translate("MainWindow", "\320\232\320\275\320\270\320\263\320\260", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidgetBooks->horizontalHeaderItem(1);
        ___qtablewidgetitem5->setText(QApplication::translate("MainWindow", "\320\235\320\260\321\207\320\260\320\273\321\214\320\275\320\260\321\217 \320\264\320\260\321\202\320\260", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidgetBooks->horizontalHeaderItem(2);
        ___qtablewidgetitem6->setText(QApplication::translate("MainWindow", "\320\232\320\276\320\275\320\265\321\207\320\275\320\260\321\217 \320\264\320\260\321\202\320\260", Q_NULLPTR));
        Button_Info_Reader->setText(QApplication::translate("MainWindow", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214 \320\264\320\260\320\275\320\275\321\213\320\265", Q_NULLPTR));
        pushButton_DeleteReader->setText(QApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", Q_NULLPTR));
        pushButton_Reverse->setText(QApplication::translate("MainWindow", "\320\242\320\265\320\272\321\203\321\211\320\270\320\265 \320\272\320\275\320\270\320\263\320\270", Q_NULLPTR));
        pushButton_AddBook->setText(QApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\272\320\275\320\270\320\263\321\203", Q_NULLPTR));
        pushButton_ReturnBook->setText(QApplication::translate("MainWindow", "\320\222\320\265\321\200\320\275\321\203\321\202\321\214 \320\272\320\275\320\270\320\263\321\203", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_reader), QApplication::translate("MainWindow", "\320\247\320\270\321\202\320\260\321\202\320\265\320\273\320\270", Q_NULLPTR));
        pushButton_NewBook->setText(QApplication::translate("MainWindow", "+", Q_NULLPTR));
        lbl_name_Book->setText(QApplication::translate("MainWindow", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265:", Q_NULLPTR));
        lbl_name_info_Book->setText(QString());
        lbl_author->setText(QApplication::translate("MainWindow", "\320\220\320\262\321\202\320\276\321\200:", Q_NULLPTR));
        lbl_author_info->setText(QString());
        lbl_publication->setText(QApplication::translate("MainWindow", "\320\223\320\276\320\264 \320\270\320\267\320\264\320\260\320\275\320\270\321\217:", Q_NULLPTR));
        lbl_publication_info->setText(QString());
        lbl_pages->setText(QApplication::translate("MainWindow", "\320\241\321\202\321\200\320\260\320\275\320\270\321\206:", Q_NULLPTR));
        lbl_pages_info->setText(QString());
        lbl_quantity->setText(QApplication::translate("MainWindow", "\320\222 \320\261\320\270\320\261\320\273\320\270\320\276\321\202\320\265\320\272\320\265:", Q_NULLPTR));
        lbl_quantity_info->setText(QString());
        lbl_available->setText(QApplication::translate("MainWindow", "\320\222 \320\275\320\260\320\273\320\270\321\207\320\270\320\270:", Q_NULLPTR));
        lbl_available_info->setText(QString());
        lbl_id_Book->setText(QApplication::translate("MainWindow", "ID:", Q_NULLPTR));
        lbl_id_Book_info->setText(QString());
        lbl_description_info->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Tahoma'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"justify\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-size:8.25pt;\"><br /></p></body></html>", Q_NULLPTR));
        photo_Book->setText(QString());
        pushButton_DeleteBook->setText(QApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", Q_NULLPTR));
        pushButton_Info_Book->setText(QApplication::translate("MainWindow", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214 \320\264\320\260\320\275\320\275\321\213\320\265", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_book), QApplication::translate("MainWindow", "\320\232\320\275\320\270\320\263\320\270", Q_NULLPTR));
        menuFile->setTitle(QApplication::translate("MainWindow", "\320\235\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\270", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
