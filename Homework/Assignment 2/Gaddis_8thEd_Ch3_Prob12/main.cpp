/* 
 * File:   main.cpp
 * Author: Chris Rountree
 * Purpose: Celsius to Fahrenheit
 * Created on January 14, 2016, 9:26 PM
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Functional Prototypes

//Execution Begins Here


int main(int argc, char** argv) {
    //Declare and initialize variables
    float celsius,fahren;
    
    //Input Data
    cout<<"Input the degrees in Celsius:"<<endl;
    cin>>celsius;
    
    //Calculate or map inputs to outputs
    fahren=1.8f*celsius+32;
    
    //Output the results
    cout<<"Degrees in Celsius = "<<celsius<<endl;
    cout<<"Degrees in Fahrenheit = "<<fahren<<endl;
    
    //Exit stage right
    return 0;
}

