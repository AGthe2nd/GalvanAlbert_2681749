/* 
 * File:   main.cpp
 * Author: Albert Galvan
 * Created on 9/26/16 10:51
 * Purpose:  Solve Problem 24 of Gaddis Chapter 3 8th Edition, telling a story 
 * with inputed information
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
    string name, ctynam, cllgnam, profnam, animnam, petnam, age;                //Names for user name, city name, college name, profession name, 
                                                                                //animal name, pet name and age.
    
    
    //Input or initialize values Here
    cout<<"Hello! \n";
    cout<<"If you tell me the name of stuff, I'll tell you a story. Can you \n";
    cout<<"tell me your name? \n";
    cin>>name;
    cout<<"Hello "<<name<<"! \n";
    cout<<"What about your age? \n";
    cin>>age;
    cout<<"Now the name of a city! \n";
    cin>>ctynam;
    cout<<"Maybe the name of a college? \n";
    cin>>cllgnam;
    cout<<"How about a profession? \n";
    cin>>profnam;
    cout<<"Can you tell me the name of a animal? \n";
    cin>>animnam;
    cout<<"Why don't you give the animal a name? \n";
    cin>>petnam;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    //Process/Calculations Here
    
    //Story Processes here.
    cout<<"There once was a person named "<<name<<" who lived in "<<ctynam<<". \n";
    cout<<"At the age of "<<age<<", "<<name<<" went to college at "<<cllgnam<<". \n";
    cout<<name<<" graduated and went to work as a "<<profnam<<". \n";
    cout<<"Then, "<<name<<" adopted a "<<animnam<<" named "<<petnam<<". \n";
    cout<<"They both lived happily ever after!!! \n";                           //I mean, we could've had a better story right?
    

    //Exit
    return 0;
}

