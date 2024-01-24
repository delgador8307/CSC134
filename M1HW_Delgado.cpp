/*
CSC 134
M1HW - Movie
Rowan Delgado
1/24/2024
*/

#include <iostream>
using namespace std;

int main() {
    //Talk about Movies

    //Set up Variables
    string movie_name = "Boondock Saints";
    int release_year = 1999;
    double box_office_gross = 30.4;
    double rental_sales = 50.3;
    int budget = 6;

    cout << "the movie " << movie_name << " came out in " << release_year << endl;
    cout << "the movie made a whopping " << box_office_gross << " thousand dollas at the box office\n";
    cout << "though the movie was a bit of a flop in theaters it did end up making a profit\n";
    cout << "It ending up bringing in " << rental_sales << " million dollars in rental sales from the late Blockbuster\n";
    cout << "This well exceeded the budget of " << budget << " million dollars and helped to cement it as a cult classic\n\n";


    return 0;



}