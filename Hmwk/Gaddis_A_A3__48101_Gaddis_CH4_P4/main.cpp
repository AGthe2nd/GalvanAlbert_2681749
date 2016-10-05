/* 
 * File:   main.cpp
 * Author: Albert Galvan
 * Created on October 5, 2016 2:05 PM
 * Purpose:  Areas of Rectangles
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
    
    float lenght1, lenght2, width1, width2, area1, area2;
    
    //Input or initialize values Here
    
    cin>>lenght1>>width1>>lenght2>>width2;
    
    //Process/Calculations Here
    
    area1=lenght1*width1;
    area2=lenght2*width2;
    
    //Output Located Here
    
    if      (area1<area2)
        cout<<"Rectangle 1 is smaller than Rectangle 2. The area of "<<endl
                <<"Rectangle 1 is "<<area1<<" and the area for Rectangle"
                <<" 2 is "<< area2<<endl;
    else if (area1>area2)
        cout<<"Rectangle 1 is larger than Rectangle 2. The area of "<<endl
                <<"Rectangle 1 is "<<area1<<" and the area for Rectangle"
                <<" 2 is "<< area2<<endl;
    else 
        cout<<"Rectangle 1 is equal to Rectangle 2. The area of "<<endl
                <<"Rectangle 1 is "<<area1<<" and the area for Rectangle"
                <<" 2 is "<< area2<<endl;

    //Exit
    return 0;
}

