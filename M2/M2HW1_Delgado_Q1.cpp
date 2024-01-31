/*
CSC 134
M2HW1 - Banking
Rowan Delgado
1/31/2024
*/

#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <string>
using namespace std;

// make int trans(transaction type, user name, account balance, account number)
    //check transaction type

    //if withdraw or deposit 
        //ask transaction ammount

        //calculate new balance

        //display account summary

        //ask if more transactions

        //call trans

        //return 0
    // if no transaction
        //say thanks for coming

        //return 0



int main() {
    //fix output for money

    //make Variables
    char name_ch[25];
    double balance = 0;
    int acc_num = 0;
    int trans_type = 0;
    int seed = 0;

    //ask user name and starting balance
    cout << "What is your name? ";
    cin.get(name_ch,25);
    cout << "What is your current account balance? $";
    cin >> balance;

    //TODO name to number

    //generate account number from name
    srand(12);
    acc_num = rand() % 899999 + 100000;

    //show account summary
    cout << endl << "--------------------" << endl;
    cout << name_ch << endl << acc_num << endl << "$" << balance;
    cout << endl << "--------------------" << endl;

    //ask if user would like to make a withdrawl or deposit
    cout << "Would You like to make a transaction? (input number to choose transaction)" << endl;
    cout << "0.\tNo Furhter Transactions" << endl;
    cout << "1.\tWithdrawl" << endl;
    cout << "2.\tDeposit" << endl << endl;
    cin >> trans_type;

    //call trans
    //int done = trans(trans_type,name_ch,balance,acc_num);









    return 0;
}