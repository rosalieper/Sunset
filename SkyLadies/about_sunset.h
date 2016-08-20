#ifndef ABOUT_SUNSET_H
#define ABOUT_SUNSET_H

#include <QDialog>

namespace Ui {
class about_sunset;
}

class about_sunset : public QDialog
{
    Q_OBJECT

public:
    explicit about_sunset(QWidget *parent = 0);
    ~about_sunset();

private:
    Ui::about_sunset *ui;
};

#endif // ABOUT_SUNSET_H
