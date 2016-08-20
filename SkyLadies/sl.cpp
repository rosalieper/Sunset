#include "sl.h"
#include "ui_sl.h"
#include "about_sunset.h"
#include <QMessageBox>
#include <QtCore>
#include <QtGui>
#include <QtWebKitWidgets/QWebView>


SL::SL(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SL)
{
    ui->setupUi(this);
}

SL::~SL()
{
    delete ui;
}

void SL::on_help_clicked()
{
     QMessageBox::information(this, "Help", "Sunset is a web browser, You can check the more about it on the <u><i>About <b>Sunset</b></i></u> radiobutton or check on the web page" /*<a href="http://www.SunsetFAQ.net"> www.SunsetFAQ.net </a> "*/);
}

void SL::on_tabWidget_tabCloseRequested(int index)
{
    QMessageBox::StandardButton reply;

      if(index >= 1)
        ui->tabWidget->removeTab(index);
      else if((index == 0) & ui->tabWidget->count()==1)
                 close();
      else{
          reply = QMessageBox::question(this, "Confirm close", "You are about to close multiple tabs, Are you sure you want to continue??", QMessageBox::Yes | QMessageBox::No);
          if(reply == QMessageBox::Yes)
               close();
      }
}

void SL::on_radioButton_clicked()
{
    QMessageBox::information(this, "About Sunset", "TEST MESSAGEyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy");
}


void SL::on_commandLinkButton_clicked()
{
    about_sunset *abt_snset = new about_sunset(this);
    abt_snset->setWindowTitle("About Sunset");
    abt_snset->show();
}

void SL::on_Bookmarks_clicked()
{
     QMessageBox::information(this, "Bookmarks", "Sorry no bookmarks available for now\n bookmark folder empty." );
}
