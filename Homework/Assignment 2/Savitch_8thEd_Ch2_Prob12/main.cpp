/* 
 * File:   main.cpp
 * Author: Chris Rountree
 * Purpose: Calculate the square root by the Babylonian /Newtons Method.
 * Created on January 13, 2016, 10:47 AM
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants

//Functional Prototypes

//Execution Begins Here


int main(int argc, char** argv) {
    //Declare and initialize variables
    float n;        //Input the value to obtain its square root
    float r,guess;  //Intermediate values which asymptotically approach sqrt(n)
 
    //Input data
    cout<<"Input the value to compute the square root of:"<<endl;
    cin>>n;
 
    //First pass of approximation
    guess=n/2;      //Only perform once to start the process
    r=n/guess;
    guess=(guess+r)/2;
 
    //Output the results
    cout<<"The input value = "<<n<<endl;
    cout<<"The actual square root value = "<<sqrt(n)<<endl<<endl;
    cout<<"The first pass r = "<<r<<endl;
    cout<<"The first pass guess = "<<guess<<endl<<endl;
    
    //Second pass of approximation
    r=n/guess;
    guess=(guess+r)/2;
 
    //Output the results
    cout<<"The second pass r = "<<r<<endl;
    cout<<"The second pass guess = "<<guess<<endl<<endl;
    
    //Third pass of approximation
    r=n/guess;
    guess=(guess+r)/2;
 
    //Output the results
    cout<<"The third pass r = "<<r<<endl;
    cout<<"The third pass guess = "<<guess<<endl<<endl;
    
    //Fourth pass of approximation
    r=n/guess;
    guess=(guess+r)/2;
 
    //Output the results
    cout<<"The fourth pass r = "<<r<<endl;
    cout<<"The fourth pass guess = "<<guess<<endl<<endl;
    
    //Fifth pass of approximation
    r=n/guess;
    guess=(guess+r)/2;
 
    //Output the results
    cout<<"The fifth pass r = "<<r<<endl;
    cout<<"The fifth pass guess = "<<guess<<endl<<endl;
    
    //Sixth pass of approximation
    r=n/guess;
    guess=(guess+r)/2;
 
    //Output the results
    cout<<"The sixth pass r = "<<r<<endl;
    cout<<"The sixth pass guess = "<<guess<<endl<<endl;
    
    //Exit stage right
    return 0;
}

