/* 
 * File:   main.cpp
 * Author: Albert Galvan
 * Created on October 5, 2016 12:51 PM
 * Purpose:  Minimum/Maximum Problem from Gaddis
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
    
     //Declaration of variables
    
    float a,b,c;
    
    //User inputs a,b,c Here
    
    cin>>a;
    cin>>b;
    cin>>c;
    
    //Process/Calculations Here
    
 
    //a,b,c in least to greatest using if else statement, displays output
    
    if      (a<b&&b<c) cout<<a<<"   "<<b<<"   "<<c<<endl;
    else if (b<a&&a<c) cout<<b<<"   "<<a<<"   "<<c<<endl;
    else if (a<c&&c<b) cout<<a<<"   "<<c<<"   "<<b<<endl;
    else if (b<c&&c<a) cout<<b<<"   "<<c<<"   "<<a<<endl;
    else if (c<a&&a<b) cout<<c<<"   "<<a<<"   "<<b<<endl;
    else if (c<a&&b<a) cout<<c<<"   "<<b<<"   "<<a<<endl;
    
    
    //Output Located Here
    

    //Exit
    return 0;
}

