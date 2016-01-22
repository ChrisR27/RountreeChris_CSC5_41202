/* 
 * File:   main.cpp
 * Author: Chris Rountree
 * Purpose: Factorial
 * Created on January 19, 2016, 10:38 AM
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants

//Functional Prototypes

//Execution Begins Here


int main(int argc, char** argv) {
    //Declare and initialize variables for etox
    float etox=1,x;             //e^x
    const unsigned char nTerms=13;
    
    //Input the value x
    cout<<"Input x of e^x computation"<<endl;
    cin>>x;
    
    //Calculate e^x
    for(int n=1;n<=nTerms;n++){
        //Declare and initialize variables
        unsigned int factN=1;       //N and N!

        //Calculate or map inputs to outputs
        for(int i=1;i<=n;i++){
            factN*=i;
        }
    
        //Calculate e^x with the above factorial
        etox+=pow(x,n)/factN;
    }
    //Output the results
    cout<<"The exact value of e^"<<x<<" = "<<exp(x)<<endl;
    cout<<"The approximate value of e^"<<x<<" = "<<etox<<endl;
    
    //Exit stage right
    return 0;
}

