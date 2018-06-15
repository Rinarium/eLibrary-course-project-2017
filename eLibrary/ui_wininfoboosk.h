/********************************************************************************
** Form generated from reading UI file 'wininfoboosk.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WININFOBOOSK_H
#define UI_WININFOBOOSK_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_wininfobook
{
public:

    void setupUi(QDialog *wininfobook)
    {
        if (wininfobook->objectName().isEmpty())
            wininfobook->setObjectName(QStringLiteral("wininfobook"));
        wininfobook->resize(400, 300);

        retranslateUi(wininfobook);

        QMetaObject::connectSlotsByName(wininfobook);
    } // setupUi

    void retranslateUi(QDialog *wininfobook)
    {
        wininfobook->setWindowTitle(QApplication::translate("wininfobook", "Dialog", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class wininfobook: public Ui_wininfobook {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WININFOBOOSK_H
