/************************************************************************************
 * Author               : Fedi Salhi <fadi.salhi@outlook.fr>
 * Creation Date        : 21/05/2021
 * Description          : Application main file
 *
 * Revision No          : R001
 * Revision Date        :
 * Revision Description :
 *************************************************************************************/




/****************** includes ******************/
#include "fbrowser_main_window.h"
/**********************************************/


int main(int argc, char* argv[])
{
    QApplication fbrowser_app(argc, argv);
    FBrowserMainWindow fbrowser_main_window;
    fbrowser_main_window.show();

    return fbrowser_app.exec();

}
