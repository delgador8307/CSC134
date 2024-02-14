/*
CSC 134
M3T1 - Rectangles
Rowan Delgado
2/14/2024
*/


// includes
#include <iostream>
using namespace std;

int main(){

    //make variables
    double rec_1_length = 0;
    double rec_1_width = 0;
    double rec_1_area = 0;
    double rec_2_length = 0;
    double rec_2_width = 0;
    double rec_2_area = 0;

    //ask for rectangle one
    cout << "Whats the length and width of rectangle one?\nLength: ";
    cin >> rec_1_length;
    cout << "Width: ";
    cin >> rec_1_width;

    //ask for rectangle two
    cout << "Whats the length and width of rectangle two?\nLength: ";
    cin >> rec_2_length;
    cout << "Width: ";
    cin >> rec_2_width;

    //calculate areas
    rec_1_area = rec_1_length*rec_1_width;
    rec_2_area = rec_2_length*rec_2_width;

    //compare rectangles
    if (rec_1_area > rec_2_area){
        cout << "Rectangle one is larger than rectangle two with an area of : " << rec_1_area;
        cout << "\ncompared to rectangle two's area of : " << rec_2_area << endl << endl;
    }
    else if (rec_2_area > rec_1_area){
        cout << "Rectangle two is larger than rectangle one with an area of : " << rec_2_area;
        cout << "\ncompared to rectangle one's area of : " << rec_1_area << endl << endl;
    }
    else if (rec_1_area == rec_2_area){
        cout << "Both rectangles have the same area of : " << rec_1_area << endl << endl;
    }
    else{
        cout << "How did you manage to do this. Please stop." << endl << endl;
    }

    return 0;
}





