/* 
 * File:   main.cpp
 * Author: Albert Galvan
 * Created on October ,2016 1:53 PM
 * Purpose:  Body Mass Index
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
    
    int BMI, weight, height;
    
    //Input or initialize values Here
    
    cin>>weight>>height;
    
    //Process/Calculations Here
    
    BMI=(weight*703/height^2);
    
    //Output Located Here
    
    cout<<BMI;

    //Exit
    return 0;
}

