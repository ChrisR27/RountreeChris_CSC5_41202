/* 
 * File:   main.cpp
 * Author: Chris Rountree
 * Purpose: Mass and Weight
 * Created on January 21, 2016, 8:18 PM
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
    float weight,mass;    //Weight and mass
    
    //Input Data
    cout<<"Enter the mass in kilograms:"<<endl;
    cin>>mass;
    
    //Calculate the weight of the object
    weight=mass*9.8;
    
    //Outputting the weight and if it's too heavy/light
    cout<<"The weight of the object = "<<weight<<" Newtons"<<endl;
    if(weight>1000){
        cout<<"The object is too heavy."<<endl;
    }else if(weight<10){
        cout<<"The object is too light."<<endl;
    }
    
    //Exit stage right
    return 0;
}

