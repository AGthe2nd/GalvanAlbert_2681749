/* 
 * File:   main.cpp
 * Author: Albert Galvan
 * Created on 9/26/16 
 * Purpose:  Create a Truth Table
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
    //Declaration of Variables
    bool x,y;
    
    //Output of Heading in Truth Table
    cout<<"X Y !X !Y X&&Y X||Y X^Y (X^Y)^Y (X^Y)^X !X||!Y !(X&&Y) \n";
    
    //Input of values, 1st row
    x=true;
    y=true; 
    
    //Display first row of truth table
    cout<<(x?'T':'F')<<"  ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"  ";
    cout<<(x&&y?'T':'F')<<"  ";
    cout<<(x||y?'T':'F')<<"  ";
    cout<<(x^y?'T':'F')<<"  ";
    cout<<((x^y)^y?'T':'F')<<"  ";
    cout<<((x^y)^x?'T':'F')<<"  ";
    cout<<(!x||!y?'T':'F')<<"  ";
    cout<<(!(x&&y)?'T':'F')<<"  ";
    cout<<(!(x||y)?'T':'F')<<"  ";
    cout<<(!x&&!y?'T':'F')<<"  ";
    cout<<endl;
    
    //Input of values, 2nd row
    x=true;
    y=false;
    
    //Display second row of truth table
    cout<<(x?'T':'F')<<"  ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"  ";
    cout<<(x&&y?'T':'F')<<"  ";
    cout<<(x||y?'T':'F')<<"  ";
    cout<<(x^y?'T':'F')<<"  ";
    cout<<((x^y)^y?'T':'F')<<"  ";
    cout<<((x^y)^x?'T':'F')<<"  ";
    cout<<(!x||!y?'T':'F')<<"  ";
    cout<<(!(x&&y)?'T':'F')<<"  ";
    cout<<(!(x||y)?'T':'F')<<"  ";
    cout<<(!x&&!y?'T':'F')<<"  ";
    cout<<endl;
    
    //Input of values, 3rd row
    x=false;
    y=true;
    
    //Display third row of truth table
    cout<<(x?'T':'F')<<"  ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"  ";
    cout<<(x&&y?'T':'F')<<"  ";
    cout<<(x||y?'T':'F')<<"  ";
    cout<<(x^y?'T':'F')<<"  ";
    cout<<((x^y)^y?'T':'F')<<"  ";
    cout<<((x^y)^x?'T':'F')<<"  ";
    cout<<(!x||!y?'T':'F')<<"  ";
    cout<<(!(x&&y)?'T':'F')<<"  ";
    cout<<(!(x||y)?'T':'F')<<"  ";
    cout<<(!x&&!y?'T':'F')<<"  ";
    cout<<endl;
    
    //Input of values, 4th row
    x=false;
    y=false;
    
    //Display fourth row of truth table
    cout<<(x?'T':'F')<<"  ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"  ";
    cout<<(x&&y?'T':'F')<<"  ";
    cout<<(x||y?'T':'F')<<"  ";
    cout<<(x^y?'T':'F')<<"  ";
    cout<<((x^y)^y?'T':'F')<<"  ";
    cout<<((x^y)^x?'T':'F')<<"  ";
    cout<<(!x||!y?'T':'F')<<"  ";
    cout<<(!(x&&y)?'T':'F')<<"  ";
    cout<<(!(x||y)?'T':'F')<<"  ";
    cout<<(!x&&!y?'T':'F')<<"  ";
    cout<<endl;
   
    
    //Process/Calculations Here
    
    //Output Located Here
    

    //Exit
    return 0;
}

