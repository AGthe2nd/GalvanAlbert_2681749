/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on September 12, 2016, 10:27 AM
 * Purpose:  Calculate the distance falling or dropped in freefall
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
const float GRAVITY=32.174; //Acceleration of ft/sec^2

//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float time;             //Time as input in seconds
    float disfell;          //Distance in Freefall
    int places;             //Places to round the answer
    
    //Input or initialize values Here
    cout<<"This problem turns distance dropped in freefall"<<endl;
    cout<<"Input the time in freefall, units of seconds"<<endl;
    cin>>time;
    cout<<"How many decimal places to round to the result"<<endl;
    cin>>places;
    
    //Process/Calculations Here
    disfell=GRAVITY*time/2;
    int round=disfell*10+0.5;
    disfell=round/100.0f;
    
    //Output Located Here
    cout<<"Gravity = "<<GRAVITY<<" ft/sec^2"<<endl;
    cout<<"Time fallen "<<time<<" seconds"<<endl;
    cout<<"Distance traveled "<<disfell<<"ft"<<endl;

    //Exit
    return 0;
}

