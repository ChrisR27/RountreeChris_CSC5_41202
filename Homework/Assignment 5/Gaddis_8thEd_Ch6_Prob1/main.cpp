/* 
 * File:   main.cpp
 * Author: Chris Rountree
 * Purpose: Markup
 * Created on February 3, 2016, 8:10 AM
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Functional Prototypes
void calcRtl(unsigned int, unsigned short);

//Execution Begins Here


int main(int argc, char** argv) {
    //Declare and initialize variables
    unsigned int cost;             //The wholesale cost of the item in dollars
    unsigned short mUpPerc;          //Markup percentage of the item
    
    //Input Data
    cout<<"Enter in the wholesale cost of the item"<<endl;
    cin>>cost;
    cout<<"Enter in the markup percentage of the item"<<endl;
    cin>>mUpPerc;
    
    //Output the results
    calcRtl(cost, mUpPerc);
    
    //Exit stage right
    return 0;
}

/******************************************************************************/
/**********************Calculate retail price of item**************************/
/******************************************************************************/
void calcRtl(unsigned int cost,unsigned short mUpPerc){
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"The retail price of the item is $"<<(mUpPerc/100.0f)*cost+cost<<endl;
}