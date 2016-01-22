/* 
 * File:   main.cpp
 * Author: Chris Rountree
 * Purpose: Minimum/Maximum
 * Created on January 21, 2016, 6:24 PM
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
    float num1,num2;      //The two numbers the user inputs
    
    //Input Data
    cout<<"Enter your first number:"<<endl;
    cin>>num1;
    cout<<"Enter your second number:"<<endl;
    cin>>num2;
    
    //Outputting which number is larger
    if(num1>num2){
        cout<<"The first number entered is larger."<<endl;
    }else if(num1==num2){
        cout<<"The numbers are equal"<<endl;
    }else
        cout<<"The second number entered is larger."<<endl;
    
    //Exit stage right
    return 0;
}

