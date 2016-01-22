/* 
 * File:   main.cpp
 * Author: Chris Rountree
 * Purpose: Body Mass Index
 * Created on January 21, 2016, 7:47 PM
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
    float weight,height,bmi;    //Weight, height, and BMI
    
    //Input Data
    cout<<"Enter your weight in pounds:"<<endl;
    cin>>weight;
    cout<<"Enter your height in inches:"<<endl;
    cin>>height;
    
    //Calculate the areas of the rectangles
    bmi=(weight*703)/(height*height);
    
    //Outputting the areas and which is larger
    cout<<"Your BMI is = "<<bmi<<endl;
    if(bmi>=18.5 && bmi<=25){
        cout<<"You are the optimal weight."<<endl;
    }else if(bmi<18.5){
        cout<<"You are underweight"<<endl;
    }else
        cout<<"You are overweight."<<endl;
    
    //Exit stage right
    return 0;
}

