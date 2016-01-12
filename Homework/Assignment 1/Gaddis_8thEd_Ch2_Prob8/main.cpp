/* 
 * File:   main.cpp
 * Author: Chris Rountree
 * Purpose: To calculate total purchase.
 * Created on January 11, 2016, 9:15 PM
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
    float item1=15.95f;             //Price of item 1
    float item2=24.95f;             //Price of item 2
    float item3=6.95f;              //Price of item 3
    float item4=12.95f;             //Price of item 4
    float item5=3.95f;              //Price of item 5
    unsigned short tax=7;           //Sales tax percentage
    float subtot,taxAmt,total;
    
    //Input Data
    
    //Calculate or map inputs to outputs
    subtot=item1+item2+item3+item4+item5;
    taxAmt=subtot*tax/cnvPerc;
    total=subtot+taxAmt;
    
    //Output the results
    cout<<"The cost of item 1 = $"<<item1<<endl;
    cout<<"The cost of item 2 = $"<<item2<<endl;
    cout<<"The cost of item 3 = $"<<item3<<endl;
    cout<<"The cost of item 4 = $"<<item4<<endl;
    cout<<"The cost of item 5 = $"<<item5<<endl;
    cout<<"The subtotal of the sale = $"<<subtot<<endl;
    cout<<"The amount of tax paid = $"<<taxAmt<<endl;
    cout<<"The total bill = $"<<total<<endl;
    
    //Exit stage right
    return 0;
}