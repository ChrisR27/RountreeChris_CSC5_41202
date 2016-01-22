/* 
 * File:   main.cpp
 * Author: Chris Rountree
 * Purpose: Stadium seating
 * Created on January 12, 2016, 2:38 PM
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
    unsigned short score1,score2,score3,score4,score5;
    float avrg;
    
    //Input Data
    cout<<"Input your first test score:"<<endl;
    cin>>score1;
    cout<<"Input your second test score:"<<endl;
    cin>>score2;
    cout<<"Input your third test score:"<<endl;
    cin>>score3;
    cout<<"Input your fourth test score:"<<endl;
    cin>>score4;
    cout<<"Input your fifth test score:"<<endl;
    cin>>score5;
    
    //Calculate or map inputs to outputs
    avrg=(score1+score2+score3+score4+score5)/5;
    
    //Output the results
    cout<<fixed<<setprecision(1)<<showpoint;
    cout<<"Your average test score = "<<avrg<<"%"<<endl;
    
    //Exit stage right
    return 0;
}

