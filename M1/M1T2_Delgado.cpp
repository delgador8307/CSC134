// CSC 134
// M1T2
// Rowan Delgado
// 1/22/2024

#include <iostream>
using namespace std;

int main() {
    // Introduce Yourself
    cout << "Hello World!" << endl;
    cout << "My Name is Rowan" << "\n";

    //ask a question
    cout << "What's Your Name?\n";

    // Get Their Responce
    char name[25];
    cin.get(name,25);

    //Respond
    cout << "Nice to meet you, " << name << endl << endl;

    return 0;
}