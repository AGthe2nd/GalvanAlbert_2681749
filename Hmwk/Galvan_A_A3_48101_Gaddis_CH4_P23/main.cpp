/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on July 19, 2016, 9:07 AM
 * Purpose:  Hello World Template
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
    
    string choice;
    int choinp;
    float pi, circrad, circare, rectlen, rectwid, triawid, triabas, triahei,
            triarea, rectare;
    
    //Input or initialize values Here
    
    cout<<"Hello, this program is a geometry calculator. What would you like to calculate?"<<endl;
    cout<<"1. The area of a circle"<<endl;
    cout<<"2. The area of a rectangle"<<endl;
    cout<<"3. The area of a triangle"<<endl;
    cout<<"4. Quit"<<endl;
    cout<<"Input a number then press enter."<<endl;
    
    pi=3.14159;
    
    cin>>choinp;
    
    //Process/Calculations Here
    
    switch(choinp){
        case 4: choice ="Ok then, goodbye!"; break;
        case 3: choice ="Area of Traingle"; 
        break;
        case 2: choice ="Area of a rectangle"; break;
        case 1: choice ="Area of a circle"; break;
        default: choice ="Invalid choice";
    }
    
    
    cout<<choice<<endl;
    
        if (choice = "Area of a Traingle")
            cin>>triabas>>triahei>>endl;
            triarea=(triabas*triahei*.5);
            cout<<triarea<<endl;
        
        
        
        
    //Exit
    return 0;
}

