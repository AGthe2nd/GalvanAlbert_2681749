/* 
 * File:   main.cpp
 * Author: Albert Galvan
 * Created on September 21, 2016. 
 * Purpose:  Calculate the sum and product of two inputed integers.
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
    
    int x, y, sum1, sum2, sum3;                                                 
    
    //Input or initialize values Here
    
    cout << "Hi!!! This program allows you to see" <<endl;                      //Greets the user and explains the purpose
    cout << "the sum and product of two integers!!!" <<endl;
    cout << "Input x integer then press enter." <<endl;
    
    cin >> x;                                                                   //Allows input of x value
    
    cout << "Great! Now input integer y." <<endl;
    
    cin >> y;                                                                   //Allows input of y value
    
    //Process/Calculations Here
    
    sum1 = x + y;
    sum2 = x * y;
    sum3 = x - y;
    
    //Output Located Here
    cout<<"The sum of "<<x<<" and "<<y<<" is "<<sum1<<endl;
    cout<<"The product of "<<x<<" and "<<y<<" is "<<sum2<<endl;
    cout<<"And just because, the difference of "<<x<<" and "<<y<<" is "<<sum3<<endl;
    
    
    //Exit
    return 0;
}

