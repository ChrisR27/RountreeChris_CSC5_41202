/* 
 * File:   main.cpp
 * Author: Chris Rountree
 * Purpose: Calculate the square root by the Babylonian /Newtons Method.
 * V2: Uses loop to do calculation.
 * Created on January 14, 2016, 10:27 AM
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
    float tol=0.001f;  //Tolerance/accuracy of the result to .001 percent
    int counter=0;      //See how many loops it took to get the answer
 
    //Input data
    cout<<"Input the value to compute the square root of:"<<endl;
    cin>>n;
 
    //First approximation
    guess=n/2;      //Only perform once to start the process
 
    //Output the initial values
    cout<<"The input value = "<<n<<endl;
    cout<<"The actual square root value = "<<sqrt(n)<<endl;
    
    //Approximate using a loop
    do{
        r=n/guess;
        guess=(guess+r)/2;
        counter++;
    }while(abs((r-guess)/guess)>(tol/100));   //Ends with accuracy within tol%
    
    //Output the results
    cout<<"The r = "<<r<<endl;
    cout<<"The guess = "<<guess<<endl;
    cout<<"The loop executed "<<counter<<" times"<<endl;
    
    //Exit stage right
    return 0;
}

