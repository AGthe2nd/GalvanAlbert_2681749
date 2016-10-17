/* 
 * File:   main.cpp
 * Author: Albert Galvan
 * Created on October 17, 2016, 9:35 AM
 * Purpose:  Roman Numeral
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
    unsigned short arabic;//An integer from [1000-3000]
    unsigned char n1000s,n100s,n10s,n1s;
    
    //Input or initialize values Here
    
    do{
        cout<<"This program converts Arabic base 10 to Roman Numerals"<<endl;
        cout<<"Enter and integer from [1000-3000]"<<endl;
        cin>>arabic;
    }while(arabic<1000||arabic>3000);
    
    //Process/Calculations Here
    //Thousands first
    n1000s=arabic/1000;
    switch(n1000s){
        case 3: cout<<"M";
        case 2: cout<<"M";
        case 1: cout<<"M";
    }
    
    //100's next
    arabic%=1000;//Drop the 1000's
    n100s=arabic/100;
    switch(n100s){
        case 9: cout<<"CM";break;
        case 8: cout<<"DCCC";break;
        case 7: cout<<"DCC";break;
        case 6: cout<<"DC";break;
        case 5: cout<<"D";break;
        case 4: cout<<"CD";break;
        case 3: cout<<"C";
        case 2: cout<<"C";
        case 1: cout<<"C";
    }
    
    //10's next
    arabic%=100;//Drop the 100's
    n10s=arabic/10;
    switch(n10s){
        case 9: cout<<"XC";break;
        case 8: cout<<"LXXX";break;
        case 7: cout<<"LXX";break;
        case 6: cout<<"LX";break;
        case 5: cout<<"L";break;
        case 4: cout<<"XL";break;
        case 3: cout<<"X";
        case 2: cout<<"X";
        case 1: cout<<"X";
    }
    
    //1's finally
    arabic%=10;//Drop the 10's
    n1s=arabic;
    switch(n1s){
        case 9: cout<<"IX";break;
        case 8: cout<<"VIII";break;
        case 7: cout<<"VII";break;
        case 6: cout<<"VI";break;
        case 5: cout<<"V";break;
        case 4: cout<<"IV";break;
        case 3: cout<<"I";
        case 2: cout<<"I";
        case 1: cout<<"I";
    }
    
    //Output Located Here

    //Exit
    return 0;
}

