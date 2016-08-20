/********************************************************************************
** Form generated from reading UI file 'about_sunset.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUT_SUNSET_H
#define UI_ABOUT_SUNSET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_about_sunset
{
public:
    QGridLayout *gridLayout;
    QPushButton *CloseAS;
    QSpacerItem *verticalSpacer;
    QTextEdit *textEdit;
    QSpacerItem *horizontalSpacer;

    void setupUi(QDialog *about_sunset)
    {
        if (about_sunset->objectName().isEmpty())
            about_sunset->setObjectName(QStringLiteral("about_sunset"));
        about_sunset->resize(1068, 410);
        gridLayout = new QGridLayout(about_sunset);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        CloseAS = new QPushButton(about_sunset);
        CloseAS->setObjectName(QStringLiteral("CloseAS"));

        gridLayout->addWidget(CloseAS, 2, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        gridLayout->addItem(verticalSpacer, 1, 1, 1, 1);

        textEdit = new QTextEdit(about_sunset);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setReadOnly(true);

        gridLayout->addWidget(textEdit, 0, 0, 2, 2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 0, 1, 1);


        retranslateUi(about_sunset);
        QObject::connect(CloseAS, SIGNAL(clicked()), about_sunset, SLOT(close()));

        QMetaObject::connectSlotsByName(about_sunset);
    } // setupUi

    void retranslateUi(QDialog *about_sunset)
    {
        about_sunset->setWindowTitle(QApplication::translate("about_sunset", "Dialog", 0));
        CloseAS->setText(QApplication::translate("about_sunset", "Close", 0));
        textEdit->setHtml(QApplication::translate("about_sunset", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:20pt; font-weight:600; color:#ff5500;\">SunSet</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><img src=\":/SLPic/sunset.png\" /></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600; color:#ff5500;\">Sunset  </span><span style=\" font-size:12pt; color:#000000;\">is Designed by a G"
                        "roupe of students in FET BUEA(Facultyof Engineering and Technology). It an assignement Proget and is still  under Work and improvement. The powerful </span><span style=\" font-size:12pt; color:#ff5500;\">Sunset</span><span style=\" font-size:12pt; color:#000000;\"> browser was built in qt. It is an Open source application and shall be pushed on githup for interrested programer to contribute to it. Any proporsal, critics, sujestions are welcome andcan be sent via;</span></p>\n"
"<p align=\"justify\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:12pt; color:#000000;\"><br /></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-style:italic; color:#000000;\">Name:	 Group Work 7.</span></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-r"
                        "ight:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-style:italic; color:#000000;\">Email: 	</span><span style=\" font-size:12pt; font-weight:600; font-style:italic; color:#000000;\"> sunset2016@gmail.com</span></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-style:italic; color:#000000;\">Phone: 	</span><span style=\" font-size:12pt; font-weight:600; font-style:italic; color:#000000;\"> 671482551</span></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-style:italic; color:#000000;\">Country: </span><span style=\" font-size:12pt; color:#000000;\">	 </span><span style=\" font-size:12pt; font-weight:600; font-style:italic; color:#000000;\">Cameroon</span></p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class about_sunset: public Ui_about_sunset {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUT_SUNSET_H
