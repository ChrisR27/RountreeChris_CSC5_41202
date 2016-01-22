/* 
 * File:   main.cpp
 * Author: Chris Rountree
 * Purpose: Magic Dates
 * Created on January 21, 2016, 6:17 PM
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Functional Prototypes

//Execution Begins Here


int main(int argc, char** argv) {
    //Declare and initialize variables
    unsigned short month,day,year,mult;      //Month, day, year, and day*month
    
    //Input Data
    cout<<"Enter the month from 1-12:"<<endl;
    cin>>month;
    cout<<"Enter the day from 1-31:"<<endl;
    cin>>day;
    cout<<"Enter the last two digits of the year from 1-99:"<<endl;
    cin>>year;
    
    //Calculate or map inputs to outputs
    mult=month*day;
            
    //Outputting if date is magic or not
    if(mult==year){
        cout<<"The date you entered is a magic date!"<<endl;
    }else
        cout<<"The date you entered is not a magic date."<<endl;
    
    //Exit stage right
    return 0;
}

