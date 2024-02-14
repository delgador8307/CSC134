/*
CSC 134
assignment
Rowan Delgado
date
*/


// includes
#include <iostream>
using namespace std;

int main(){

    //assign constants
    const int slices_per_person = 3;

    //make variable
    int num_pizzas = 0;
    int slices_per_pie = 0;
    int num_visitors = 0;
    int slices_ordered = 0;
    int slices_needed = 0;
    double remainder = 0;
    int remainder_pizzas = 0;
    int remainder_slices = 0;

    //ask how many pizzas ordered
    cout << "How many pizzas did you order? ";
    cin >> num_pizzas;

    //how many slices per pizza
    cout << "How mnay slices per pizza? ";
    cin >> slices_per_pie;

    //how mnay visitors
    cout << "How many people are coming to the party? ";
    cin >> num_visitors;

    //calculate how mnay slices needed
    slices_needed = num_visitors*slices_per_person;

    //calculate how many slices you ordered
    slices_ordered = num_pizzas * slices_per_pie;

    //is # of slices ordered enough for number of poeple

    //if no calculate how many more pizzas needed and remainder of slices after minimum pizzas achieved
    if (slices_needed > slices_ordered){
        remainder = ((slices_needed-slices_ordered)/slices_per_pie);
        remainder_pizzas = remainder +1;
        remainder_slices = (((num_pizzas+remainder_pizzas)*slices_per_pie)-slices_needed);
        cout << "That's not enough pizza, but if you order " << remainder_pizzas << " more pizzas you'll have enough pizza to feed everyone plus " << remainder_slices << " slices to spare.";
    }

    //if yes calculate leftover slices and if # of pizzas could be reduced
    if (slices_ordered > slices_needed){
        remainder = ((slices_ordered-slices_needed)/slices_per_pie);
        remainder_pizzas = remainder;
        if (remainder_pizzas > 0){
            remainder_slices = slices_ordered-slices_needed;
            cout << "This is enough pizza with " << remainder_slices << " slices remaining, ";
            remainder_slices = (remainder_slices-(remainder_pizzas*slices_per_pie));
            cout << "but you could order " << remainder_pizzas << " less pizza(s) and still have " << remainder_slices << " slices left over";
        }
        else {
            remainder_slices = slices_ordered-slices_needed;
            cout << "Cool this will leave you with just enough pizzas and only " << remainder_slices << " slices left over"; 

        }

    }

    return 0;
}
