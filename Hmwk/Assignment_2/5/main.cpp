/* 
 * File:   main.cpp
 * Author: Albert Galvan
 * Created on September 28, 2016, 1:17 PM
 * Purpose:  Calculate Gender Percentages.
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
    
    /*
     * Float names stand for:
     * male number
     * female number
     * total students
     * male percent
     * female percent
     * 
     */
    
    float malenum, fmalnum, ttlstud, malperc, falperc;
    
    //Input or initialize values Here
    
    cout<<"Hello!"<<endl;
    cout<<"The purpose of this program is to calculate the percentage"<<endl;
    cout<<"of male and female students in a single class. Results are"<<endl;
    cout<<"rounded to nearest full percentage. How many male students"<<endl;
    cout<<"are enrolled in this hypothetical class"<<endl;
    
    cin>>malenum;                     //Input male number
    
    cout<<"Now how many female students are enrolled in this class"<<endl;
    
    cin>>fmalnum;                     //Input female number
    
    //Process/Calculations Here
    
    ttlstud=malenum+fmalnum;          //total students = males + females
    malperc=malenum/ttlstud;          //male percent = male / total students
    falperc=fmalnum/ttlstud;          //female percent = female students / total
    
    int round1=malperc*100+0.5f;      //Shifts by 2 *100 then rounds to 0.5
    malperc= round1/1.0f;             //Int truncated then shift back 4 decimals 
    
    int round2=falperc*100+0.5f;      //Shifts by 2 *100 then rounds to 0.5
    falperc= round2/1.0f;             //Int truncated then shift back 4 decimals 
    
    //Output Located Here
    cout<<endl;
    cout<<"The amount of male students in class is:"<<endl;
    cout<<malenum<<endl;
    cout<<"The amount of female students in class is:"<<endl;
    cout<<fmalnum<<endl;
    cout<<"The total amount of students in class is:"<<endl;
    cout<<ttlstud<<endl;
    cout<<"The percent of male students in class is:"<<endl;
    cout<<malperc<<"%"<<endl;
    cout<<"The percent of female students in class is:"<<endl;
    cout<<falperc<<"%"<<endl;
    cout<<"Thank you and goodbye!"<<endl;
    
    
    //Exit
    return 0;
}

