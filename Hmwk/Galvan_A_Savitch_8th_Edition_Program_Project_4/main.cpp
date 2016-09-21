/* 
 * File:   main.cpp
 * Instructor: Dr. Mark E. Lehr
 * Student: Albert Galvan
 * Created on July 19, 2016, 9:07 AM
 * Purpose: Recreate and review Peas in Pod project from Savitch 8th Edition 
 * that was shown in class.
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
    //Declaration of variables.
    
int nmbropd, pperpod, ttl_pea;                                                  //Number of Pods, Pea per pod, Total peas.
    
    //Input or initialize values Here
    
cout << "Hello!!! \n";
cout << "Press return after entering a number. \n";                             //Instructions given to user.
cout << "Enter the number of pods.\n";                                          //Instructions given to user.
cin >> nmbropd;                                                                 //User inputs number of pods.

cout << "Enter the number of the peas in a pod. \n";                            //Instructions outputed to user.
cin >> pperpod;                                                                 //User defines peas per pod.

    //Process/Calculations Here
    
ttl_pea = nmbropd + pperpod;                                                    //Total peas = number of pods plus peas per pod.
        
    //Output Located Here
cout << "If you have ";                                                         //Message given to user
cout << nmbropd;                                                                //Outputs the number of pods to user
cout << " pea pods \n";                                                          
cout << "and ";
cout << pperpod;                                                                //Outputs peas per pod
cout << " peas in each pod, then\n";
cout << "you have ";
cout << ttl_pea;                                                                //Outputs total amount of peas
cout << " peas in all the pods. \n";
cout << "Goodbye!!! \n";

    //Exit
    return 0;
}



