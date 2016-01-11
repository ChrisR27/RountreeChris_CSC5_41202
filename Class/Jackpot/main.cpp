/* 
 * Author: Chris Rountree
 * Created on January 11, 2016, 10:40 AM
 * Purpose:  Calculate the amount of money you would have from the jackpot after taxes
 */

//System Libraries
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constant
const char cnvPerc=100;		//Conversion to percentage

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare and initialize variables
    unsigned long jackpot,lumpsum,tax,marry;
    unsigned short perLump=62;
    unsigned short perTax=52;
    unsigned short perMary=50;

    
    //Calculate the number of drinkers
    lumpsum=jackpot*(perLump/cnvPerc);
    tax=lumpsum*(perTax/cnvPerc);
    marry=tax*(perMary/cnvPerc);

    //Input
    cout<<"What is the total jackpot amount in dollars?"<<endl;
    cin>>jackpot;
    
    //Output the results
    cout<<"The total jackpot is = "<<jackpot<<endl;
    cout<<"The percentage you receive in a lump sum is = ";
    cout<<static_cast<int>(perLump)<<"%"<<endl;
    cout<<"The percentage of taxes there are = ";
    cout<<static_cast<int>(perTax)<<"%"<<endl;
    cout<<"The percentage you get if you're married is = ";
    cout<<static_cast<int>(perMary)<<"%"<<endl;
    cout<<"Total starting jackpot = "<<jackpot<<endl;
    cout<<"Amount received in a lump sum = "<<lumpsum<<endl;
    cout<<"Amount received after taxes = "<<tax<<endl;
    cout<<"Amount received after splitting it if married = "<<marry<<endl;
    
    
    //Exit stage right
    return 0;
}