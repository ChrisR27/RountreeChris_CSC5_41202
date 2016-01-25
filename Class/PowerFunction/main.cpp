/* 
 * File:   main.cpp
 * Author: Chris Rountree
 * Purpose: Power Function Example
 * Created on January 25, 2016, 8:36 AM
 */

//System Libraries
#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;

//User Libraries

//Global Constants

//Functional Prototypes
int pow(int,int);

//Execution Begins Here
int main(int argc, char** argv) {
    //Variables to be used in timing
    unsigned int begi,endi,begd,endd,loop=100000000;
    
    //Declare and initialize variables
    int x;              //Base of the problem
    int y;              //Exponent of the problem
    int z;              //The result of a^b
    
    //Input Data
    cout<<"Input a and b for a^b"<<endl;
    cin>>x>>y;
    
    //Calculate or map inputs to outputs
    begi=static_cast<unsigned int>(time(0));
    for(int i=0;i<=loop;i++)z=pow(x,y);
    endi=static_cast<unsigned int>(time(0));
    
    //Output the results
    cout<<"Our function result: "<<x<<"^"<<y<<" = "<<z<<endl;
    cout<<"The total time taken = "<<endi-begi<<" (secs)"<<endl;
    
    //Compare our function with cmath library
    double dx=x;            //Copy into a double
    double dy=y;            //Copy into a double
    double dz;
    
    //Call math library function
    begd=static_cast<unsigned int>(time(0));
    for(int i=0;i<=loop;i++)dz=pow(dx,dy);
    endd=static_cast<unsigned int>(time(0));
    
    //Output the results
    cout<<"Library function result: "<<dx<<"^"<<dy<<" = "<<dz<<endl;
    cout<<"The total time taken = "<<endd-begd<<" (secs)"<<endl;
    
    //Exit stage right
    return 0;
}

/******************************************************************************/
/********************************Power Function********************************/
/******************************************************************************/
//Inputs
//  a-> Integer Base
//  b-> Integer Power Exponent
//Output
//  c->Integer z=a^b
int pow(int a,int b){
    if(b<=0)return 1;
    if(b==1)return a;
    int abd2=pow(a,b/2);
    if(b%2)return abd2*abd2*a;        //If even
    return abd2*abd2;             //Else odd
}