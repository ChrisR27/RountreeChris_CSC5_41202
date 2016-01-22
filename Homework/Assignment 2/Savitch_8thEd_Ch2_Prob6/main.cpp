/* 
 * File:   main.cpp
 * Author: Chris Rountree
 * Purpose: Room capacity
 * Created on January 13, 2016, 10:15 AM
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Functional Prototypes

//Execution Begins Here


int main(int argc, char** argv) {
    //Declare and initialize variables
    const unsigned char MAXCAP=35; //Max capacity of the room
    unsigned short numPpl;         //Seats taken by people
    char delta;           //Difference between capacity and seats taken
 
    //Input data
    cout<<"How many seats are taken by people in BE200?"<<endl;
    cin>>numPpl;
 
    //Calculate or map inputs to outputs
    delta=MAXCAP-numPpl;
 
    //Output the results
    cout<<"Maximum room capacity of BE200 = "<<static_cast<int>(MAXCAP)
            <<" seats"<<endl;
    if(delta>=0){
        cout<<"Class will be held and ";
        cout<<static_cast<int>(delta)<<" available seats remain."<<endl;
        cout<<fixed<<setprecision(1);
        cout<<"Percentage capacity = "<<100.0f*numPpl/MAXCAP<<"%"<<endl;
    }else{
        cout<<"Room capacity has been exceeded. ";
        cout<<static_cast<int>(-delta)<<" people need to leave.";
        cout<<fixed<<setprecision(1)<<endl;
        cout<<"Percentage capacity = "<<100.0f*numPpl/MAXCAP<<"%"<<endl;
    }
    
    //Exit stage right
    return 0;
}

