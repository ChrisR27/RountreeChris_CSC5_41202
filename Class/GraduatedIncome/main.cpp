/* 
 * File:   main.cpp
 * Author: Chris Rountree
 * Purpose: Calculate net income from graduated taxes
 * Created on January 13, 2016, 10:47 AM
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
const unsigned short CNVPERC=100;

//Functional Prototypes

//Execution Begins Here


int main(int argc, char** argv) {
    //Declare and initialize variables
    unsigned short grInc,netInc,tax;     //Gross income, net income, tax
    float taxr1=10;
    float taxr2=15;
    float taxr3=20;
    float taxr4=25;
    float taxr5=30;
    float taxr6=35;
    float taxr7=40;
    
    //Input data
    cout<<"Enter your gross income in dollars: "<<endl;
    cin>>grInc;
 
    //Calculate
    if (grInc<=5000)
        tax=0;
    else if (grInc<=10000)
        tax=(grInc-5000)*(taxr1/CNVPERC);
    else if (grInc<=15000)
        tax=(grInc-10000)*(taxr2/CNVPERC)+(grInc-10000)*(taxr1/CNVPERC);
    netInc=grInc-tax;
        
    //Output data
    cout<<"The amount of taxes you would have to pay = $"<<tax<<endl;
    cout<<"Your net income would be = $"<<netInc<<endl;
    
    //Exit stage right
    return 0;
}

