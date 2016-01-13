/* 
 * File:   main.cpp
 * Author: Chris Rountree
 * Purpose: Calculate total monthly car payment.
 * Created on January 13, 2016, 8:44 AM
 */

//System Libraries
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants
unsigned short cnvPerc=12*100;

//Functional Prototypes

//Execution Begins Here


int main(int argc, char** argv) {
    //Declare and initialize variables
    unsigned short  loan;//Car Loan Amount $'s
    unsigned short  intRate;//Interest Rate %
    unsigned short  nMonths;//Number of Payments (months)
    float           paymnt;//Payment $'s
    float           intrest;//Total interest paid
 
    //Input data
    cout<<"Input the interest rate: "<<endl;
    cin>>intRate;
    cout<<"Input how many payments there are:"<<endl;
    cin>>nMonths;
    cout<<"Input total loan amount:"<<endl;
    cin>>loan;
 
    //Calculate or map inputs to outputs
    float temp=static_cast<float>(pow(1+static_cast<float>(intRate)/cnvPerc,nMonths));
    paymnt=temp*intRate/cnvPerc*loan/(temp-1);
    intrest=nMonths*paymnt-loan;
 
    //Output the results
    cout<<"Interest rate = "<<intRate<<"%"<<endl;
    cout<<"Number of monthly payments = "<<nMonths<<endl;
    cout<<"Loan Amount for Car = $"<<loan<<endl;
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Monthly Payment = $"<<paymnt<<endl;
    cout<<"Interest Paid = $"<<intrest<<endl;
    
    //Exit stage right
    return 0;
}

