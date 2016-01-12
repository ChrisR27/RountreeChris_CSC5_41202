/* 
 * File:   main.cpp
 * Author: Chris Rountree
 * Purpose: To find total pay.
 * Created on January 12, 2016, 11:38 AM
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants

//Functional Prototypes

//Execution Begins Here


int main(int argc, char** argv) {
    //Declare and initialize variables
    unsigned short regPay=800;
    unsigned short hrsWrkd, totPay;
    unsigned short ovrtme=1200;
    
    
    //Input Data
    cout<<"Input the number of hours you worked"<<endl;
    cin>>hrsWrkd;
    
    //Output the results
    if (hrsWrkd<5)
        totPay=regPay*5;
    else if (hrsWrkd<=8)
        totPay=regPay*hrsWrkd;
    else if (hrsWrkd>8)
        totPay=(regPay*8)+(hrsWrkd-8)*ovrtme;
    
    //Display results
    cout<<"Your total pay is "<<totPay<<endl;
    
    //Exit stage right
    return 0;
}
