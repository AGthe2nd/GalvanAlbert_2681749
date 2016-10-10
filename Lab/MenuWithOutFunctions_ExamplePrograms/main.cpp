/* 
 * File:   main.cpp
 * Author: Albert Galvan
 * Created on Ocober 10, 2016 9:44 AM
 * Purpose:  Menu without functions
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions
const unsigned char PERCENT=100; ///conversion to percentage
//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
   //Declare all Variables Here
    int menuitm;                //Choice from menu
    
    //Loop until user exits
    do{
    
    //Prompt for Problem for user input
    cout<<"1.  Type 1  for Problem A"<<endl;
    cout<<"2.  Type 2  for Problem B"<<endl;
    cout<<"3.  Type 3  for Problem C"<<endl;
    cout<<"4.  Type 4  for Problem D"<<endl;
    cout<<"5.  Type 5  for Problem E"<<endl;
    cout<<"6.  Type 6  for Problem F"<<endl;
    cout<<"7.  Type 7  for Problem G"<<endl;
    cout<<"8.  Type 8  for Problem H"<<endl;
    cout<<"9.  Type 9  for Problem I"<<endl;
    cout<<"10. Type 10 for Problem J"<<endl;
    cin>>menuitm;
    
    //Input values
    switch(menuitm){
        case 1:{
            cout<<"Inside Problem NASA Budget"<<endl;
              float NasBdgt=19.3e10f;             //Reference above
              float fedBdgt=3.99e12f;             //Reference above
              float pNasSpd;                      //Percantage of NASA spending
   
    
    //Input or initialize values Here
    
    pNasSpd=NasBdgt/fedBdgt*PERCENT;    //Calculation of budget
            
   
    //Process/Calculations Here
    pNasSpd=NasBdgt/fedBdgt*PERCENT;
            
     //Round to 2 Decimal Places
    int round=pNasSpd*100+0.5f;         //Shifts by 2 *100 then rounds to 0.5
    pNasSpd= round/100.0f;              //Int truncated then shift back 2 decimals 
    
    //Output Located Here
    cout<<endl<<"This program calcuates Nasa budget for 2016"<<endl;
    cout<<"The NASA Budget for 2016     = $"<<NasBdgt<<endl;
    cout<<"The Federal Budget for 2016  = $"<<fedBdgt<<endl;
    cout<<"The Percentage spent on NASA = " <<pNasSpd<<"%"<<endl;

            break;
        }
        case 2:{
            cout<<"Inside Problem B"<<endl;
            //Input Values
            //Process Values -> Map inputs to output
            //Display Output
            break;
        }
        case 3:{
            cout<<"Inside Problem C"<<endl;
            //Input Values
            //Process Values -> Map inputs to output
            //Display Output
            break;
        }
        case 4:{
            cout<<"Inside Problem D"<<endl;
            //Input Values
            //Process Values -> Map inputs to output
            //Display Output
            break;
        }
        case 5:{
            cout<<"Inside Problem E"<<endl;
            //Input Values
            //Process Values -> Map inputs to output
            //Display Output
            break;
        }
        case 6:{
            cout<<"Inside Problem F"<<endl;
            //Input Values
            //Process Values -> Map inputs to output
            //Display Output
            break;
        }
        case 7:{
            cout<<"Inside Problem G"<<endl;
            //Input Values
            //Process Values -> Map inputs to output
            //Display Output
            break;
        }
        case 8:{
            cout<<"Inside Problem H"<<endl;
            //Input Values
            //Process Values -> Map inputs to output
            //Display Output
            break;
        }
        case 9:{
            cout<<"Inside Problem I"<<endl;
            //Input Values
            //Process Values -> Map inputs to output
            //Display Output
            break;
        }
        case 10:{
            cout<<"Inside Problem J"<<endl;
            //Input Values
            //Process Values -> Map inputs to output
            //Display Output
            break;
            }//End Case
        }//End the Switch/Case
    }while(menuitm>0&&menuitm<=10);//Ends the Do-While
    
    
    //Process/Calculations Here
    
    //Output Located Here

    //Exit
    return 0;
}

