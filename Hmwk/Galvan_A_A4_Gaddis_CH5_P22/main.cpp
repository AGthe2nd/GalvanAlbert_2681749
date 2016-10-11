/* 
 * File:   main.cpp
 * Author: Albert Galvan
 * Created on October 11, 2016 3:34 PM
 * Purpose:  Square Display
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
    int inpnum;
    char xchar;

    //Prompt user for number input
    cout<<"Type a number between 1-15 then a character and press enter."<<endl;
    cin>>inpnum>>xchar;cout<<endl;
    
    //Input values
    switch(inpnum){
        
        case 1:{cout<<xchar<<endl;
                break;
        }
        case 2:{cout<<xchar<<xchar<<endl;
                cout<<xchar<<xchar<<endl;
                break;
        }
        case 3:{cout<<xchar<<xchar<<xchar<<endl;
                cout<<xchar<<xchar<<xchar<<endl;
                cout<<xchar<<xchar<<xchar<<endl;
                break;
        }
        case 4:{cout<<xchar<<xchar<<xchar<<xchar<<endl;
                cout<<xchar<<xchar<<xchar<<xchar<<endl;
                cout<<xchar<<xchar<<xchar<<xchar<<endl;
                cout<<xchar<<xchar<<xchar<<xchar<<endl;
                break;
        }
        case 5:{cout<<xchar<<xchar<<xchar<<xchar<<xchar<<endl;
                cout<<xchar<<xchar<<xchar<<xchar<<xchar<<endl;
                cout<<xchar<<xchar<<xchar<<xchar<<xchar<<endl;
                cout<<xchar<<xchar<<xchar<<xchar<<xchar<<endl;
                cout<<xchar<<xchar<<xchar<<xchar<<xchar<<endl;
                break;
        }
    }
    
    //Process/Calculations Here
    
    //Output Located Here
    
    //Exit
    return 0;
}

