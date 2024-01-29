//CSC 134
//M2T2 - Apple Sales - Modified
//Rowan Delgado
//1/29/2024

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    //Make Variables
    string name;
    int num_apples;
    double price_per_apple;

    //ask for store info
    cout << "What's your name? ";
    cin >> name;
    cout << "How many apples do you have for sale? ";
    cin >> num_apples;
    cout << "How much do you charge per apple? $";
    cin >> price_per_apple;

    //Calculate Total Price
    double total_price = (num_apples*price_per_apple);

    //Print Info
    cout << "\nWelcome to "<< name << "'s Apple Imporium \n";
    cout << "we have " << num_apples << " apples \n";
    cout << "At a cost of $" << price_per_apple << " per apple \n";
    cout << "$" << total_price << " for the whole lot \n \n";

    //ask how many apples they'd like to buy
    int apples_desired;
    double final_price;
    string answer;
    cout << "How many apples would you like?\n";
    cin >> apples_desired;

    //Calculate price of desired apples
    final_price = (apples_desired*price_per_apple);

    //Check if price is acceptable
    cout << setprecision(2) << fixed << "That comes out to $" << final_price << "\nIs that okay? YES/NO\n";

    //Get answer
    cin >> answer;

    // If answer if Yes get payment
    if (answer == "YES") {
        cout << "INSERT : TAKE PAYMENT TEXT HERE\n\n";
        return 0;
    } else if (answer == "NO") {

        //IF answer is no ask for different number of apples
        cout << "INSERT : ASK PRICE AGAIN TEXT HERE\n\n";
        return 0;
    } else {

        //If answer is anything else reprimand and quit
        cout << "WRONG ANSWER\n\n";
        return 0;
    }


    return 0;
}