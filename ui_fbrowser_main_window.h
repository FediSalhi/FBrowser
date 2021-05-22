/********************************************************************************
** Form generated from reading UI file 'fbrowser_main_window.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FBROWSER_MAIN_WINDOW_H
#define UI_FBROWSER_MAIN_WINDOW_H

#include <QtCore/QVariant>
#include <QtWebKitWidgets/QWebView>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_FBrowserMainWindow
{
public:
    QAction *actionprevious_page;
    QAction *actionnext_page;
    QAction *actionstop_page_loading;
    QAction *actionrefresh_current_page;
    QAction *actionhome_page;
    QAction *actiongo_to_address;
    QAction* action_close_current_tab;
    QAction* action_new_tab;
    QAction* action_quit;
    QAction* action_help;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout_2;
    QWebView *webView;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuNaviagtion;
    QMenu *menu;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    QLineEdit* address_to_visit_LineEdit;
    QProgressBar* loading_status_ProgressBar;

    void setupUi(QMainWindow *FBrowserMainWindow)
    {
        if (FBrowserMainWindow->objectName().isEmpty())
            FBrowserMainWindow->setObjectName(QStringLiteral("FBrowserMainWindow"));
        FBrowserMainWindow->setEnabled(true);
        FBrowserMainWindow->resize(984, 462);
        QIcon icon;
        icon.addFile(QStringLiteral("icons/browser-internet-svgrepo-com.svg"), QSize(), QIcon::Normal, QIcon::Off);
        FBrowserMainWindow->setWindowIcon(icon);
        FBrowserMainWindow->setLayoutDirection(Qt::LeftToRight);
        FBrowserMainWindow->setAutoFillBackground(false);
        FBrowserMainWindow->setToolButtonStyle(Qt::ToolButtonIconOnly);
        FBrowserMainWindow->setAnimated(true);
        FBrowserMainWindow->setDocumentMode(false);
        FBrowserMainWindow->setTabShape(QTabWidget::Triangular);
        FBrowserMainWindow->setDockNestingEnabled(false);
        FBrowserMainWindow->setDockOptions(QMainWindow::AllowTabbedDocks|QMainWindow::AnimatedDocks);
        FBrowserMainWindow->setUnifiedTitleAndToolBarOnMac(false);
        actionprevious_page = new QAction(FBrowserMainWindow);
        actionprevious_page->setObjectName(QStringLiteral("actionprevious_page"));
        QIcon icon1;
        icon1.addFile(QStringLiteral("icons/arrow-back-outline-svgrepo-com.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionprevious_page->setIcon(icon1);
        actionnext_page = new QAction(FBrowserMainWindow);
        actionnext_page->setObjectName(QStringLiteral("actionnext_page"));
        QIcon icon2;
        icon2.addFile(QStringLiteral("icons/arrow-forward-outline-svgrepo-com.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionnext_page->setIcon(icon2);
        actionstop_page_loading = new QAction(FBrowserMainWindow);
        actionstop_page_loading->setObjectName(QStringLiteral("actionstop_page_loading"));
        QIcon icon3;
        icon3.addFile(QStringLiteral("icons/minus-circle-outline-svgrepo-com.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionstop_page_loading->setIcon(icon3);
        actionrefresh_current_page = new QAction(FBrowserMainWindow);
        actionrefresh_current_page->setObjectName(QStringLiteral("actionrefresh_current_page"));
        QIcon icon4;
        icon4.addFile(QStringLiteral("icons/refresh-outline-svgrepo-com.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionrefresh_current_page->setIcon(icon4);
        actionhome_page = new QAction(FBrowserMainWindow);
        actionhome_page->setObjectName(QStringLiteral("actionhome_page"));
        QIcon icon5;
        icon5.addFile(QStringLiteral("icons/globe-outline-svgrepo-com.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionhome_page->setIcon(icon5);
        actiongo_to_address = new QAction(FBrowserMainWindow);
        actiongo_to_address->setObjectName(QStringLiteral("actiongo_to_address"));
        QIcon icon6;
        icon6.addFile(QStringLiteral("icons/next-svgrepo-com.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actiongo_to_address->setIcon(icon6);
        centralwidget = new QWidget(FBrowserMainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        centralwidget->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy);
        centralwidget->setMaximumSize(QSize(16777215, 16777215));
        centralwidget->setAutoFillBackground(false);
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetNoConstraint);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy1);
        tabWidget->setMaximumSize(QSize(16777210, 16777210));
        tabWidget->setAutoFillBackground(false);
        tabWidget->setTabPosition(QTabWidget::North);
        tabWidget->setTabShape(QTabWidget::Triangular);
        tabWidget->setElideMode(Qt::ElideLeft);
        tabWidget->setDocumentMode(true);
        tabWidget->setTabsClosable(true);
        tabWidget->setMovable(true);
        tabWidget->setTabBarAutoHide(false);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tab->setEnabled(true);
        gridLayout_2 = new QGridLayout(tab);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setSizeConstraint(QLayout::SetNoConstraint);
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        webView = new QWebView(tab);
        webView->setObjectName(QStringLiteral("webView"));
        webView->setUrl(QUrl(QStringLiteral("http://www.google.com/#spf=1621609919283")));
        webView->setRenderHints(QPainter::HighQualityAntialiasing|QPainter::SmoothPixmapTransform|QPainter::TextAntialiasing);

        gridLayout_2->addWidget(webView, 0, 0, 1, 1);

        tabWidget->addTab(tab, QString());

        gridLayout->addWidget(tabWidget, 1, 0, 1, 1);

        FBrowserMainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(FBrowserMainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 984, 22));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuNaviagtion = new QMenu(menubar);
        menuNaviagtion->setObjectName(QStringLiteral("menuNaviagtion"));
        menu = new QMenu(menubar);
        menu->setObjectName(QStringLiteral("menu"));
        FBrowserMainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(FBrowserMainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        FBrowserMainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(FBrowserMainWindow);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        FBrowserMainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuNaviagtion->menuAction());
        menubar->addAction(menu->menuAction());

        menuNaviagtion->addAction(actionprevious_page);
        menuNaviagtion->addAction(actionnext_page);
        menuNaviagtion->addAction(actionstop_page_loading);
        menuNaviagtion->addAction(actionrefresh_current_page);

        toolBar->addAction(actionprevious_page);
        toolBar->addAction(actionnext_page);
        toolBar->addAction(actionstop_page_loading);
        toolBar->addAction(actionrefresh_current_page);
        toolBar->addAction(actionhome_page);

        retranslateUi(FBrowserMainWindow);

        tabWidget->setCurrentIndex(0);

        address_to_visit_LineEdit = new QLineEdit();
        toolBar->addWidget(address_to_visit_LineEdit);

        loading_status_ProgressBar = new QProgressBar(statusbar);

        toolBar->addAction(actiongo_to_address);

        action_close_current_tab = new QAction(FBrowserMainWindow);
        action_close_current_tab->setObjectName(QStringLiteral("Close current tab"));

        action_new_tab = new QAction(FBrowserMainWindow);
        action_close_current_tab->setObjectName(QStringLiteral("New Tab"));

        action_quit = new QAction(FBrowserMainWindow);
        action_quit->setObjectName(QStringLiteral("Quit Fbrowser"));

        menuFile->addAction(action_new_tab);
        menuFile->addAction(action_close_current_tab);
        menuFile->addAction(action_quit);

        action_close_current_tab->setText("Close current tab");
        action_new_tab->setText("New tab");
        action_quit->setText("Quit FBrowser");

        action_help = new QAction(FBrowserMainWindow);
        action_help->setObjectName(QStringLiteral("Help"));

        menu->addAction(action_help);
        action_help->setText("Help");

        QMetaObject::connectSlotsByName(FBrowserMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *FBrowserMainWindow)
    {
        FBrowserMainWindow->setWindowTitle(QApplication::translate("FBrowserMainWindow", "FBrowser", Q_NULLPTR));
        actionprevious_page->setText(QApplication::translate("FBrowserMainWindow", "Previous page", Q_NULLPTR));
        actionnext_page->setText(QApplication::translate("FBrowserMainWindow", "Next page", Q_NULLPTR));
        actionstop_page_loading->setText(QApplication::translate("FBrowserMainWindow", "Stop", Q_NULLPTR));
        actionrefresh_current_page->setText(QApplication::translate("FBrowserMainWindow", "Refresh", Q_NULLPTR));
        actionhome_page->setText(QApplication::translate("FBrowserMainWindow", "Home", Q_NULLPTR));
        actiongo_to_address->setText(QApplication::translate("FBrowserMainWindow", "Go", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("FBrowserMainWindow", "Home Page ", Q_NULLPTR));
        menuFile->setTitle(QApplication::translate("FBrowserMainWindow", "File", Q_NULLPTR));
        menuNaviagtion->setTitle(QApplication::translate("FBrowserMainWindow", "Navigation", Q_NULLPTR));
        menu->setTitle(QApplication::translate("FBrowserMainWindow", "?", Q_NULLPTR));
        toolBar->setWindowTitle(QApplication::translate("FBrowserMainWindow", "toolBar", Q_NULLPTR));

    } // retranslateUi


};

namespace Ui {
    class FBrowserMainWindow: public Ui_FBrowserMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FBROWSER_MAIN_WINDOW_H
