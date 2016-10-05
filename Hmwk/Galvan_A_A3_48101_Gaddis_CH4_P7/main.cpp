/* 
 * File:   main.cpp
 * Author: Albert Galvan
 * Created on October 5, 2016
 * Purpose:  Time Calculator
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
    
    int seconds, minutes, hours, days;
    
    //Input or initialize values Here
    
    cin>>seconds;
    
    //Process/Calculations Here
    
    minutes=(seconds/60);
    hours=(seconds/3600);
    days=(seconds/86400);
    
    //Output Located Here
    
    
    
    if (seconds<60)
        cout<<seconds<<" = seconds"<<endl;
    else if (minutes <60)
        cout<<seconds<<" seconds = "<<minutes<<" minutes"<<endl;
    else if (hours<1)
        cout<<seconds<<" seconds = "<<hours<<" hours"<<endl;
    else 
        cout<<seconds<<" seconds = "<<days<<" days"<<endl;
    
    //Exit
    return 0;
}

