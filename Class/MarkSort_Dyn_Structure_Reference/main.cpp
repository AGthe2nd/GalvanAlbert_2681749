/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on November 30th, 2016, 8:45 AM
 * Purpose:  Mark Sort dynamic memory allocation
 */

//System Libraries Here
#include <iostream>  //I/O
#include <cstdlib>   //Random
#include <ctime>     //Time
using namespace std;

//User Libraries Here
#include "Array.h"

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
Array *fillAry(Array &,int);
void prntAry(const Array *);
void markSrt(Array *);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare all Variables Here
    int utilize;
    
    //Input or initialize values Here
    do{
        cout<<"How much of the array to utilize?"<<endl;
        cout<<"Choose a number between 2 and 100"<<endl;
        cin>>utilize;
    }while(utilize<2||utilize>100);
    
    //Fill the array
    Array array;                    //Declare array
    fillAry(array,utilize);
    
    //Output Located Here
    prntAry(array);
    
    //Test out minPos
    markSrt(array);
    
    //Output Located Here
    prntAry(array);

    //Clean up memory and exit
    delete []array.data;        //delete internal array data
    return 0;
}

void markSrt(Array *a){
    for(int i=0;i<a.size-1;i++){
        for(int j=i+1;j<a.size;j++){
            if(a.data[i]>a.data[j]){
                a.data[i]=a.data[i]^a.data[j];
                a.data[j]=a.data[i]^a.data[j];
                a.data[i]=a.data[i]^a.data[j];
            }
        }
    }
}

void prntAry(const Array *a){
    //Output Located Here
    cout<<"The Array"<<endl;
    for(int i=0;i<a.size;i++){
        cout<<a.data[i]<<" ";
        if(i%10==9)cout<<endl;
    }
    cout<<endl;
}

Array *fillAry(Array &a,int n){
    //Declare the array pointer
    a.size=n;
    a.data=new int[a.size];
    //Fill the array
    for(int i=0;i<a.size;i++){
        a.data[i]=rand()%90+10;//Random 2 digit number
    }
    //Return the allocation
    return a;
}
