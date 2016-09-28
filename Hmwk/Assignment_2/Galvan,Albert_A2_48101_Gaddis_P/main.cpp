/* 
 * File:   main.cpp
 * Author: Albert Galvan
 * Created on 9/26/16 3:05 PM
 * Purpose:  Solving a problem from Gaddis, 8th Edition. Converts dollar to
 * yen and euros
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
    float UScurr, JPcurr, EUcurr;
    string usrnam;
    
    //Greets the user and has them input a value and name
    
    cout<<"Hello!"<<endl;
    cout<<"What is your name?"<<endl;
    cin>>usrnam;
    cout<<"Hi "<<usrnam<<"!"<<endl;
    cout<<"My purpose is to convert US currency to yen and euros!"<<endl;
    cout<<"Please input a amount of money."<<endl;
    cin>>UScurr;
    
    
    
    //Converts to Yen and Euros
    
    JPcurr=UScurr*93.93;
    EUcurr=UScurr*00.74;
    
    //Rounds JP currency 2 decimals
    int round1=JPcurr*100+0.5f;         //Shifts by 2 *100 then rounds to 0.5
    JPcurr= round1/100.0f;              //Int truncated then shift back 2 decimals
    
    //Rounds EU currency 2 decimals
    int round2=EUcurr*100+0.5f;         //Shifts by 2 *100 then rounds to 0.5
    EUcurr= round2/100.0f;              //Int truncated then shift back 2 decimals
    
    //Gives user tha amount of currency and says goodbye.
    cout<<"$"<<UScurr<<" is equal to ";
    cout<<"¥"<<JPcurr<<" in Japan and ";
    cout<<"€"<<EUcurr<<" in Europe."<<endl;
    cout<<"Thank you for using me!"<<endl;
    cout<<"goodbye "<<usrnam<<"!"<<endl;

    //Exit
    return 0;
}

