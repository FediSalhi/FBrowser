/************************************************************************************
 * Author               : Fedi Salhi <fadi.salhi@outlook.fr>
 * Creation Date        : 21/05/2021
 * Description          : FBrowser main window header file
 *
 * Revision No          : R001
 * Revision Date        :
 * Revision Description :
 *************************************************************************************/




#ifndef FBROWSER_MAIN_WINDOW_H
#define FBROWSER_MAIN_WINDOW_H

/****************** includes ******************/
#include <QMainWindow>
#include <QApplication>
#include "ui_fbrowser_main_window.h"
#include <QProgressBar>
#include <QWebHistory>
#include <QTextEdit>
#include <QTextBlock>
/**********************************************/

namespace Ui {
class FBrowserMainWindow;
}

class FBrowserMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit FBrowserMainWindow(QWidget *parent = 0);
    ~FBrowserMainWindow();

private:
    Ui::FBrowserMainWindow *ui;

public slots:
    void close_fbrwoser();
    void next_page();
    void previous_page();
    void go_to();
    void refresh();
    void stop_loading();
    void go_to_home_page();
    void quit_fbrowser();
    void open_new_tab();
    void close_tab(int index);
    void show_information();


};

#endif // FBROWSER_MAIN_WINDOW_H
