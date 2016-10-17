/* 
 * File:   main.cpp
 * Author: Albert Galvan
 * Created on October 17, 2016 8:30 AM
 * Purpose:  Menu with functions
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
void problem1();
void problem2();
void problem3();
void problem4();
void problem5();
void problem6();
void problem7();
void problem8();
void problem9();
void problem10();

//Program Execution Begins Here
int main(int argc, char** argv) {
   //Declare all Variables Here
    int menuitm;                //Choice from menu
    
    //Loop until user exits
    do{
    
    //Prompt for Problem for user input
    cout<<"1.  Type 1  for Problem A"<<endl;
    cout<<"2.  Type 2  for Problem B"<<endl;
    cout<<"3.  Type 3  for Problem C"<<endl;
    cout<<"4.  Type 4  for Problem D"<<endl;
    cout<<"5.  Type 5  for Problem E"<<endl;
    cout<<"6.  Type 6  for Problem F"<<endl;
    cout<<"7.  Type 7  for Problem G"<<endl;
    cout<<"8.  Type 8  for Problem H"<<endl;
    cout<<"9.  Type 9  for Problem I"<<endl;
    cout<<"10. Type 10 for Problem J"<<endl;
    cin>>menuitm;
    
    //Input values
    switch(menuitm){
        case 1:problem1();break;
        case 2:problem2();break;
        case 3:problem3();break;
        case 4:problem4();break;
        case 5:problem5();break;
        case 6:problem6();break;
        case 7:problem7();break;
        case 8:problem8();break;
        case 9:problem9();break;
        case 10:problem10();
            }//End Case
        }//End the Switch/Case
    while(menuitm>0&&menuitm<=10);//Ends the Do-While
    
    
    //Process/Calculations Here
    
    //Output Located Here

    //Exit
    return 0;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//******************************** Problem 1 ***********************************
//Purpose: Put functions purpose here!
//Inputs:   Inputs to the function here  -> Description, Range, Units
//Outputs:  Outputs to the function here -> Description, Range, Units
//******************************************************************************

void problem1(){
cout<<"Inside Problem A"<<endl;
//Input Values
//Process Values -> Map inputs to output
//Display Output
}

void problem2(){
cout<<"Inside Problem B"<<endl;
//Input Values
//Process Values -> Map inputs to output
//Display Output
}

void problem3(){
cout<<"Inside Problem C"<<endl;
//Input Values
//Process Values -> Map inputs to output
//Display Output
}

void problem4(){
cout<<"Inside Problem D"<<endl;
//Input Values
//Process Values -> Map inputs to output
//Display Output
}

void problem5(){
cout<<"Inside Problem E"<<endl;
//Input Values
//Process Values -> Map inputs to output
//Display Output
}

void problem6(){
cout<<"Inside Problem F"<<endl;
//Input Values
//Process Values -> Map inputs to output
//Display Output
}

void problem7(){
cout<<"Inside Problem G"<<endl;
//Input Values
//Process Values -> Map inputs to output
//Display Output
}

void problem8(){
cout<<"Inside Problem H"<<endl;
//Input Values
//Process Values -> Map inputs to output
//Display Output
}

void problem9(){
cout<<"Inside Problem I"<<endl;
//Input Values
//Process Values -> Map inputs to output
//Display Output
}

void problem10(){
cout<<"Inside Problem J"<<endl;
//Input Values
//Process Values -> Map inputs to output
//Display Output
}