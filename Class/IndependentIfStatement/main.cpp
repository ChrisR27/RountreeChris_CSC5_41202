/* 
 * File:   main.cpp
 * Author: Chris Rountree
 * Purpose: Check out IDE
 * Created on January 12, 2016, 10:13 AM
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
    unsigned short score;
   
    
    //Input Data
    cout<<"Enter your score from 0-100"<<endl;
    cin>>score;
    
    //Output the results
    if (score>=90)
    cout<<"You have an A"<<endl;
    
    
    //Exit stage right
    return 0;
}
