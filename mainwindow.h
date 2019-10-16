#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButtonRectangle_clicked();

    void on_pushButtonCircle_clicked();

    void on_pushButtonLine_clicked();

    void on_pushButtonTriangle_clicked();

    void on_pushButtonStar_clicked();

    void on_pushButtonUp_pressed();

    void on_pushButtonUp_released();

    void on_pushButtonRight_pressed();

    void on_pushButtonRight_released();

    void on_pushButtonDown_pressed();

    void on_pushButtonDown_released();

    void on_pushButtonLeft_pressed();

    void on_pushButtonLeft_released();

    void on_pushButtonLed_clicked();

    void on_pushButtonSound_clicked();

    void on_horizontalSliderSpeed_sliderMoved(int position);



private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
