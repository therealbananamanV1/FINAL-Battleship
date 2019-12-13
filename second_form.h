#ifndef SECOND_FORM_H
#define SECOND_FORM_H

#include <string>
#include <iostream>
#include <QDialog>

namespace Ui {
class second_form;
}

class second_form : public QDialog
{
    Q_OBJECT
public:
    explicit second_form(QWidget *parent = nullptr);
    ~second_form();

    int x;
    int y;
    int d;

    bool get_valid();
    int get_letter_side();
    int get_number_side();
    int get_q_num();
    QString get_qLetters(int l);
    QString get_qNumbers(int n);
    int get_randDirection();
    int get_randNum();
    int get_shipGrid(int x, int y);
    int get_numOfTrys();
    int get_tryCount();

    void set_valid(bool v);
    void set_letter_side(int l);
    void set_number_side(int n);
    void set_q_num(int q);
    void set_ships();
    void set_shipGrid(int a, int b, bool c);
    void set_numOfTrys(int t);
    void set_tryCount(int tc);

    void set_player_input(QString raw);
    void is_ship_hit();    
    void set_diffculty(QString difficulty);

private slots:

    void on_command_line_returnPressed();

private:
    //verifies user input is valid
    bool valid;
    //represents game setup steps
    int q_num;
    int numOfTrys;
    int tryCount;
    //holds user input coordinates
    int letter_side;
    int number_side;
    //used for validating user input
    QString qLetters[10] = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j"};
    QString qNumbers[10] = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9"};

    bool ship1_set;
    bool ship2_set;
    bool ship3_set;
    bool ship4_set;
    bool ship5_set;

    bool shipGrid[10][10];
    int randNumX;
    int randNumY;

    int ship1[4];
    int ship2[6];
    int ship3[6];
    int ship4[8];
    int ship5[10];



    Ui::second_form *ui;
};


#endif // SECOND_FORM_H
