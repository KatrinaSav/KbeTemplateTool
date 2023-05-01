/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNew;
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionSave_as;
    QAction *actionExit;
    QAction *actionAbout;
    QAction *actionImport;
    QAction *actionTo_image;
    QAction *actionAbout_Qt;
    QAction *actionSave_all;
    QAction *actionClose_All;
    QAction *actionClose_Others;
    QAction *actionClose;
    QAction *actionFeedback;
    QAction *actionGuide;
    QAction *actionView_ProjectManager;
    QAction *actionNew_Project;
    QAction *actionOpen_Project;
    QAction *actionSave_Project;
    QAction *actionClose_Project;
    QAction *actionSettings;
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuExport;
    QMenu *menuHelp;
    QMenu *menuTools;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(600, 400);
        actionNew = new QAction(MainWindow);
        actionNew->setObjectName(QString::fromUtf8("actionNew"));
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        actionSave_as = new QAction(MainWindow);
        actionSave_as->setObjectName(QString::fromUtf8("actionSave_as"));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        actionImport = new QAction(MainWindow);
        actionImport->setObjectName(QString::fromUtf8("actionImport"));
        actionImport->setEnabled(false);
        actionTo_image = new QAction(MainWindow);
        actionTo_image->setObjectName(QString::fromUtf8("actionTo_image"));
        actionAbout_Qt = new QAction(MainWindow);
        actionAbout_Qt->setObjectName(QString::fromUtf8("actionAbout_Qt"));
        actionSave_all = new QAction(MainWindow);
        actionSave_all->setObjectName(QString::fromUtf8("actionSave_all"));
        actionClose_All = new QAction(MainWindow);
        actionClose_All->setObjectName(QString::fromUtf8("actionClose_All"));
        actionClose_All->setShortcutContext(Qt::WindowShortcut);
        actionClose_Others = new QAction(MainWindow);
        actionClose_Others->setObjectName(QString::fromUtf8("actionClose_Others"));
        actionClose = new QAction(MainWindow);
        actionClose->setObjectName(QString::fromUtf8("actionClose"));
        actionClose->setShortcutContext(Qt::WindowShortcut);
        actionFeedback = new QAction(MainWindow);
        actionFeedback->setObjectName(QString::fromUtf8("actionFeedback"));
        actionGuide = new QAction(MainWindow);
        actionGuide->setObjectName(QString::fromUtf8("actionGuide"));
        actionGuide->setEnabled(false);
        actionView_ProjectManager = new QAction(MainWindow);
        actionView_ProjectManager->setObjectName(QString::fromUtf8("actionView_ProjectManager"));
        actionNew_Project = new QAction(MainWindow);
        actionNew_Project->setObjectName(QString::fromUtf8("actionNew_Project"));
        actionOpen_Project = new QAction(MainWindow);
        actionOpen_Project->setObjectName(QString::fromUtf8("actionOpen_Project"));
        actionSave_Project = new QAction(MainWindow);
        actionSave_Project->setObjectName(QString::fromUtf8("actionSave_Project"));
        actionClose_Project = new QAction(MainWindow);
        actionClose_Project->setObjectName(QString::fromUtf8("actionClose_Project"));
        actionSettings = new QAction(MainWindow);
        actionSettings->setObjectName(QString::fromUtf8("actionSettings"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 22));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuExport = new QMenu(menuFile);
        menuExport->setObjectName(QString::fromUtf8("menuExport"));
        menuExport->setEnabled(false);
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        menuTools = new QMenu(menuBar);
        menuTools->setObjectName(QString::fromUtf8("menuTools"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuTools->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionNew);
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionSave);
        menuFile->addAction(actionSave_as);
        menuFile->addAction(actionSave_all);
        menuFile->addSeparator();
        menuFile->addAction(menuExport->menuAction());
        menuFile->addAction(actionImport);
        menuFile->addSeparator();
        menuFile->addAction(actionClose);
        menuFile->addAction(actionClose_All);
        menuFile->addAction(actionClose_Project);
        menuFile->addAction(actionClose_Others);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        menuExport->addAction(actionTo_image);
        menuHelp->addAction(actionAbout);
        menuHelp->addAction(actionAbout_Qt);
        menuHelp->addAction(actionFeedback);
        menuHelp->addAction(actionGuide);
        menuTools->addAction(actionSettings);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        actionNew->setText(QApplication::translate("MainWindow", "New", nullptr));
