/********************************************************************************
** Form generated from reading UI file 'zphrcontroldialog.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ZPHRCONTROLDIALOG_H
#define UI_ZPHRCONTROLDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ZPhrControlDialog
{
public:
    QGridLayout *gridLayout;
    QFormLayout *formLayout;
    QLabel *labelQuantity;
    QLabel *labelQuantity_int;
    QLabel *labelZPhr;
    QLabel *labelZPhr_int;
    QPushButton *pushButtonAll;
    QVBoxLayout *verticalLayout;
    QTreeWidget *treeWidget;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ZPhrControlDialog)
    {
        if (ZPhrControlDialog->objectName().isEmpty())
            ZPhrControlDialog->setObjectName(QStringLiteral("ZPhrControlDialog"));
        ZPhrControlDialog->resize(681, 384);
        ZPhrControlDialog->setMinimumSize(QSize(681, 384));
        gridLayout = new QGridLayout(ZPhrControlDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        labelQuantity = new QLabel(ZPhrControlDialog);
        labelQuantity->setObjectName(QStringLiteral("labelQuantity"));

        formLayout->setWidget(0, QFormLayout::LabelRole, labelQuantity);

        labelQuantity_int = new QLabel(ZPhrControlDialog);
        labelQuantity_int->setObjectName(QStringLiteral("labelQuantity_int"));

        formLayout->setWidget(0, QFormLayout::FieldRole, labelQuantity_int);

        labelZPhr = new QLabel(ZPhrControlDialog);
        labelZPhr->setObjectName(QStringLiteral("labelZPhr"));

        formLayout->setWidget(1, QFormLayout::LabelRole, labelZPhr);

        labelZPhr_int = new QLabel(ZPhrControlDialog);
        labelZPhr_int->setObjectName(QStringLiteral("labelZPhr_int"));

        formLayout->setWidget(1, QFormLayout::FieldRole, labelZPhr_int);

        pushButtonAll = new QPushButton(ZPhrControlDialog);
        pushButtonAll->setObjectName(QStringLiteral("pushButtonAll"));

        formLayout->setWidget(2, QFormLayout::LabelRole, pushButtonAll);


        gridLayout->addLayout(formLayout, 0, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        treeWidget = new QTreeWidget(ZPhrControlDialog);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(3, QStringLiteral("Confirmations"));
        __qtreewidgetitem->setText(2, QStringLiteral("zPhr Public ID"));
        __qtreewidgetitem->setText(1, QStringLiteral("Denomination"));
        __qtreewidgetitem->setText(0, QStringLiteral("Select"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));
        treeWidget->setMinimumSize(QSize(0, 250));
        treeWidget->setAlternatingRowColors(true);
        treeWidget->setSortingEnabled(true);
        treeWidget->setColumnCount(5);
        treeWidget->header()->setDefaultSectionSize(100);

        verticalLayout->addWidget(treeWidget);

        buttonBox = new QDialogButtonBox(ZPhrControlDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        gridLayout->addLayout(verticalLayout, 1, 0, 1, 1);


        retranslateUi(ZPhrControlDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), ZPhrControlDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ZPhrControlDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(ZPhrControlDialog);
    } // setupUi

    void retranslateUi(QDialog *ZPhrControlDialog)
    {
        ZPhrControlDialog->setWindowTitle(QApplication::translate("ZPhrControlDialog", "Select zPhr to Spend", nullptr));
        labelQuantity->setText(QApplication::translate("ZPhrControlDialog", "Quantity", nullptr));
        labelQuantity_int->setText(QApplication::translate("ZPhrControlDialog", "0", nullptr));
        labelZPhr->setText(QApplication::translate("ZPhrControlDialog", "zPhr", nullptr));
        labelZPhr_int->setText(QApplication::translate("ZPhrControlDialog", "0", nullptr));
        pushButtonAll->setText(QApplication::translate("ZPhrControlDialog", "Select/Deselect All", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(4, QApplication::translate("ZPhrControlDialog", "Is Spendable", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ZPhrControlDialog: public Ui_ZPhrControlDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ZPHRCONTROLDIALOG_H
