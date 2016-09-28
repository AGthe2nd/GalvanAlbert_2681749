/* 
 * File:   main.cpp
 * Author: Albert Galvan
 * Created on September 28, 2016, 12:53 PM
 * Purpose:  Calculate the average inches of rain of three months.
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
    
    /*
    * Declaration of variables
    *
    * Strings stand for:
    * 
    * month name 1
    * month name 2
    * month name 3
    * 
    */
    
    string monnam1, monnam2, monnam3;
    
    /*
    * floats stand for:
    * 
    * rain inches 1
    * rain inches 2
    * rain inches 3
    *
    */
    
    float raninc1, raninc2, raninc3, ranavg;  
    
    //Input or initialize values, this is a interaction with the user.
    
    cout<<"Hello!!! \n";
    cout<<"The purpose of this program is to calculate the average rainfall \n";
    cout<<"for three separate months. \n";
    cout<<"please input the name of a month and press enter. \n";
    cout<<" \n";
    cin>>monnam1;
    cout<<" \n";
    cout<<"Now input the amount of rainfall in inches that fell that month. \n";
    cout<<" \n";
    cin>>raninc1;
    cout<<" \n";
    cout<<"Great!!! Now input the name for a different month. \n";
    cout<<" \n";
    cin>>monnam2;
    cout<<" \n";
    cout<<"And how much rain in inches fell that month? \n";
    cout<<" \n";
    cin>>raninc2;
    cout<<" \n";
    cout<<"Now for the name of the final month. \n";
    cout<<" \n";
    cin>>monnam3;
    cout<<" \n";
    cout<<"Finally, input how much rain fell and I'll give you the average. \n";
    cout<<" \n";
    cin>>raninc3;
    cout<<" \n";
    
    //Process/Calculations Here
    
    ranavg=(raninc1+raninc2+raninc3)/3;//Adds up the rain inches and devides them by 3
    int round=ranavg*100+0.5f;         //Shifts by 2 *100 then rounds to 0.5
    ranavg= round/100.0f;              //Int truncated then shift back 2 decimals
    
    //Output Located Here
    
    cout<<"The average rainfall for "<<monnam1<<", "<<monnam2<<", \n";
    cout<<"and "<<monnam3<<" is "<<ranavg<<".\n";

    //Exit
    return 0;
}

