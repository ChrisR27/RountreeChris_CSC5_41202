/* 
 * File:   main.cpp
 * Author: Chris Rountree
 * Purpose: Table of Salary Doubling starting at a penny
 * Created on January 20, 2016, 11:12 AM
 * Double is required because number of significant digits
 * Anything larger than $99,999.99 requires a double
 */

//System Libraries
#include <iostream>     //Input/Output
#include <iomanip>      //Formatting
using namespace std;

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //The problem to solve
    cout<<endl<<"Solution to Gaddis 8thEd Ch5 Prob7"<<endl;
    cout<<endl<<"Display a Salary Table"<<endl<<endl;
    
    //Declare variables
    unsigned int salary=1;     //Salary starting at a penny
    double totPay=salary;         //Total pay by summing the salary
    
    //Loop to generate the salary table and total paid
    cout<<"  Day         Salary         Total"<<endl;
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<setw(4)<<1<<setw(15)<<salary/100.0f<<setw(15)<<totPay/100.0f<<endl;
    for(int day=2;day<=31;day++){
        //salary*=2;
        salary<<=1;     //Bit shift right by one bit (multiply by 2)
        totPay+=salary;
        cout<<setw(4)<<day<<setw(15)<<salary/100.0<<setw(15)<<totPay/100.0<<endl;
    }
    
    //Exit stage right
    return 0;
}

