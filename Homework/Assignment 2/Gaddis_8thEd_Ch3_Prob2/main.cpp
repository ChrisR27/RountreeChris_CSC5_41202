/* 
 * File:   main.cpp
 * Author: Chris Rountree
 * Purpose: Stadium seating
 * Created on January 12, 2016, 2:38 PM
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
    unsigned char classA=15;
    unsigned char classB=12;
    unsigned char classC=9;
    unsigned short soldA,soldB,soldC;
    float total;
    
    //Input Data
    cout<<"How many seats were sold from Class A?"<<endl;
    cin>>soldA;
    cout<<"How many seats were sold from Class B?"<<endl;
    cin>>soldB;
    cout<<"How many seats were sold from Class C?"<<endl;
    cin>>soldC;
    
    //Calculate or map inputs to outputs
    total=(classA*soldA)+(classB*soldB)+(classC*soldC);
    
    //Output the results
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Total income generated = $"<<total<<endl;
    
    //Exit stage right
    return 0;
}

