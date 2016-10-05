/* 
 * File:   main.cpp
 * Author: Albert Galvan
 * Created on 10/05/16 9:54 AM
 * Purpose:  Sorting Problem
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
    
    float a,b,c,d;
    
    //User inputs a,b,c Here
    
    cin>>a;
    cin>>b;
    cin>>c;
    cin>>d;
    
    //Process/Calculations Here
    
    /*Sorting Problem 1 test
     * if (a>b)
     * cout<<b<<"       "<<a<<endl;
     * else
     * cout<<a<<"       "<<b<<endl;
     */
    
    //a,b,c in least to greatest using if else statement, displays output
    
    /*if    (a<b&&b<c) cout<<a<<"   "<<b<<"   "<<c<<endl;
    else if (b<a&&a<c) cout<<b<<"   "<<a<<"   "<<c<<endl;
    else if (a<c&&c<b) cout<<a<<"   "<<c<<"   "<<b<<endl;
    else if (b<c&&c<a) cout<<b<<"   "<<c<<"   "<<a<<endl;
    else if (c<a&&a<b) cout<<c<<"   "<<a<<"   "<<b<<endl;
    else if (c<a&&b<a) cout<<c<<"   "<<b<<"   "<<a<<endl;
    */
    
    //a,b,c,d in least to greatest using if else statement, displays output
    
        if      (d<a&&b&&c){
        cout<<d<<"   ";
        if      (a<b&&b<c) cout<<a<<"   "<<b<<"   "<<c<<"   ";
        else if (b<a&&a<c) cout<<b<<"   "<<a<<"   "<<c<<"   ";
        else if (a<c&&c<b) cout<<a<<"   "<<c<<"   "<<b<<"   ";
        else if (b<c&&c<a) cout<<b<<"   "<<c<<"   "<<a<<"   ";
        else if (c<a&&a<b) cout<<c<<"   "<<a<<"   "<<b<<"   ";
        else if (c<a&&b<a) cout<<c<<"   "<<b<<"   "<<a<<"   ";
    }
    
        if      (d>a&&b&&c){
        if      (a<b&&b<c) cout<<a<<"   "<<b<<"   "<<c<<"   ";
        else if (b<a&&a<c) cout<<b<<"   "<<a<<"   "<<c<<"   ";
        else if (a<c&&c<b) cout<<a<<"   "<<c<<"   "<<b<<"   ";
        else if (b<c&&c<a) cout<<b<<"   "<<c<<"   "<<a<<"   ";
        else if (c<a&&a<b) cout<<c<<"   "<<a<<"   "<<b<<"   ";
        else if (c<a&&b<a) cout<<c<<"   "<<b<<"   "<<a<<"   ";
        cout<<d;
    }
    
    //Output Located Here
    

    //Exit
    return 0;
}

