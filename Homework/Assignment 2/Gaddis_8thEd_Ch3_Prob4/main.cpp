/* 
 * File:   main.cpp
 * Author: Chris Rountree
 * Purpose: Average rainfall
 * Created on January 13, 2016, 4:15 PM
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
    string month1;
    string month2;
    string month3;
    float rain1;
    float rain2;
    float rain3;
    float totRain;
    
    //Input Data
    cout<<"Input the first month: "<<endl;
    cin>>month1;
    cout<<"Input the amount of rainfall the first month: "<<endl;
    cin>>rain1;
    cout<<"Input the second month:"<<endl;
    cin>>month2;
    cout<<"Input the amount of rainfall the second month: "<<endl;
    cin>>rain2;
    cout<<"Input the third month:"<<endl;
    cin>>month3;
    cout<<"Input the amount of rainfall the third month: "<<endl;
    cin>>rain3;
    
    //Calculate or map inputs to outputs
    totRain=rain1+rain2+rain3;
    
    //Output the results
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"The average rainfall for "<<month1<<", "<<month2<<", and "
            <<month3<<" is "<<totRain<<" inches."<<endl;
    
    //Exit stage right
    return 0;
}

