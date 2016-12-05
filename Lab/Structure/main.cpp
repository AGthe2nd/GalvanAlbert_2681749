/* 
 * File:   main.cpp
  * Author: Alberto Galvan
 * Created on December 5th, 2016, 9:40 AM
 * Purpose:  Structure Name
 */
 

//System Libraries Here
#include <iostream>  //I/O
#include <string>   //Random
#include <sstream>     //Time
using namespace std;

//User Libraries Here
#include "Name.h"

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    
    struct Name{
        string First;
        char MI;
        string Last;
    }name;
    
    //Input or initialize values Here
    
    name.First="Albert";
    name.MI='2';
    name.Last="Galvan";
    
    
    //Process/Calculations Here
    
    //Output Located Here
    cout<<"Hello! My name is "<<name.First;
    cout<<" "<<name.Last<<" "<<name.MI<<"nd"<<endl;

    //Exit
    return 0;
}
