/* 
 * File:   main.cpp
 * Author: Chris Rountree
 * Purpose: Time Calculator
 * Created on January 21, 2016, 9:41 PM
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
const unsigned char HRINDAY=24;          //Hours in a day
const unsigned char MININHR=60;          //Minutes in an hour
const unsigned char SECINMIN=60;         //Seconds in a minute


//Functional Prototypes

//Execution Begins Here


int main(int argc, char** argv) {
    //Declare and initialize variables
    unsigned short seconds,minutes,hours,days;//Number of seconds, minutes, hours, and days
    unsigned int inSec,inMin,inHrs,inDays;//Conversion to seconds, minutes, hours, and days
    
    //Input Data
    cout<<"Enter the number of seconds:"<<endl;
    cin>>inSec;
    
    //Converting into days, hours, minutes, and seconds
    seconds=inSec%SECINMIN;
    inMin=inSec/SECINMIN;
    minutes=inMin%MININHR;
    inHrs=inMin/MININHR;
    hours=inHrs%HRINDAY;
    days=inHrs/HRINDAY;
    
    //Outputting the days, hours, minutes, and seconds
    if(days>0){
        cout<<days<<" days, ";
    }if(hours>0){
        cout<<hours<<" hours, ";
    }if(minutes>0){
        cout<<minutes<<" minutes, ";
    }if(seconds>0){
        cout<<seconds<<" seconds."<<endl;
    }
    
    //Exit stage right
    return 0;
}

