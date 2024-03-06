#include <iostream>

using namespace std;

int main()
{
    //Make Variables
    int n = 1;
    int width = 0;
    int w_count = 0;
    int height = 0;
    int h_count = 0;

    //make while loop
    while (n <= 5){

        //say hello and square n
        cout << "Hello" << endl;
        cout << n << ":\t" << (n*n) << endl;

        //count up
        n+=1;

    }

    //ask for width and height of box
    cout << "Let's Draw a box" << endl << "How tall would you like your box?" << endl;
    cin >> height;
    cout << "How wide would you like your box?" << endl;
    cin >> width;

    //make height while loop
    while (h_count < height){

        //make width while loop
        while (w_count < width){

            //make star and space
            cout << "* ";

            //count up
            w_count += 1;

        }

        //make new line
        cout << endl;

        //count up
        h_count += 1;

        //reset width counter
        w_count = 0;

    }

    return 0;
}
