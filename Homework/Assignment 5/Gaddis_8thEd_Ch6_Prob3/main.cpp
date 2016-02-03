/* 
 * File:   main.cpp
 * Author: Chris Rountree
 * Purpose: Winning Division
 * Created on February 3, 2016, 11:15 AM
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Functional Prototypes
float getSale();
void highest();

//Execution Begins Here


int main(int argc, char** argv) {
    //Declare and initialize variables
    int fahren;
    
    //Input Data
    cout<<"Enter a temperature in Fahrenheit to be converted to Celsius"<<endl;
    cin>>fahren;
    
    //Output the results
    celsius(fahren);
    
    //Exit stage right
    return 0;
}

/******************************************************************************/
/**********************Get sales for each division*****************************/
/******************************************************************************/
float getSale(){
    cout<<fixed<<setprecision(2)<<showpoint;
    //Declare variables
    
    
    //Converted from Celsius to Fahrenheit
    cels=(5.0f/9)*(fahren-32);
    
    //Output the table
    cout<<endl<<"Fahrenheit Celsius"<<endl;
    cout<<setw(6)<<fahren<<setw(12)<<cels<<endl;
    for(int i=0,fahren=0;i<21;i++,fahren++){
        cels=(5.0f/9)*(fahren-32);
        cout<<setw(6)<<fahren<<setw(12)<<cels<<endl;
    }
}