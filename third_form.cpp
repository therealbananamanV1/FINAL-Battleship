#include "third_form.h"
#include "ui_third_form.h"

third_form::third_form(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::third_form)
{
    ui->setupUi(this);
    ui->label3->setText("The game begins with the player selecting the");
    ui->label4->setText("difficulty that they want to play at. The enemy");
    ui->label5->setText("ships are generated in random placement and");
    ui->label6->setText("orientation. There are 5 ships total of varrying");
    ui->label7->setText("size. The player will be given a limited number of");
    ui->label8->setText("trys to guess and sink all five ships. As the player");
    ui->label9->setText("enters each coordinate, the grid will display an");
    ui->label10->setText("'H' for a hit and an 'M' for a miss. The game ends");
    ui->label11->setText("in a Loss if the numbers of trys is reached before");
    ui->label12->setText("all five ships are sunk. The game ends in a Win if");
    ui->label13->setText("the player destroys all five ships before the number");
    ui->label14->setText("of trys is reached. In the event of a win, the");
    ui->label15->setText("player has the option to add their score and name");
    ui->label16->setText("to the 'High Score' board. If the player wants to");
    ui->label17->setText("end the game maturely, they can enter 'Quit'.");
}

third_form::~third_form()
{
    delete ui;
}
