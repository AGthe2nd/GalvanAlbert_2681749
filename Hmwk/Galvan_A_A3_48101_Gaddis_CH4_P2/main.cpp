/* 
 * File:   main.cpp
 * Author: Albert Galvan
 * Created on October 5, 2016 12:59 PM
 * Purpose:  Roman Numeral Converter
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
     
    string numeral;
    int number;
    
    //Input values
    cout<<"Input a number and it will be converted into a Roman Numeral"<<endl;
    cout<<"Only numbers 1-10 are accepted, please press enter when done"<<endl;
    cin>>number;
    
    //Process values -> Map inputs to Outputs
    switch(number){
        case  10:numeral="X";    break;
        case  9: numeral="IX";   break;
        case  8: numeral="VIII"; break;
        case  7: numeral="VII";  break;
        case  6: numeral="VI";   break;
        case  5: numeral="V";    break;
        case  4: numeral="IV";   break;
        case  3: numeral="III";  break;
        case  2: numeral="II";   break;
        case  1: numeral="I";    break;
        default: numeral="Invalid number, only input between 1 and 10.";
    }
    //Display Output
    if (numeral=="Invalid number, only input between 1 and 10.")
        cout<<numeral;
    else
    cout<<"The number "<<number<<" converts to "<<numeral<<" in Roman Numerals";
    

    //Exit
    return 0;
}