#ifndef QT_NO_SHORTCUT
        actionNew->setShortcut(QApplication::translate("MainWindow", "Ctrl+N", nullptr));
#endif // QT_NO_SHORTCUT
        actionOpen->setText(QApplication::translate("MainWindow", "Open", nullptr));
#ifndef QT_NO_SHORTCUT
        actionOpen->setShortcut(QApplication::translate("MainWindow", "Ctrl+O", nullptr));
#endif // QT_NO_SHORTCUT
        actionSave->setText(QApplication::translate("MainWindow", "Save", nullptr));
#ifndef QT_NO_SHORTCUT
        actionSave->setShortcut(QApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_NO_SHORTCUT
        actionSave_as->setText(QApplication::translate("MainWindow", "Save as", nullptr));
#ifndef QT_NO_SHORTCUT
        actionSave_as->setShortcut(QApplication::translate("MainWindow", "Ctrl+Shift+S", nullptr));
#endif // QT_NO_SHORTCUT
        actionExit->setText(QApplication::translate("MainWindow", "Exit", nullptr));
#ifndef QT_NO_SHORTCUT
        actionExit->setShortcut(QApplication::translate("MainWindow", "Ctrl+Q", nullptr));
#endif // QT_NO_SHORTCUT
        actionAbout->setText(QApplication::translate("MainWindow", "About ...", nullptr));
#ifndef QT_NO_SHORTCUT
        actionAbout->setShortcut(QApplication::translate("MainWindow", "F1", nullptr));
#endif // QT_NO_SHORTCUT
        actionImport->setText(QApplication::translate("MainWindow", "Import", nullptr));
        actionTo_image->setText(QApplication::translate("MainWindow", "Image", nullptr));
        actionAbout_Qt->setText(QApplication::translate("MainWindow", "About Qt ...", nullptr));
        actionSave_all->setText(QApplication::translate("MainWindow", "Save all", nullptr));
#ifndef QT_NO_SHORTCUT
        actionSave_all->setShortcut(QString());
#endif // QT_NO_SHORTCUT
        actionClose_All->setText(QApplication::translate("MainWindow", "Close All", nullptr));
#ifndef QT_NO_SHORTCUT
        actionClose_All->setShortcut(QApplication::translate("MainWindow", "Ctrl+Shift+W", nullptr));
#endif // QT_NO_SHORTCUT
        actionClose_Others->setText(QApplication::translate("MainWindow", "Close Others", nullptr));
        actionClose->setText(QApplication::translate("MainWindow", "Close", nullptr));
#ifndef QT_NO_SHORTCUT
        actionClose->setShortcut(QApplication::translate("MainWindow", "Ctrl+W", nullptr));
#endif // QT_NO_SHORTCUT
        actionFeedback->setText(QApplication::translate("MainWindow", "Feedback", nullptr));
        actionGuide->setText(QApplication::translate("MainWindow", "Guide", nullptr));
        actionView_ProjectManager->setText(QApplication::translate("MainWindow", "Project Manager", nullptr));
        actionNew_Project->setText(QApplication::translate("MainWindow", "New Project", nullptr));
        actionOpen_Project->setText(QApplication::translate("MainWindow", "Open Project", nullptr));
        actionSave_Project->setText(QApplication::translate("MainWindow", "Save Project", nullptr));
        actionClose_Project->setText(QApplication::translate("MainWindow", "Close Project", nullptr));
        actionSettings->setText(QApplication::translate("MainWindow", "Settings", nullptr));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", nullptr));
        menuExport->setTitle(QApplication::translate("MainWindow", "Export", nullptr));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", nullptr));
        menuTools->setTitle(QApplication::translate("MainWindow", "Tools", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
