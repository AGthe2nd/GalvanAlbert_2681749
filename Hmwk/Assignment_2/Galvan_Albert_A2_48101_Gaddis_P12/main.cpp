/* 
 * File:   main.cpp
 * Author: Albert Galvan
 * Created on 9/26/16 3:30 PM
 * Purpose:  Convert Fahrenheit to Celsius
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
    
    float fartemp, celtemp;                                                     //Fahrenheit temperature and Celcius temperature
    
    //User inputs celsius temperature
    
    cout<<"Hello. My purpose is to convert celsius to fahrenheit."<<endl;
    cout<<"Please input a celsius temperature."<<endl;
    cin>>celtemp;
    
    //Process/Calculations Here
    
    fartemp=(9/5)*celtemp+32;
    
    //Output Located Here
    
    cout<<celtemp<<" is equal to "<<endl;
    cout<<fartemp<<" in fahrenhiet.";

    //Exit
    return 0;
}

