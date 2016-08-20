/********************************************************************************
** Form generated from reading UI file 'sl.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SL_H
#define UI_SL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SL
{
public:
    QAction *actionNew_Window;
    QAction *actionSave_Page;
    QAction *actionPrint_preview;
    QAction *actionPrint;
    QAction *actionQuit;
    QAction *actionUndo;
    QAction *actionRedo;
    QAction *actionCut;
    QAction *actionCopy;
    QAction *actionPaset;
    QAction *actionFind;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QComboBox *comboBox;
    QToolButton *Bookmarks;
    QToolButton *Download_Progress;
    QToolButton *More;
    QToolButton *help;
    QFrame *line_2;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout_2;
    QSpacerItem *verticalSpacer_6;
    QSpacerItem *verticalSpacer;
    QLineEdit *lineEdit_2;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_4;
    QSpacerItem *verticalSpacer_3;
    QGraphicsView *Sun;
    QCommandLinkButton *commandLinkButton;
    QSpacerItem *verticalSpacer_2;
    QWidget *tab_2;
    QGridLayout *gridLayout_3;
    QGraphicsView *graphicsView_3;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer_6;
    QGraphicsView *graphicsView_4;
    QSpacerItem *verticalSpacer_4;
    QGraphicsView *graphicsView_5;
    QSpacerItem *verticalSpacer_5;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *verticalSpacer_7;
    QSpacerItem *verticalSpacer_8;
    QLineEdit *lineEdit;
    QToolButton *toolButton;
    QFrame *line;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuView;
    QMenu *menuHistory;
    QMenu *menuBookmarks;
    QMenu *menuTool;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *SL)
    {
        if (SL->objectName().isEmpty())
            SL->setObjectName(QStringLiteral("SL"));
        SL->resize(730, 523);
        SL->setMinimumSize(QSize(700, 500));
        SL->setTabShape(QTabWidget::Triangular);
        actionNew_Window = new QAction(SL);
        actionNew_Window->setObjectName(QStringLiteral("actionNew_Window"));
        actionSave_Page = new QAction(SL);
        actionSave_Page->setObjectName(QStringLiteral("actionSave_Page"));
        actionPrint_preview = new QAction(SL);
        actionPrint_preview->setObjectName(QStringLiteral("actionPrint_preview"));
        actionPrint = new QAction(SL);
        actionPrint->setObjectName(QStringLiteral("actionPrint"));
        actionQuit = new QAction(SL);
        actionQuit->setObjectName(QStringLiteral("actionQuit"));
        actionUndo = new QAction(SL);
        actionUndo->setObjectName(QStringLiteral("actionUndo"));
        actionRedo = new QAction(SL);
        actionRedo->setObjectName(QStringLiteral("actionRedo"));
        actionCut = new QAction(SL);
        actionCut->setObjectName(QStringLiteral("actionCut"));
        actionCopy = new QAction(SL);
        actionCopy->setObjectName(QStringLiteral("actionCopy"));
        actionPaset = new QAction(SL);
        actionPaset->setObjectName(QStringLiteral("actionPaset"));
        actionFind = new QAction(SL);
        actionFind->setObjectName(QStringLiteral("actionFind"));
        centralWidget = new QWidget(SL);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setMinimumSize(QSize(30, 0));
        pushButton->setMaximumSize(QSize(40, 16777215));
        QIcon icon;
        icon.addFile(QStringLiteral(":/SLPic/Back.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);

        gridLayout->addWidget(pushButton, 0, 0, 2, 1);

        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(30, 0));
        pushButton_2->setMaximumSize(QSize(40, 16777215));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/SLPic/next.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon1);

        gridLayout->addWidget(pushButton_2, 0, 1, 2, 1);

        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setMaximumSize(QSize(16777215, 27));
        QFont font;
        font.setFamily(QStringLiteral("URW Chancery L"));
        font.setPointSize(14);
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        pushButton_3->setFont(font);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/SLPic/Search.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon2);

        gridLayout->addWidget(pushButton_3, 0, 4, 2, 1);

        comboBox = new QComboBox(centralWidget);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setContextMenuPolicy(Qt::PreventContextMenu);
        comboBox->setAcceptDrops(false);
        comboBox->setEditable(true);

        gridLayout->addWidget(comboBox, 0, 5, 2, 1);

        Bookmarks = new QToolButton(centralWidget);
        Bookmarks->setObjectName(QStringLiteral("Bookmarks"));
        Bookmarks->setMinimumSize(QSize(25, 0));
        Bookmarks->setMaximumSize(QSize(45, 16777215));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/SLPic/Bookmark.png"), QSize(), QIcon::Normal, QIcon::Off);
        Bookmarks->setIcon(icon3);
        Bookmarks->setIconSize(QSize(16, 16));

        gridLayout->addWidget(Bookmarks, 1, 7, 1, 1);

        Download_Progress = new QToolButton(centralWidget);
        Download_Progress->setObjectName(QStringLiteral("Download_Progress"));
        Download_Progress->setMinimumSize(QSize(25, 0));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/SLPic/Download2.png"), QSize(), QIcon::Normal, QIcon::Off);
        Download_Progress->setIcon(icon4);

        gridLayout->addWidget(Download_Progress, 1, 8, 1, 1);

        More = new QToolButton(centralWidget);
        More->setObjectName(QStringLiteral("More"));

        gridLayout->addWidget(More, 1, 9, 1, 1);

        help = new QToolButton(centralWidget);
        help->setObjectName(QStringLiteral("help"));
        help->setMinimumSize(QSize(25, 0));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/SLPic/Help.png"), QSize(), QIcon::Normal, QIcon::Off);
        help->setIcon(icon5);

        gridLayout->addWidget(help, 1, 10, 1, 1);

        line_2 = new QFrame(centralWidget);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_2, 2, 0, 1, 11);

        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setTabPosition(QTabWidget::North);
        tabWidget->setTabShape(QTabWidget::Triangular);
        tabWidget->setTabsClosable(true);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        gridLayout_2 = new QGridLayout(tab);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_6, 11, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 12, 1, 1, 1);

        lineEdit_2 = new QLineEdit(tab);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setMinimumSize(QSize(0, 45));
        lineEdit_2->setMaximumSize(QSize(100000, 47));

        gridLayout_2->addWidget(lineEdit_2, 9, 1, 1, 2);

        horizontalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 9, 4, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 9, 0, 1, 1);

        pushButton_4 = new QPushButton(tab);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setMaximumSize(QSize(80, 35));
        pushButton_4->setFont(font);
        pushButton_4->setIcon(icon2);

        gridLayout_2->addWidget(pushButton_4, 9, 3, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_3, 0, 1, 1, 1);

        Sun = new QGraphicsView(tab);
        Sun->setObjectName(QStringLiteral("Sun"));
        Sun->setStyleSheet(QLatin1String("\n"
"\n"
"border-image: url(:/SLPic/sunset.png);"));

        gridLayout_2->addWidget(Sun, 1, 1, 1, 1);

        commandLinkButton = new QCommandLinkButton(tab);
        commandLinkButton->setObjectName(QStringLiteral("commandLinkButton"));
        commandLinkButton->setMaximumSize(QSize(120, 50));
        commandLinkButton->setStyleSheet(QStringLiteral("background-image: url(:/SLPic/sunset.png);"));
        commandLinkButton->setIconSize(QSize(15, 20));

        gridLayout_2->addWidget(commandLinkButton, 12, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 10, 1, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        gridLayout_3 = new QGridLayout(tab_2);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        graphicsView_3 = new QGraphicsView(tab_2);
        graphicsView_3->setObjectName(QStringLiteral("graphicsView_3"));

        gridLayout_3->addWidget(graphicsView_3, 2, 2, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_3, 2, 0, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_4, 2, 5, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_6, 2, 6, 1, 1);

        graphicsView_4 = new QGraphicsView(tab_2);
        graphicsView_4->setObjectName(QStringLiteral("graphicsView_4"));

        gridLayout_3->addWidget(graphicsView_4, 2, 3, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_4, 1, 2, 1, 1);

        graphicsView_5 = new QGraphicsView(tab_2);
        graphicsView_5->setObjectName(QStringLiteral("graphicsView_5"));

        gridLayout_3->addWidget(graphicsView_5, 2, 4, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_5, 4, 2, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_5, 2, 1, 1, 1);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_7, 0, 2, 1, 1);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_8, 3, 2, 1, 1);

        tabWidget->addTab(tab_2, QString());

        gridLayout->addWidget(tabWidget, 3, 0, 1, 11);

        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        gridLayout->addWidget(lineEdit, 0, 3, 2, 1);

        toolButton = new QToolButton(centralWidget);
        toolButton->setObjectName(QStringLiteral("toolButton"));
        toolButton->setMinimumSize(QSize(26, 25));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/SLPic/Refresh.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton->setIcon(icon6);
        toolButton->setIconSize(QSize(15, 16));

        gridLayout->addWidget(toolButton, 1, 2, 1, 1);

        line = new QFrame(centralWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 1, 6, 1, 2);

        SL->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(SL);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 730, 25));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName(QStringLiteral("menuEdit"));
        menuView = new QMenu(menuBar);
        menuView->setObjectName(QStringLiteral("menuView"));
        menuHistory = new QMenu(menuBar);
        menuHistory->setObjectName(QStringLiteral("menuHistory"));
        menuBookmarks = new QMenu(menuBar);
        menuBookmarks->setObjectName(QStringLiteral("menuBookmarks"));
        menuTool = new QMenu(menuBar);
        menuTool->setObjectName(QStringLiteral("menuTool"));
        SL->setMenuBar(menuBar);
        mainToolBar = new QToolBar(SL);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        SL->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(SL);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        SL->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menuBar->addAction(menuView->menuAction());
        menuBar->addAction(menuHistory->menuAction());
        menuBar->addAction(menuBookmarks->menuAction());
        menuBar->addAction(menuTool->menuAction());
        menuFile->addAction(actionNew_Window);
        menuFile->addAction(actionSave_Page);
        menuFile->addAction(actionPrint_preview);
        menuFile->addAction(actionPrint);
        menuFile->addAction(actionQuit);
        menuEdit->addAction(actionUndo);
        menuEdit->addAction(actionRedo);
        menuEdit->addAction(actionCut);
        menuEdit->addAction(actionCopy);
        menuEdit->addAction(actionPaset);
        menuEdit->addAction(actionFind);

        retranslateUi(SL);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(SL);
    } // setupUi

    void retranslateUi(QMainWindow *SL)
    {
        SL->setWindowTitle(QApplication::translate("SL", "SL", 0));
        actionNew_Window->setText(QApplication::translate("SL", "New Window", 0));
        actionNew_Window->setShortcut(QApplication::translate("SL", "Ctrl+W", 0));
        actionSave_Page->setText(QApplication::translate("SL", "Save Page", 0));
        actionSave_Page->setShortcut(QApplication::translate("SL", "Ctrl+S", 0));
        actionPrint_preview->setText(QApplication::translate("SL", "Print preview", 0));
        actionPrint->setText(QApplication::translate("SL", "Print", 0));
        actionPrint->setShortcut(QApplication::translate("SL", "Ctrl+P", 0));
        actionQuit->setText(QApplication::translate("SL", "Quit", 0));
        actionQuit->setShortcut(QApplication::translate("SL", "Ctrl+Q", 0));
        actionUndo->setText(QApplication::translate("SL", "Undo", 0));
        actionUndo->setShortcut(QApplication::translate("SL", "Ctrl+Z", 0));
        actionRedo->setText(QApplication::translate("SL", "Redo", 0));
        actionRedo->setShortcut(QApplication::translate("SL", "Ctrl+Shift+Z", 0));
        actionCut->setText(QApplication::translate("SL", "Cut", 0));
        actionCut->setShortcut(QApplication::translate("SL", "Ctrl+X", 0));
        actionCopy->setText(QApplication::translate("SL", "Copy", 0));
        actionCopy->setShortcut(QApplication::translate("SL", "Ctrl+C", 0));
        actionPaset->setText(QApplication::translate("SL", "Paset", 0));
        actionPaset->setShortcut(QApplication::translate("SL", "Ctrl+V", 0));
        actionFind->setText(QApplication::translate("SL", "Find", 0));
        actionFind->setShortcut(QApplication::translate("SL", "Ctrl+F", 0));
#ifndef QT_NO_TOOLTIP
        pushButton->setToolTip(QApplication::translate("SL", "Back", 0));
#endif // QT_NO_TOOLTIP
        pushButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButton_2->setToolTip(QApplication::translate("SL", "Foward", 0));
#endif // QT_NO_TOOLTIP
        pushButton_2->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButton_3->setToolTip(QApplication::translate("SL", "Search", 0));
#endif // QT_NO_TOOLTIP
        pushButton_3->setText(QApplication::translate("SL", "Search", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("SL", "Yahoo", 0)
         << QApplication::translate("SL", "Google", 0)
         << QApplication::translate("SL", "Wikimedia", 0)
         << QApplication::translate("SL", "Bing", 0)
         << QApplication::translate("SL", "Twitter", 0)
        );
#ifndef QT_NO_TOOLTIP
        comboBox->setToolTip(QApplication::translate("SL", "Other search engines", 0));
#endif // QT_NO_TOOLTIP
        comboBox->setCurrentText(QApplication::translate("SL", "Yahoo", 0));
#ifndef QT_NO_TOOLTIP
        Bookmarks->setToolTip(QApplication::translate("SL", "Bookmarks", 0));
#endif // QT_NO_TOOLTIP
        Bookmarks->setText(QString());
#ifndef QT_NO_TOOLTIP
        Download_Progress->setToolTip(QApplication::translate("SL", "Download Progress", 0));
#endif // QT_NO_TOOLTIP
        Download_Progress->setText(QString());
#ifndef QT_NO_TOOLTIP
        More->setToolTip(QApplication::translate("SL", "More", 0));
#endif // QT_NO_TOOLTIP
        More->setText(QApplication::translate("SL", "...", 0));
#ifndef QT_NO_TOOLTIP
        help->setToolTip(QApplication::translate("SL", "Help", 0));
#endif // QT_NO_TOOLTIP
        help->setText(QString());
#ifndef QT_NO_TOOLTIP
        tabWidget->setToolTip(QApplication::translate("SL", "Tab open", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        lineEdit_2->setToolTip(QApplication::translate("SL", "<html><head/><body><p><span style=\" font-style:italic;\">Skyladies search</span></p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        lineEdit_2->setPlaceholderText(QApplication::translate("SL", "Sunset Search", 0));
#ifndef QT_NO_TOOLTIP
        pushButton_4->setToolTip(QApplication::translate("SL", "Skyladies search", 0));
#endif // QT_NO_TOOLTIP
        pushButton_4->setText(QApplication::translate("SL", "Search", 0));
#ifndef QT_NO_TOOLTIP
        commandLinkButton->setToolTip(QApplication::translate("SL", "About Sunset", 0));
#endif // QT_NO_TOOLTIP
        commandLinkButton->setText(QApplication::translate("SL", "About Sunset", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("SL", "Tab 1                            ", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("SL", "Tab 2                             ", 0));
        lineEdit->setText(QApplication::translate("SL", "http://", 0));
#ifndef QT_NO_TOOLTIP
        toolButton->setToolTip(QApplication::translate("SL", "Refresh", 0));
#endif // QT_NO_TOOLTIP
        toolButton->setText(QString());
        menuFile->setTitle(QApplication::translate("SL", "File", 0));
        menuEdit->setTitle(QApplication::translate("SL", "Edit", 0));
        menuView->setTitle(QApplication::translate("SL", "View", 0));
        menuHistory->setTitle(QApplication::translate("SL", "History", 0));
        menuBookmarks->setTitle(QApplication::translate("SL", "Bookmarks", 0));
        menuTool->setTitle(QApplication::translate("SL", "Tool", 0));
#ifndef QT_NO_TOOLTIP
        mainToolBar->setToolTip(QApplication::translate("SL", "Skyladies", 0));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class SL: public Ui_SL {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SL_H
