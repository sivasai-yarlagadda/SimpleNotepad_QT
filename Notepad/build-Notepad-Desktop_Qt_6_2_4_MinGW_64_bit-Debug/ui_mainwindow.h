/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNew_File;
    QAction *actionOpen_File;
    QAction *actionExit;
    QAction *actionCopy;
    QAction *actionPaste;
    QAction *actionCut;
    QAction *actionExit_2;
    QAction *actionAbout;
    QAction *actionExit_3;
    QAction *actionSave;
    QAction *actionSave_As;
    QAction *actionUndo;
    QAction *actionRedo;
    QAction *actionClear;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QTextEdit *screen;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuView;
    QMenu *menuAbout;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        actionNew_File = new QAction(MainWindow);
        actionNew_File->setObjectName(QString::fromUtf8("actionNew_File"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/Images/new-document.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew_File->setIcon(icon);
        actionOpen_File = new QAction(MainWindow);
        actionOpen_File->setObjectName(QString::fromUtf8("actionOpen_File"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img/Images/open.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen_File->setIcon(icon1);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/img/Images/close.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExit->setIcon(icon2);
        actionCopy = new QAction(MainWindow);
        actionCopy->setObjectName(QString::fromUtf8("actionCopy"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/img/Images/copy.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCopy->setIcon(icon3);
        actionPaste = new QAction(MainWindow);
        actionPaste->setObjectName(QString::fromUtf8("actionPaste"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/img/Images/paste.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPaste->setIcon(icon4);
        actionCut = new QAction(MainWindow);
        actionCut->setObjectName(QString::fromUtf8("actionCut"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/img/Images/cut-31.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCut->setIcon(icon5);
        actionExit_2 = new QAction(MainWindow);
        actionExit_2->setObjectName(QString::fromUtf8("actionExit_2"));
        actionExit_2->setIcon(icon2);
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/img/Images/information-button.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAbout->setIcon(icon6);
        actionExit_3 = new QAction(MainWindow);
        actionExit_3->setObjectName(QString::fromUtf8("actionExit_3"));
        actionExit_3->setIcon(icon2);
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/img/Images/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon7);
        actionSave_As = new QAction(MainWindow);
        actionSave_As->setObjectName(QString::fromUtf8("actionSave_As"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/img/Images/save-as.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave_As->setIcon(icon8);
        actionUndo = new QAction(MainWindow);
        actionUndo->setObjectName(QString::fromUtf8("actionUndo"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/img/Images/undo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionUndo->setIcon(icon9);
        actionRedo = new QAction(MainWindow);
        actionRedo->setObjectName(QString::fromUtf8("actionRedo"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/img/Images/redo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRedo->setIcon(icon10);
        actionClear = new QAction(MainWindow);
        actionClear->setObjectName(QString::fromUtf8("actionClear"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/img/Images/clear.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionClear->setIcon(icon11);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        screen = new QTextEdit(centralwidget);
        screen->setObjectName(QString::fromUtf8("screen"));

        verticalLayout->addWidget(screen);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuView = new QMenu(menubar);
        menuView->setObjectName(QString::fromUtf8("menuView"));
        menuAbout = new QMenu(menubar);
        menuAbout->setObjectName(QString::fromUtf8("menuAbout"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuView->menuAction());
        menubar->addAction(menuAbout->menuAction());
        menuFile->addAction(actionNew_File);
        menuFile->addAction(actionOpen_File);
        menuFile->addSeparator();
        menuFile->addAction(actionSave);
        menuFile->addAction(actionSave_As);
        menuFile->addSeparator();
        menuView->addAction(actionCopy);
        menuView->addAction(actionCut);
        menuView->addAction(actionPaste);
        menuView->addSeparator();
        menuView->addAction(actionUndo);
        menuView->addAction(actionRedo);
        menuView->addSeparator();
        menuView->addAction(actionClear);
        menuAbout->addAction(actionAbout);
        menuAbout->addSeparator();
        menuAbout->addAction(actionExit_3);
        toolBar->addAction(actionNew_File);
        toolBar->addAction(actionOpen_File);
        toolBar->addSeparator();
        toolBar->addAction(actionSave);
        toolBar->addAction(actionSave_As);
        toolBar->addSeparator();
        toolBar->addAction(actionClear);
        toolBar->addSeparator();
        toolBar->addAction(actionCopy);
        toolBar->addAction(actionCut);
        toolBar->addAction(actionPaste);
        toolBar->addSeparator();
        toolBar->addAction(actionUndo);
        toolBar->addAction(actionRedo);
        toolBar->addSeparator();
        toolBar->addAction(actionExit_3);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionNew_File->setText(QCoreApplication::translate("MainWindow", "New File", nullptr));
        actionOpen_File->setText(QCoreApplication::translate("MainWindow", "Open File", nullptr));
        actionExit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        actionCopy->setText(QCoreApplication::translate("MainWindow", "Copy", nullptr));
        actionPaste->setText(QCoreApplication::translate("MainWindow", "Paste", nullptr));
        actionCut->setText(QCoreApplication::translate("MainWindow", "Cut", nullptr));
        actionExit_2->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        actionAbout->setText(QCoreApplication::translate("MainWindow", "About", nullptr));
        actionExit_3->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        actionSave->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
        actionSave_As->setText(QCoreApplication::translate("MainWindow", "Save As", nullptr));
        actionUndo->setText(QCoreApplication::translate("MainWindow", "Undo", nullptr));
        actionRedo->setText(QCoreApplication::translate("MainWindow", "Redo", nullptr));
        actionClear->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        menuView->setTitle(QCoreApplication::translate("MainWindow", "View", nullptr));
        menuAbout->setTitle(QCoreApplication::translate("MainWindow", "About", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
