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
    float radAng;
    float sinAng;
    float cosAng;
    float tanAng;
    
    //Input Data
    cout<<"Input an angle in terms of radians:"<<endl;
    cin>>radAng;
    
    //Calculate or map inputs to outputs
    sinAng=sin(radAng);
    cosAng=cos(radAng);
    tanAng=tan(tanAng);
    
    //Output the results
    cout<<"Angle in radians = "<<radAng<<endl;
    cout<<"Sine of angle = "<<sinAng<<endl;
    cout<<"Cosine of angle = "<<cosAng<<endl;
    cout<<"Tangent of angle = "<<tanAng<<endl;
    
    //Exit stage right
    return 0;
}

