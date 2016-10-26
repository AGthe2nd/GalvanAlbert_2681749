/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on October 26th, 2016 9:51 AM
 * Purpose: 
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables

//Function Prototypes Here
bool isLpYr(int);   //Is it a Leap Year?
int getCVal(int);   //Get the century value
int getYVal(int);   //Get the Year value
int getMVal (int,int);//Get the month value
string dayofWk(int,int,int);//Return day of week

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    
    //Input or initialize values Here
    
    //Process/Calculations Here
    
    cout<<"Day of week = "<<dayofWk(9,5,2000)<<endl;
    
    //Output Located Here

    //Exit
    return 0;
}

string dayofWk(int m,int d, int y){
    int nDay=(d+getMVal(m,y)+getYVal(y)+getCVal(y))%7;
    switch(nDay){
        case 0:return "Sunday";
        case 1:return "Monday";
        case 2:return "Tuesday";
        case 3:return "Wednesday";
        case 4:return "Thursday";
        case 5:return "Friday";
        case 6:return "Saturday";
        default:return "Bad Day!!!";
    }
}

int getMVal(int m,int y){
    switch(m){
        case 1:return isLpYr(y)?6:0;
        case 2:return isLpYr(y)?2:3;
        case 3:return 3;
        case 4:return 6;
        case 5:return 1;
        case 6:return 4;
        case 7:return 6;
        case 8:return 2;
        case 9:return 5;
        case 10:return 0;
        case 11:return 3;
        default:return 5;
    }
}

int getYVal(int year){
    int dig2=year%100;
    return dig2+dig2/4;
}

int getCVal(int year){
    return 2*(3-year%4);
}

bool isLpYr(int year){
    return ((year%400==0)||((year%4==0)&&(year%100!=0)));
}