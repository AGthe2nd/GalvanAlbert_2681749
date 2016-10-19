/* 
 * File:   main.cpp
 * Author: Albert Galvan
 * Created on October 19, 2016 9:14 AM
 * Purpose:  Project that plays Blackjack
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    int playval, dealval, othval1, othval2, othval3, othval4, givcard, faccard,
            profit, playcot;
    char playaga;

    //Input or initialize values Here
    cin>>playcot;


    //Process/Calculations Here

    //If player value goes over 21, they bust
    if (playval<=21){
        //prompts user for input

    }else cout<<"Bust!\n"<<"Play again?"<<cin<<playaga;

    //Prompts user to play again
    if (playaga=='y'){

    }else cout<<"Goodbye, you have "<<profit<<"... Goodbye!\n";

    //Output Located Here

    //Exit
    return 0;
}