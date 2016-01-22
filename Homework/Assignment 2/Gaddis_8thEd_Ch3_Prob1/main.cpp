/* 
 * File:   main.cpp
 * Author: Chris Rountree
 * Purpose: Calculate mpg
 * Created on January 12, 2016, 2:23 PM
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Functional Prototypes

//Execution Begins Here


int main(int argc, char** argv) {
    //Declare and initialize variables
    unsigned short maxTank,maxMiles,mpg;  //Max tank capacity, miles/tank, & mpg
    
    //Input Data
    cout<<"How many gallons of gas can your tank hold?"<<endl;
    cin>>maxTank;
    cout<<"How many miles can you go on a full tank of gas?"<<endl;
    cin>>maxMiles;
    
    //Calculate or map inputs to outputs
    mpg=maxMiles/maxTank;       //Calculating miles per gallon of gas
    
    //Output the results
    cout<<"Gallons of gas the tank can hold = "<<maxTank<<endl;
    cout<<"Miles you can go on a full tank = "<<maxMiles<<endl;
    cout<<"Miles per gallon = "<<mpg<<endl;
    
    //Exit stage right
    return 0;
}

