/* 
 * File:   main.cpp
 * Author: Chris Rountree
 * Purpose: Check out IDE
 * Created on January 14, 2016, 11:04 AM
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
    float qntty=0.5f;       //A value to add repeatedly
    float sum=0;            //The result of a repetitive addition
    int nloops=10000000;             //Number of times to loop
    float answer;                  //The computed answer
    
    //Input Data
    for(int i=1;i<=nloops;i++){
        sum+=qntty;
    }
    
    //Calculate or map inputs to outputs
    answer=nloops*qntty;
    
    //Output the results
    cout<<"The product answer = "<<answer<<endl;
    cout<<"The sum answer = "<<sum<<endl;
    cout<<"The percent error = "<<(answer-sum)/answer*100<<"%"<<endl;
    
    //Exit stage right
    return 0;
}

