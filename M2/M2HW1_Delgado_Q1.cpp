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
int trans(int trans_type,char name_ch[25],double balance,int acc_num){

    //check transaction type

    if (trans_type == 1){
        double trans_ammount = 0;
        //ask withdrawl ammount
        cout << "How much would you like to withdraw? $";
        cin >> trans_ammount;

        //check if withdrawl is legal
        if (trans_ammount<=balance){

            //calculate new balance
            balance = balance-trans_ammount;

            //display account summary
            cout << endl << "--------------------" << endl;
            cout << name_ch << endl << acc_num << endl << "$" << balance;
            cout << endl << "--------------------" << endl;

            //ask if more transactions
            cout << "Would you like to make another transaction(input number to choose transaction)" << endl;
            cout << "0.\tNo Furhter Transactions" << endl;
            cout << "1.\tWithdrawl" << endl;
            cout << "2.\tDeposit" << endl << endl;
            cin >> trans_type;

            //call trans
            int done = trans(trans_type,name_ch,balance,acc_num);

            return 0;
        }
        if (trans_ammount>balance){
            //ask if they would like to withdraw maximum possible ammount
            string answer;
            cout << "We cannot complete the transaction as requested.\nWould you like to withdraw the maximum ammount of $" << balance << "?" << "\nY/N : ";
            cin >> answer;

            //if yes witdraw
            if (answer == "Y"){
                //set balance to 0
                balance = 0;

                //show account summary
                cout << endl << "--------------------" << endl;
                cout << name_ch << endl << acc_num << endl << "$" << balance;
                cout << endl << "--------------------" << endl;

                //ask if more transactions
                cout << "Would you like to make another transaction(input number to choose transaction)" << endl;
                cout << "0.\tNo Furhter Transactions" << endl;
                cout << "1.\tWithdrawl" << endl;
                cout << "2.\tDeposit" << endl << endl;
                cin >> trans_type;

                //call trans
                int done = trans(trans_type,name_ch,balance,acc_num);

                return 0;


            }
            if (answer == "N"){
                //say thanks for coming
                cout << "Thanks for coming.";

                return 0;
            }

        }
    }
    if (trans_type == 2){
        double trans_ammount = 0;
        //ask withdrawl ammount
        cout << "How much would you like to deposit? $";
        cin >> trans_ammount;

        //calculate new balance
        balance = balance+trans_ammount;

        //display account summary
        cout << endl << "--------------------" << endl;
        cout << name_ch << endl << acc_num << endl << "$" << balance;
        cout << endl << "--------------------" << endl;

        //ask if more transactions
        cout << "Would you like to make another transaction(input number to choose transaction)" << endl;
        cout << "0.\tNo Furhter Transactions" << endl;
        cout << "1.\tWithdrawl" << endl;
        cout << "2.\tDeposit" << endl << endl;
        cin >> trans_type;

        //call trans
        int done = trans(trans_type,name_ch,balance,acc_num);

        return 0;
        
    }
    if (trans_type == 0){
       //say thanks for coming
        cout << "Thanks for coming.";
        return 0;
    }
}


int main() {
    //fix output for money
    cout << setprecision(2) << fixed;


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
    int done = trans(trans_type,name_ch,balance,acc_num);









    return 0;
}