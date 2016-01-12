/* 
 * File:   main.cpp
 * Author: Chris Rountree
 * Purpose: To predict east coast sales.
 * Created on January 11, 2016, 8:03 PM
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
    unsigned int totSale=8600000;   //Total sales
    unsigned char perSale=58;       //Percentage of sales
    unsigned int estSale;           //Total east coast sales
    
    //Input Data
    
    //Calculate or map inputs to outputs
    estSale=totSale*perSale/cnvPerc;
    
    //Output the results
    cout<<"The total sales = $"<<totSale<<endl;
    cout<<"The percent of sales east coast had was ";
    cout<<static_cast<int>(perSale)<<"%"<<endl;
    cout<<"The amount of money east coast made in sales = $"<<estSale<<endl;
    
    //Exit stage right
    return 0;
}