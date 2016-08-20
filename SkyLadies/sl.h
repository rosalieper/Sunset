#ifndef SL_H
#define SL_H

#include <QMainWindow>

namespace Ui {
class SL;
}

class SL : public QMainWindow
{
    Q_OBJECT

public:
    explicit SL(QWidget *parent = 0);
    ~SL();

private slots:

    void on_help_clicked();

    void on_tabWidget_tabCloseRequested(int index);

    void on_radioButton_clicked();

    void on_label_2_linkActivated(const QString &link);

    void on_commandLinkButton_clicked();

    void on_Bookmarks_clicked();

private:
    Ui::SL *ui;
};

#endif // SL_H
