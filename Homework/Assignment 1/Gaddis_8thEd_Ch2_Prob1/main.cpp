/* 
 * File:   main.cpp
 * Author: Chris Rountree
 * Purpose: To assign number values to variables.
 * Created on January 10, 2016, 3:46 PM
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
    unsigned char num1=50;
    unsigned char num2=100;
    unsigned char total;
    
    //Input Data
    
    //Calculate or map inputs to outputs
    total=num1+num2;
    
    //Output the results
    cout<<"The first number is "<<static_cast<int>(num1)<<endl;
    cout<<"The second number is "<<static_cast<int>(num2)<<endl;
    cout<<"The sum of the numbers is "<<static_cast<int>(total)<<endl;
    
    //Exit stage right
    return 0;
}