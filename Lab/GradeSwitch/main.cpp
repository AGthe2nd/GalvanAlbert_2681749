/* 
   File:   main
   Author: Dr. Mark E. Lehr
   Created on September 26th, 2016, 9:45 AM
   Purpose:  Input a score, output a grade using if
 */

//System Libraries
#include <iostream>   //Input/Output objects
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    char grade;
    unsigned short score;
    
    //Input values
    cout<<"Input the score, receive your grade as output"<<endl;
    cin>>score;
    
    //Process values -> Map inputs to Outputs
    switch(score/10){
        case 11:
        case 10:
        case  9: grade='A'; break;
        case  8: grade='F'; break;
        case  6: grade='F'; break;
        default: grade='F';
    }
    //Display Output
    cout<<"Your Grade = "<<grade<<" with a score = "<<score<<endl;

    //Exit Program
    return 0;
}