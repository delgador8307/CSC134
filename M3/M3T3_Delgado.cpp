/*
CSC 134
M3T3 - Gambling
Rowan Delgado
2/21/24
*/


// includes
#include <iostream>
#include <random>
#include <time.h>
using namespace std;

int toss_the_dice();

int main(){

    //initialize random number generator
    srand (time(NULL));

    //set up variables
    int roll = 0;
    bool lose = false;
    bool pointing = false;
    int point = 0;
    int wins = 0;
    int num_rolls = 0;

    while (false == lose){
        roll = toss_the_dice();
        cout << roll << endl;
        num_rolls += 1;
        if (false == pointing){
            if (7 == roll || 11 == roll){

                cout << "You Win, Roll Again" << endl;
                wins += 1;

            } else if (2 == roll || 3 == roll || 12 == roll){

                cout << "Too Bad" << endl;
                lose = true;

            } else {

                point = roll;
                pointing = true;
                cout << "Your number is " << point << endl;

            }
        } else if (true == pointing){
            if (roll == point){

                cout << "You Win, Roll Again" << endl;
                pointing = false;
                wins += 1;

            } else if (7 == roll){
                
                cout << "Too Bad" << endl;
                lose = true;
                pointing = false;

            } else {

                cout << "Roll again" << endl;
            }


        }
    }

    cout << "You rolled the dice "<< num_rolls << " time(s) and won " << wins << " time(s)\n\n";


    return 0;
}


int toss_the_dice(){
    int d6_1 = 0;
    int d6_2 = 0;
    int roll = 0;
    
    d6_1 = rand() % 6 + 1;
    d6_2 = rand() % 6 + 1;
    roll = d6_1 + d6_2;

    return roll;
}