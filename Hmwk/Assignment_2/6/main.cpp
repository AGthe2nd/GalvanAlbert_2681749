/* 
 * File:   main.cpp
 * Author: Albert Galvan
 * Created on September 28, 2016 PM
 * Purpose:  Displays the amount of ingredients that are needed to create the 
 * amount of cookies the user inputs.
 * Sidenote: This program is useful for many reasons!
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
     * float definitions are as follow:
     * sugar cup
     * butter cup
     * flour cup
     * cookie amount
     */
    
    float sugrcup, buttcup, florcup, cookamt;
    
    //Input or initialize values Here
    
    cout<<"Hello! \n";
    cout<<"If you want to make cookies, tell me how many you want to make \n";
    cout<<"and I'll give you the cups of sugar, butter and flour you'll need.\n";
    cout<<"\n";
    cout<<"Tell me how many cookies you want to make!\n";
    cout<<"\n";
    
    cin>>cookamt;                        //User inputs cookie amount
    
    //Process/Calculations Here
    
    //The butter needed for 1 single cookie is 0.03125 according to the recipe
    
    buttcup=0.03125*cookamt;            //The amount of butter needed calculation
    
    int round1=buttcup*100+0.5f;        //Shifts by 2 *100 then rounds to 0.5
    buttcup= round1/100.0f;             //Int truncated then shift back 2 decimals 
    
    sugrcup=0.02084*cookamt;            //The amount of sugar needed calculation
    
    int round2=sugrcup*100+0.5f;        //Shifts by 2 *100 then rounds to 0.5
    sugrcup= round2/100.0f;             //Int truncated then shift back 2 decimals 
    
    florcup=0.05729*cookamt;            //The amount of flour needed calculation
    
    int round3=florcup*100+0.5f;        //Shifts by 2 *100 then rounds to 0.5
    florcup= round3/100.0f;             //Int truncated then shift back 2 decimals 
    
    //Output Located Here
    
    cout<<"\n";
    cout<<"If you want to make "<<cookamt<<" cookies, you will need... \n";
    cout<<buttcup<<" cups of butter.\n";
    cout<<sugrcup<<" cups of sugar and...\n";
    cout<<florcup<<" cups of flour. \n";
    cout<<"Thank you and goodbye. \n";
    
    //Exit
    return 0;
}

