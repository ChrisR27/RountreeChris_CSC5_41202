/* 
 * File:   main.cpp
 * Author: Chris Rountree
 * Purpose: Male and Female Percentages
 * Created on January 13, 2016, 8:17 PM
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants
const unsigned short CNVPERC=100;

//Functional Prototypes

//Execution Begins Here


int main(int argc, char** argv) {
    //Declare and initialize variables
    float numMale,numFem;
    float perMale,perFem;
    float totPpl;
    
    
    //Input Data
    cout<<"Input the number of males in the class:"<<endl;
    cin>>numMale;
    cout<<"Input the number of females in the class:"<<endl;
    cin>>numFem;
    
    //Calculate or map inputs to outputs
    totPpl=numMale+numFem;
    perMale=numMale/totPpl*CNVPERC;
    perFem=numFem/totPpl*CNVPERC;
    
    //Output the results
    cout<<"The total number of people in the class = ";
            cout<<totPpl<<endl;
    cout<<"The percentage of males in the class = ";
            cout<<perMale<<"%"<<endl;
    cout<<"The percentage of females in the class = ";
            cout<<perFem<<"%"<<endl;
    
    //Exit stage right
    return 0;
}

