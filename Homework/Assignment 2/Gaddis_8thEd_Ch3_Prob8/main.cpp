/* 
 * File:   main.cpp
 * Author: Chris Rountree
 * Purpose: How many widgets?
 * Created on January 13, 2016, 8:52 PM
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
    float widgWt=12.5f;     //Weight of a widget in lbs
    float numWidg,totWt,palWt;
    
    //Input Data
    cout<<"Input the weight of the pallet by itself in lbs:"<<endl;
    cin>>palWt;
    cout<<"Input the total weight of the pallet in lbs:"<<endl;
    cin>>totWt;
    
    //Calculate or map inputs to outputs
    numWidg=(totWt-palWt)/widgWt;
    
    //Output the results
    cout<<"The weight of the pallet = "<<palWt<<" pounds."<<endl;
    cout<<"The total weight = "<<totWt<<" pounds."<<endl;
    cout<<"The number of widgets on the pallet = "<<numWidg<<endl;
    
    //Exit stage right
    return 0;
}

