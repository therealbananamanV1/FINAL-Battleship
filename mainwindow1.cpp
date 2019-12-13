#include "mainwindow1.h"
#include "ui_mainwindow1.h"
#include "second_form.h"
#include "third_form.h"
#include <QPushButton>
#include <QPixmap>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap image1("C:/Users/Gordon Crocket/Desktop/battleship/Battleship_Game/battleshipImage1.png");
    ui->imageLabel1->setPixmap(image1);
    QPixmap waves("C:/Users/Gordon Crocket/Desktop/battleship/Battleship_Game/waves1biglong2");
    ui->wavesLabel->setPixmap(waves);
    QPixmap blank("C:/Users/Gordon Crocket/Desktop/battleship/Battleship_Game/blank");
    ui->blankLabel->setPixmap(blank);
    QPixmap blankL1("C:/Users/Gordon Crocket/Desktop/battleship/Battleship_Game/blank2");
    ui->blank2Label1->setPixmap(blankL1);
    QPixmap blankL2("C:/Users/Gordon Crocket/Desktop/battleship/Battleship_Game/blank2");
    ui->blank2Label2->setPixmap(blankL2);
    QPixmap blankL3("C:/Users/Gordon Crocket/Desktop/battleship/Battleship_Game/blank2");
    ui->blank2Label3->setPixmap(blankL3);
}

MainWindow::~MainWindow()
{
    delete ui;
}

//button "start" is clicked
void MainWindow::on_button_start_clicked()
{
    second_form form2;
    form2.setModal(true);
    form2.exec();
}

void MainWindow::on_actionNew_Game_triggered()
{

    second_form form2;
    form2.setModal(true);
    form2.exec();
}

void MainWindow::on_button_instructions_clicked()
{
    third_form form3;
    form3.setModal(true);
    form3.exec();
}


void MainWindow::on_button_quit_clicked()
{
   close();
}

