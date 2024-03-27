/*
CSC 134
M5Lab2
Rowan Delgado
3/27/24
*/

#include <iostream>
using namespace std;

// Declare (Write the prototypes for)
// the getLength,
// getWidth, getArea, and displayData
// functions here.
double getLength();
double getWidth();
double getArea(double Length, double Width);
void displayData(double Length, double Width, double Area);

int main()
{
	// This program calculates the area of a rectangle.
	// TODO: fix any syntax errors
	
   double length,    // The rectangle's length
          width,     // The rectangle's width
          area;      // The rectangle's area
          
   // Get the rectangle's length.
   length = getLength();
   
   // Get the rectangle's width.
   width = getWidth();
   
   // Get the rectangle's area.
   area = getArea(length,width);
   
   // Display the rectangle's data.
   displayData(length, width, area);
          
   return 0;
}

//***************************************************
// TODO: write the getLength, getWidth, getArea,    *
// and displayData functions below.                 *
//***************************************************

double getLength(){

    double Length = 0;

    cout << "How Long is your Rectangle?: ";
    cin >> Length;

    return Length;

}

double getWidth(){

    double Width = 0;

    cout << "How Wide is your Rectangle?: ";
    cin >> Width;

    return Width;

}

double getArea(double Length, double Width){

    double Area = 0;

    Area = Length * Width;

    return Area;

}

void displayData(double Length, double Width, double Area){

    cout << "A rectangle that's " << Length << " units long and " << Width << " units wide has an area of " << Area << " units sqared." << endl << endl;

}