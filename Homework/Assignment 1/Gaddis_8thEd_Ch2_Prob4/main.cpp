/* 
 * File:   main.cpp
 * Author: Chris Rountree
 * Purpose: To find the total restaurant bill.
 * Created on January 11, 2016, 8:38 PM
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
const unsigned short cnvPerc=100;       //Conversion to percentage

//Functional Prototypes

//Execution Begins Here


int main(int argc, char** argv) {
    //Declare and initialize variables
    float meal=88.67;              //Meal cost
    float tax=6.75;                //Tax percent
    unsigned short tip=20;           //Tip percent
    float taxAmt,tipAmt,totBill;    
    
    //Input Data
    
    //Calculate or map inputs to outputs
    taxAmt=meal*tax/cnvPerc;
    tipAmt=(meal+tax)*tip/cnvPerc;
    totBill=meal+tax+tip;
    
    //Output the results
    cout<<"The meal cost = $"<<meal<<endl;
    cout<<"The total tax amount = $"<<taxAmt<<endl;
    cout<<"The total tip amount= $"<<tipAmt<<endl;
    cout<<"The total bill= $"<<totBill<<endl;
    
    //Exit stage right
    return 0;
}