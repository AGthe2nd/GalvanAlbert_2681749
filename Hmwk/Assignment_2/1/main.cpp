/* 
 * File:   main.cpp
 * Author: Albert Galvan
 * Created on September 28, 2016 2:11 PM
 * Purpose:  Program to calculate gas mileage
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
    //Floats for how many gallons make a full tank, how many miles traveled on a 
    //full tank and the answer for how far you can drive on a full tank.
    
    float gasfull, milespg, answer;
    
    //Input or initialize values Here
    
    cout<<"Hello!"<<endl;
    cout<<"Want to figure out how many miles you can drive on one gallon"<<endl;
    cout<<"of gas? Input how many miles you can travel on a full tank"<<endl;
    cout<<"and press enter!"<<endl;
    
    cin>>milespg;
    
    cout<<"Now tell how much gas your car can hold."<<endl;
    
    cin>>gasfull;
    
    //Process/Calculations Here
    
    answer=milespg/gasfull;
    
    int round=answer*100+0.5f;         //Shifts by 2 *100 then rounds to 0.5
    answer = round/100.0f;             //Int truncated then shift back 2 decimals 
    
    //Output Located Here
    
    cout<<"You can travel..."<<endl;
    
    cout<<answer<<" miles on one gallon of gas.";
    
    //Exit
    return 0;
}

