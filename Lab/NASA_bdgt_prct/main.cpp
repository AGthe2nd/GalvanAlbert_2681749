/* 
 * File:   main.cpp
 * Student: Albert Galvan
 * Instructor: Dr. Mark E. Lehr
 * Created on September 12, 2016, 9:37 AM
 * Purpose:  Calculate percent of budget NASA has.
 * Reference of NASA budget: https://www.nasa.gov/sites/default/files/files/Agency_Fact_Sheet_FY_2016.pdf
 * Reference for Federal Government Budget: https://www.nationalpriorities.org/budget-basics/federal-budget-101/spending/
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
    cout<<"The NASA Budget for 2016     = $"<<NasBdgt<<endl;
    cout<<"The Federal Budget for 2016  = $"<<fedBdgt<<endl;
    cout<<"The Percentage spent on NASA = " <<pNasSpd<<"%"<<endl;

    //Exit
    return 0;
}

