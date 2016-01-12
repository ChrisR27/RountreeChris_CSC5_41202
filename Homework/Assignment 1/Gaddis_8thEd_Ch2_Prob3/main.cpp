/* 
 * File:   main.cpp
 * Author: Chris Rountree
 * Purpose: To find the sales tax on a purchase.
 * Created on January 11, 2016, 8:17 PM
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
    unsigned char totSale=95;       //Total sale
    unsigned char stTax=4;            //State tax percentage
    unsigned char cntyTax=2;          //County tax percentage
    unsigned char totTax;           //Total tax amount
    
    //Input Data
    
    //Calculate or map inputs to outputs
    totTax=totSale*(stTax+cntyTax)/cnvPerc;
    
    //Output the results
    cout<<"The total sale = $"<<static_cast<int>(totSale)<<endl;
    cout<<"The state tax percentage = ";
    cout<<static_cast<int>(stTax)<<"%"<<endl;
    cout<<"The county tax percentage = ";
    cout<<static_cast<int>(cntyTax)<<"%"<<endl;
    cout<<"The total amount of tax = $"<<static_cast<int>(totTax)<<endl;
    
    //Exit stage right
    return 0;
}