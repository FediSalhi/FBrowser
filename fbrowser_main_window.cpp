/************************************************************************************
 * Author               : Fedi Salhi <fadi.salhi@outlook.fr>
 * Creation Date        : 21/05/2021
 * Description          : FBrowser main window implementation file
 *
 * Revision No          : R001
 * Revision Date        :
 * Revision Description :
 *************************************************************************************/





/****************** includes ******************/
#include "fbrowser_main_window.h"
/**********************************************/

FBrowserMainWindow::FBrowserMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::FBrowserMainWindow)
{

    ui->setupUi(this);


    QObject::connect(ui->webView, SIGNAL(loadProgress(int)), ui->loading_status_ProgressBar, SLOT(setValue(int)));
    QObject::connect(ui->actiongo_to_address, SIGNAL(triggered(bool)), this, SLOT(go_to()));
    QObject::connect(ui->actionhome_page, SIGNAL(triggered(bool)), this, SLOT(go_to_home_page()));
    QObject::connect(ui->actionnext_page, SIGNAL(triggered(bool)), this, SLOT(next_page()));
    QObject::connect(ui->actionprevious_page, SIGNAL(triggered(bool)), this, SLOT(previous_page()));
    QObject::connect(ui->actionrefresh_current_page, SIGNAL(triggered(bool)), this, SLOT(refresh()));
    QObject::connect(ui->actionstop_page_loading, SIGNAL(triggered(bool)), this, SLOT(stop_loading()));
    QObject::connect(ui->action_quit, SIGNAL(triggered(bool)), this, SLOT(quit_fbrowser()));
    QObject::connect(ui->action_new_tab, SIGNAL(triggered(bool)), this, SLOT(open_new_tab()));
    QObject::connect(ui->tabWidget, SIGNAL(tabCloseRequested(int)), this, SLOT(close_tab(int)));
    QObject::connect(ui->action_help, SIGNAL(triggered(bool)), this, SLOT(show_information()));



}

FBrowserMainWindow::~FBrowserMainWindow()
{
    delete ui;
}

void FBrowserMainWindow::close_fbrwoser()
{
    qApp->quit();
}

void FBrowserMainWindow::go_to()
{
    ui->webView->load(QUrl(ui->address_to_visit_LineEdit->text()));
}

void FBrowserMainWindow::previous_page()
{
    ui->webView->load(ui->webView->history()->backItem().url());
    ui->webView->history()->back();
}

void FBrowserMainWindow::next_page()
{
    ui->webView->load(ui->webView->history()->forwardItem().url());
    ui->webView->history()->forward();
}

void FBrowserMainWindow::refresh()
{
    ui->webView->triggerPageAction(QWebPage::Reload);
}

void FBrowserMainWindow::stop_loading()
{
    ui->webView->triggerPageAction(QWebPage::Stop);
}

void FBrowserMainWindow::go_to_home_page()
{
    ui->webView->load(QUrl("https://www.google.com"));
}

void FBrowserMainWindow::quit_fbrowser()
{
    qApp->quit();
}

void FBrowserMainWindow::open_new_tab()
{
    QWidget* tab = new QWidget();
    tab->setObjectName(QStringLiteral("new_tab"));
    tab->setEnabled(true);
    QGridLayout* gridLayout_new = new QGridLayout(tab);
    gridLayout_new->setSpacing(0);
    gridLayout_new->setObjectName(QStringLiteral("gridLayout_new"));
    gridLayout_new->setSizeConstraint(QLayout::SetNoConstraint);
    gridLayout_new->setContentsMargins(0, 0, 0, 0);
    QWebView* webView = new QWebView(tab);
    webView->setObjectName(QStringLiteral("webView"));
    webView->setUrl(QUrl(QStringLiteral("http://www.google.com/#spf=1621609919283")));
    webView->setRenderHints(QPainter::HighQualityAntialiasing|QPainter::SmoothPixmapTransform|QPainter::TextAntialiasing);

    gridLayout_new->addWidget(webView, 0, 0, 1, 1);

    ui->tabWidget->addTab(tab, QString());
    ui->tabWidget->setCurrentIndex(ui->tabWidget->indexOf(tab));
}

void FBrowserMainWindow::close_tab(int index)
{
    ui->tabWidget->removeTab(index);
}

void FBrowserMainWindow::show_information()
{
    QWidget* info_window = new QWidget();
    QHBoxLayout* layout = new QHBoxLayout();
    QString info_message = QString
                          ("Author             :   Fedi Salhi <fadi.salhi@outlook.fr>\n");
    info_message.push_back("Version            :   v0.0.1\n");
    info_message.push_back("Release date :   22/05/2021 \n");
    info_message.push_back("Toolchain        :   QMake version 3.1 Using Qt version 5.9.5 \n\n");
    info_message.push_back("NB: This is a two-day C++ project built for learning purposes. Do not use it for your daily internet browsing since it lacks security features.\n");
    QTextEdit* text_block = new QTextEdit();
    text_block->setReadOnly(true);
    text_block->append(info_message);
    layout->addWidget(text_block);
    info_window->setLayout(layout);
    info_window->setFixedSize(500, 200);
    info_window->show();
}

