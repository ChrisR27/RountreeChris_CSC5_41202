/* 
 * File:   main.cpp
 * Author: Chris Rountree
 * Purpose: To calculate total paycheck.
 * Created on January 5, 2016, 9:34 AM
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
    float         payRate= 1e1f;      //Pay Rate in $ per hour
    unsigned char hrsWrkd= 40;        //Hours worked in hours
    
    //Input Data
    
    //Calculate or map inputs to outputs
    float payChk=payRate*hrsWrkd;
    
    //Output the results
    cout<<"Pay Rate = $"<<payRate<<"/hr"<<endl;
    cout<<"Hours Worked = "<<static_cast<int>(hrsWrkd)<<"hrs"<<endl;
    cout<<"Pay Check = $"<<payChk<<endl;
    
    //Exit stage right
    return 0;
}