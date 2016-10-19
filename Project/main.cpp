/* 
 * File:   main.cpp
 * Author: Albert Galvan
 * Created on October 19, 2016, 10:10 AM
 * Purpose:  All the ways to save
 */

//System Libraries Here
#include <iostream>
#include <cmath>    //Power function, Exponential, Log as well
#include <iomanip>  //Formatting Dollar/Cent outputs
using namespace std;

//User Libraries Here

//Global Constants 
const float PERCENT=100.0f;

//Function Prototypes Here
float save1(float,float,int);
float save2(float,float,int);
float save3(float,float,int);
float save4(float,float,int);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float pv,intRate;
    int nComp;
    
    
    //Input values
    pv=100.0f;                  //$100
    intRate=8/PERCENT;          //8%
    //nComp=9;                  //9 years
    nComp=72/intRate/PERCENT;   //By the rule of 72
    
    //Process/Calculations Here then Display Output
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Present value    = "<<pv<<endl;
    cout<<"Interest Rate    = "<<intRate*PERCENT<<"%/year"<<endl;
    cout<<"Years in Account = "<<nComp<<" years"<<endl;
    cout<<"Future Value (Power)     =$"<<save1(pv,intRate,nComp)<<endl;
    cout<<"Future Value (Exp,Log)   =$"<<save2(pv,intRate,nComp)<<endl;
    cout<<"Future Value (For-Loop)  =$"<<save3(pv,intRate,nComp)<<endl;
    cout<<"Future Value (Recursion) =$"<<save4(pv,intRate,nComp)<<endl;
    
    //Exit
    return 0;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//*************************   Problem 1 ****************************************
//Purpose:  Show rule of 72
//Inputs:   Inputs to the function here
//  p->Initial balance in $'s
//  i->Decimal value for the interest/year
//  n->Number of Compounding periods, typically by year
//Output:   Outputs to the function here -> Description, Range, Units
//  Savings after n  
//******************************************************************************


float save1(float p,float i,int n){
    return p*pow((1+i),n);
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//*************************   Problem 1 ****************************************
//Purpose:  Show rule of 72
//Inputs:   Inputs to the function here
//  p->Initial balance in $'s
//  i->Decimal value for the interest/year
//  n->Number of Compounding periods, typically by year
//Output:   Outputs to the function here -> Description, Range, Units
//  Savings after n 
//******************************************************************************


float save2(float p,float i,int n){
    return p*exp(n*log(1+i));
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//*************************   Problem 1 ****************************************
//Purpose:  Show rule of 72
//Inputs:   Inputs to the function here
//  p->Initial balance in $'s
//  i->Decimal value for the interest/year
//  n->Number of Compounding periods, typically by year
//Output:   Outputs to the function here -> Description, Range, Units
//  Savings after n compounding periods with i interest rate and p principle
//******************************************************************************


float save3(float p,float i,int n){
    float fv=p;
    for(int year=1;year<=n;year++){
        fv*=(1+i);
    }
    return fv;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//*************************   Problem 1 ****************************************
//Purpose:  Show rule of 72
//Inputs:   Inputs to the function here
//  p->Initial balance in $'s
//  i->Decimal value for the interest/year
//  n->Number of Compounding periods, typically by year
//Output:   Outputs to the function here -> Description, Range, Units
//  Savings after n 
//******************************************************************************


float save4(float p,float i,int n){
    if(n<=0)return p;
    return save4(p,i,n-1)*(1+i);
    }
