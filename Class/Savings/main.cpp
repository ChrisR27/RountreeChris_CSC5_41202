/* 
 * File:   main.cpp
 * Author: Chris Rountree
 * Purpose: Calculate savings/interest
 * Created on January 21, 2016, 11:07 AM
 */

//System Libraries
#include <iostream>     //I/O
#include <iomanip>      //Format
using namespace std;

//User Libraries

//Global Constants

//Functional Prototypes

//Execution Begins Here


int main(int argc, char** argv) {
    //Declare and initialize variables
    float balance=100.0f;          //Initial balance in dollars
    float intRate=0.05f;           //Interest rate per year
    float rule72=0.72f/intRate;    //Rule of 72, Future value=2*present value
    float intErnd;                 //Interest earned
    
    //Output the Table Heading
    cout<<"The interest rate = "<<intRate*100<<"%"<<endl;
    cout<<"At this interest, principle should double every ";
    cout<<rule72<<" years"<<endl;
    cout<<"Year Year Balance Interest"<<endl;
    cout<<fixed<<setprecision(2)<<showpoint;
    
    //Calculate the savings
    for(int y=0,year=2016;y<=50;y++,year++){
        intErnd=balance*intRate;
        cout<<setw(4)<<y<<" "<<year<<setw(8)<<balance<<setw(9)<<intErnd<<endl;
        balance*=(1+intRate);
    }
    
    
    //Exit stage right
    return 0;
}

