/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Student: Albert Galvan
 * Created on September 2016
 * Purpose:  Recreate and study "The Big C"
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
    
    char xvalue;                                                                //Letter the user inputs
    
    //Input or initialize values Here
    cout << "Hello!!! \n";                                                      //Hi! Greets user. 
    cout << "Input any character then press enter! \n";                         //Gives user instructions
    cout << " " <<endl;                                                         //Separates lines, dead space to make things look neater.
    
    cin >> xvalue;                                                              //Allows user to input letter
    
    //Process/Calculations Here
    
    //Output Located Here
    cout<<""<<endl;                                                             //When the user inputs, this separates the C from the inputed character like earlier.
    cout<<" "<<" "<< xvalue<< xvalue<< xvalue<<endl;                            //Line of "The Big C!" The " " is empty space
    cout<<" "<< xvalue<<" "<<" "<< xvalue<<endl;                                //Line of "The Big C!" The xvalue is the character the user inputed
    cout<< xvalue<<" "<<" "<<" "<<" "<<endl;                                    //Line of "The Big C!" This allows the user to see the letter or number
    cout<< xvalue<<" "<<" "<<" "<<" "<<endl;                                    //they inputed to become a giant c!
    cout<< xvalue<<" "<<" "<<" "<<" "<<endl;                                    //Line of "The Big C!" You know what we don't use here?
    cout<< xvalue<<" "<<" "<<" "<<" "<<endl;                                    //Line of "The Big C!" Doubles!!!
    cout<< xvalue<<" "<<" "<<" "<<" "<<endl;                                    //Line of "The Big C!" Doubles are overkill and autos are useless to someone
    cout<<" "<< xvalue<<" "<<" "<< xvalue<<endl;                                //trying to learn.
    cout<<" "<<" "<< xvalue<< xvalue<< xvalue<<endl;                            //Line of "The Big C!" 
    
    //Exit
    return 0;
}

