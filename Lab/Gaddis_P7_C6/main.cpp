/* 
 * File:   main.cpp
 * Author: Albert Galvan
 * Created on October 26, 2016 8:33 AM
 * Purpose:  Gaddis 8th Edition, Chapter 6 Problem 7,  Temp Conversion
 */

//System Libraries Here
#include <iostream>
#include <iomanip>      //format
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables

//Function Prototypes Here
float tempCnv(float);
float tempCnv(float,float,float,float,float);


//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declaration of freezing and boiling points of water
    //for degree Fahrenheit and Celsius
    float f1=32.0f,f2=212.0f,c1=0.0f,c2=100.0f;
    int begF=0,endF=250;
    
    //Input or initialize values Here
    
    //Process/Calculations Here
    cout<<"Degree F    Degree C    Degree C"<<endl;
    cout<<fixed<<setprecision(2)<<showpoint;
    for(int degF=begF;degF<=endF;degF++){
        cout<<setw(6)<<degF
                <<setw(12)<<tempCnv(degF)
                <<setw(11)<<tempCnv(degF,f1,f2,c1,c2)<<endl;
    }
    
    
    //Output Located Here
    
    //Exit
    return 0;
}

//Temperature conversion from degree Fahrenheit to Celsius
//Input
//  f->Fahrenheit
//Output
//  c->Celsius
float tempCnv(float f){
    return (f-32.0f)*5/9;
}

//Temperature conversion from degree Fahrenheit to Celsius
//Input
//  f->Fahrenheit
//Output
//  c->Celsius
float tempCnv(float f, float f1, float f2, float c1, float c2){
    return c1+(f-f1)*(c2-c1)/(f2-f1);
}