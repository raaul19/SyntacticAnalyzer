/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QLabel *Title;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QPushButton *analyzeBT;
    QLabel *checkLB;
    QLabel *crossLB;
    QTextEdit *textTE;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(757, 412);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_2 = new QGridLayout(centralWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        Title = new QLabel(centralWidget);
        Title->setObjectName(QStringLiteral("Title"));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        Title->setFont(font);
        Title->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(Title, 0, 1, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        analyzeBT = new QPushButton(centralWidget);
        analyzeBT->setObjectName(QStringLiteral("analyzeBT"));

        verticalLayout->addWidget(analyzeBT);

        checkLB = new QLabel(centralWidget);
        checkLB->setObjectName(QStringLiteral("checkLB"));
        checkLB->setEnabled(false);
        checkLB->setMaximumSize(QSize(89, 87));
        checkLB->setPixmap(QPixmap(QString::fromUtf8(":/images/check.png")));
        checkLB->setScaledContents(true);

        verticalLayout->addWidget(checkLB);

        crossLB = new QLabel(centralWidget);
        crossLB->setObjectName(QStringLiteral("crossLB"));
        crossLB->setEnabled(false);
        crossLB->setMaximumSize(QSize(89, 87));
        crossLB->setPixmap(QPixmap(QString::fromUtf8(":/images/cross.png")));
        crossLB->setScaledContents(true);

        verticalLayout->addWidget(crossLB);


        gridLayout->addLayout(verticalLayout, 0, 1, 1, 1);

        textTE = new QTextEdit(centralWidget);
        textTE->setObjectName(QStringLiteral("textTE"));

        gridLayout->addWidget(textTE, 0, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 1, 1, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        textTE->raise();
        label->raise();
        Title->raise();
        checkLB->raise();
        analyzeBT->raise();
        crossLB->raise();
        analyzeBT->raise();
        checkLB->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 757, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "LexicalAnalyzer", 0));
        label->setText(QString());
        Title->setText(QApplication::translate("MainWindow", "Analizador L\303\251xico", 0));
        analyzeBT->setText(QApplication::translate("MainWindow", "Analizar", 0));
        checkLB->setText(QString());
        crossLB->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
