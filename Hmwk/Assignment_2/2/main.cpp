/* 
 * File:   main.cpp
 * Author: Albert Galvan
 * Created on September 28, 2016 2:51 PM
 * Purpose:  Find revenue from Stadium Seating 
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
    
    /*
     * Integers are as follow:
     * class a seats sold
     * class b seats sold
     * class c seats sold
     * total revenue
     * a seat revenue
     * b seat revenue
     * c seat revenue 
     */
    
    int clsaset, clsbset, clscset, revenue, arev, brev, crev;
    
    //Input or initialize values Here
    
    cout<<"There are three seating categories at a staduim, class A cost $15\n";
    cout<<"per seat. Class B cost $12 per seat and class C cost $9 per seat.\n";
    cout<<"Input how many seats were sold for each class and I'll calculate \n";
    cout<<"how much revenue was made in total! Press enter after each input.\n";
    cout<<"\n";
    cout<<"How many class A seats were sold?\n";
    cout<<"\n";
    cin>>clsaset;
    cout<<"How many class B seats were sold?\n";
    cout<<"\n";
    cin>>clsbset;
    cout<<"How many class C seats were sold?\n";
    cout<<"\n";
    cin>>clscset;
    cout<<"\n";
    //Process/Calculations Here
    
    //seats sold times cost of class
    
    arev=clsaset*15;
    brev=clsbset*12;
    crev=clsbset*9;
    
    revenue=arev+brev+crev;
    
    int round=revenue*100+0.5f;         //Shifts by 2 *100 then rounds to 0.5
    revenue=round/100.0f;               //Int truncated then shift back 2 decimals 
    
    
    //Output Located Here
    
    cout<<"$"<<revenue<<" was made in total revenue.\n";

    //Exit
    return 0;
}

