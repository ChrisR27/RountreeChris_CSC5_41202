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
    if (score<60)
        cout<<"You have a F"<<endl;
    else if (score<70)
        cout<<"You have a D"<<endl;
    else if (score<80)
        cout<<"You have a C"<<endl;
    else if (score<90)
        cout<<"You have a B"<<endl;
    else if (score<=100)
        cout<<"You have an A"<<endl;
    
    //Exit stage right
    return 0;
}
