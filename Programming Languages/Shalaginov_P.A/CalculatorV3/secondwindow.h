#ifndef SECONDWINDOW_H
#define SECONDWINDOW_H

#include <QDialog>

namespace Ui {
class SecondWindow;
}

class SecondWindow : public QDialog
{
    Q_OBJECT

public:
    explicit SecondWindow(QWidget *parent = 0);
    ~SecondWindow();

private:
    Ui::SecondWindow *ui;
private slots:
void digits_numbers();

void on_pushButton_dot_clicked();
void operations();
void on_pushButton_clear_clicked();
void on_pushButton_ravno_clicked();
void math_operations();
void on_pushButton_clicked();
};

#endif // SECONDWINDOW_H
