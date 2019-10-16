#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->gridLayout->setAlignment(Qt::AlignCenter);
    // ui->textEditDisplay->setAlignment(Qt::AlignCenter);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButtonRectangle_clicked()
{
  // Start rectangle movement
}

void MainWindow::on_pushButtonCircle_clicked()
{
  // Start circle movement
}

void MainWindow::on_pushButtonLine_clicked()
{
  // start line movement
}

void MainWindow::on_pushButtonTriangle_clicked()
{
  // start triangle movement
}

void MainWindow::on_pushButtonStar_clicked()
{
  // start star movement
}


// -------------------------------------------------------------------
// Arrow Buttons

void MainWindow::on_pushButtonUp_pressed()
{
  // Set power of left and right motor to equal percentage
  // Extract power value from Slider value
  ui->textEditDisplay->setText("Driving forward (Speed = "+QString::number(ui->horizontalSliderSpeed->value())+")");
}

void MainWindow::on_pushButtonUp_released()
{
  // Set power of left and right motor to 0% to stop
  ui->textEditDisplay->setText("");
}

void MainWindow::on_pushButtonRight_pressed()
{
  // Rotate to the right
  // Set power of left and right motor to percentage
  // Extract power value from Slider value
  ui->textEditDisplay->setText("Driving right (Speed = "+QString::number(ui->horizontalSliderSpeed->value())+")");
}

void MainWindow::on_pushButtonRight_released()
{
  // Set power of left and right motor to 0% to stop
  ui->textEditDisplay->setText("");
}

void MainWindow::on_pushButtonDown_pressed()
{
  // Set power of left and right motor to negative percentage
  // Extract power value from Slider value
  ui->textEditDisplay->setText("Driving backwards (Speed = "+QString::number(ui->horizontalSliderSpeed->value())+")");
}

void MainWindow::on_pushButtonDown_released()
{
  // Set power of left and right motor to 0% to stop
  ui->textEditDisplay->setText("");
}

void MainWindow::on_pushButtonLeft_pressed()
{
  // Rotate to the left
  // Set power of left and right motor to percentage
  // Extract power value from Slider value
  ui->textEditDisplay->setText("Driving left (Speed = "+QString::number(ui->horizontalSliderSpeed->value())+")");
}

void MainWindow::on_pushButtonLeft_released()
{
  // Set power of left and right motor to 0% to stop
  ui->textEditDisplay->setText("");
}


// ---------------------------------------------------------------------------

void MainWindow::on_pushButtonLed_clicked()
{
  // Start Led Effect
}



void MainWindow::on_pushButtonSound_clicked()
{
  // Start Sound Effect
}

void MainWindow::on_horizontalSliderSpeed_sliderMoved(int position)
{
    ui->textEditDisplay->setText("Slider moved " + QString::number(position));
      /*
    ui->labelCurrSliderPos->setGeometry(ui->horizontalSliderSpeed->cursor().pos().x(),
                             ui->horizontalSliderSpeed->cursor().pos().y(),
                             20,
                             20);
                             */
}

