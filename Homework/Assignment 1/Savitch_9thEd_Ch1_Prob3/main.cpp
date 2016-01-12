/* 
 * Author: Chris Rountree
 * Created on January 6, 2016, 9:38 AM
 * Purpose:  Quarters, Nickels, and Dimes
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constant
const char cnvQrtr=25;  //Pennies in a quarter
const char cnvDime=10;  //Pennies in a dime
const char cnvNikl=5;   //Pennies in a nickel
const char cnvPnD=100;  //Pennies in a dollar

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare and initialize variables
    unsigned char nQrtrs,nNikls,nDimes;
    unsigned short total;
    
    //Input the number of coins
    cout<<"How many quarters do you have from 0-9"<<endl;
    cin>>nQrtrs;
    cout<<"How many dimes do you have from 0-9"<<endl;
    cin>>nDimes;
    cout<<"How many nickels do you have from 0-9"<<endl;
    cin>>nNikls;
    
    //Calculate
    total=(nQrtrs-48)*cnvQrtr+(nDimes-48)*cnvDime+(nNikls-48)*cnvNikl;
    
    //Output the results
    cout<<"Number of Quarters input = "<<nQrtrs<<endl;
    cout<<"Number of Dimes input = "<<nDimes<<endl;
    cout<<"Number of Nickels input = "<<nNikls<<endl;
    cout<<"The dollar amount = $"<<1.0f*total/cnvPnD<<endl;
    
    //Exit stage right
    return 0;
}