/*
CSC 134
M3LAB1 - Monty Hall
Rowan Delgado
2/19/2024
*/


// includes
#include <iostream>
#include <random>
#include <time.h>
using namespace std;



int main(){

    //initialize random seed
    srand (time(NULL));

    //make variables
    int door_chosen = 0;
    int door_car = 0;
    int door_left = 0;
    int _switch = 0;

    //determine which door car is behind
    door_car = rand() % 3 + 1;

    //ask which door they choose
    cout << "Welcome to the Monty Hall Hall";

    //get answer

    //open door unchosen revealing goat

    //if door 1 chosen
        //if door 2 not car
            //open door 2 revealing goat
        
        //else if door 3 not car
            //open revealing goat

    //repeat for door 2 and 3

    //ask if switch door

    //get answer

    //show contents of chosen door
    //if yes switch
        //if car in new door
            //show old door revealing goat
            //congradulate guest
            //show new door revealing car
        // if car in old door
            //show new door revealing goat
            //console guest
            //show old door revealing car
    
    //if no switch
        //if car in door
            //show other door revealing goar
            //congradulate guest
            //show door revealing car
        //if car not in door
            //show door revealing goat
            //console guest
            //show door revealing car

    



    return 0;
}
