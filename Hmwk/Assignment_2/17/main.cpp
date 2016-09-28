/* 
 * File:   main.cpp
 * Author: Albert Galvan
 * Created on September 28, 2016
 * Purpose:  Finds average of 5 test scores.
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
    
    float tesscr1, tesscr2, tesscr3, tesscr4, tesscr5, avgtscr;
    
    //Input or initialize values Here
    
    cout<<"The purpose of this program is to find the average of 5 test scores \n";
    cout<<"enter a test score and press enter 5 times to see the average amongst \n";
    cout<<"5 students. \n";
    
    cin>>tesscr1;
    cin>>tesscr2;
    cin>>tesscr3;
    cin>>tesscr4;
    cin>>tesscr5;
    
    //Process/Calculations Here
    
    avgtscr=(tesscr1+tesscr2+tesscr3+tesscr4+tesscr5)/5;
    
    int round=avgtscr*100+0.5f;         //Shifts by 2 *100 then rounds to 0.5
    avgtscr=round/10.0f;               //Int truncated then shift back 3 decimals 
    
    //Output Located Here
    
    cout<<"The average test score amongst 5 students is "<<avgtscr<<"%\n";
    cout<<"Thank you and goodbye!\n";

    //Exit
    return 0;
}

