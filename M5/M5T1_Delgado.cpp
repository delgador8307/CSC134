/*
CSC 134
M5T1&2
Rowan Delgado
3/28/24
*/

#include <iostream>

using namespace std;

int squareIt(int);
void printAnswerLine(int);

int main()
{
    for (int num =1; num <=10;  num++){
        printAnswerLine(num);
//        cout << num << endl;

    }

    return 0;

}


void printAnswerLine(int val){
    //calculate square
    int square = squareIt(val);

    //print answer line
    cout << "| " << val << "\t| " << square << "\t|" << endl;

    //print sepperator
    cout << "-----------------" << endl;

    return;

}


int squareIt(int val){
    //calculate square
    int squared = val*val;

    //return square
    return squared;


}