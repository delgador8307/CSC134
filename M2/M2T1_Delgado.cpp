/*
CSC 134
M2T1 - Receipt
Rowan Delgado
1/29/2024
*/

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    //Set up Variables
    double meal_price = 0;
    double tax_percent = 0;
    double tax_amount = 0;
    double tip = 0;
    double subtotal = 0;
    double total = 0;
    cout << setprecision(2) << fixed;

    //Declare Variables
    meal_price = 5.99;
    tax_percent = .08;

    //calculate tax and subtotal
    tax_amount = (tax_percent*meal_price);
    subtotal = (meal_price+tax_amount);

    //TODO: Make it line up and fix decimals

    cout << "Taco\t\t:\t$" << meal_price << endl;
    cout << "Tax\t\t:\t$" << tax_amount << endl;
    cout << "Subtotal\t:\t$" << subtotal << endl << endl;
    cout << "Tip\t\t:\t$";
    cin >> tip;

    //Calculate total
    total = (subtotal+tip);

    //Print Total
    cout << "\n\nTotal\t\t:\t$" << total << endl << endl;


    return 0;
}

