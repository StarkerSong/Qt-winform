/********************************************************************************
** Form generated from reading UI file 'linecolor.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LINECOLOR_H
#define UI_LINECOLOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_lineColorClass
{
public:

    void setupUi(QWidget *lineColorClass)
    {
        if (lineColorClass->objectName().isEmpty())
            lineColorClass->setObjectName(QStringLiteral("lineColorClass"));
        lineColorClass->resize(600, 400);

        retranslateUi(lineColorClass);

        QMetaObject::connectSlotsByName(lineColorClass);
    } // setupUi

    void retranslateUi(QWidget *lineColorClass)
    {
        lineColorClass->setWindowTitle(QApplication::translate("lineColorClass", "lineColor", 0));
    } // retranslateUi

};

namespace Ui {
    class lineColorClass: public Ui_lineColorClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LINECOLOR_H
