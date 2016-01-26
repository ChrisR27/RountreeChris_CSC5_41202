/* 
 * File:   main.cpp
 * Author: Chris Rountree
 * Purpose: Variations on a Savings Theme
 * Created on January 26, 2016, 8:45 AM
 */

//System Libraries
#include <iostream>     //I/O
#include <cmath>        //Power/Exponent/Log Functions
#include <cstdlib>      //Rand/srand functions
#include <ctime>        //Time function
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants
const char PERCENT=100;         //Convert decimal to percent

//Functional Prototypes
float save1(float,float,int);           //Power
float save2(float,float,int);           //Exponential/Log
float save3(float,float,int);           //For loop
float save4(float,float,int);           //Banking with pennies
float save5(float,float,int);           //Recursion, function calling itself
float save6(float,int,float=0.05f);     //Defaulted save function
float save7(float,float,int);           //For loop with static variable

//Execution Begins Here
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare and initialize variables
    float pv=rand()%9001+1000;      //[1000,10000]      $
    float intRate=rand()%11+5;      //[5,15]            %
    char nComp=rand()%16;           //[0,15]            Years
    
    //Output the random inputs
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"The present value   = $"<<pv<<endl;
    cout<<"The interest rate   = "<<intRate<<"%"<<endl;
    cout<<"The number of years = "<<static_cast<int>(nComp)<<endl;
    
    //Output the results
    cout<<"The savings using power function                  = $"
            <<save1(pv,intRate/PERCENT,nComp)<<endl;
    cout<<"The savings using exponential function            = $"
            <<save2(pv,intRate/PERCENT,nComp)<<endl;
    cout<<"The savings using for loop function               = $"
            <<save3(pv,intRate/PERCENT,nComp)<<endl;
    cout<<"The savings using for loop banking implementation = $"
            <<save4(pv,intRate/PERCENT,nComp)<<endl;
    cout<<"The savings using recursion                       = $"
            <<save5(pv,intRate/PERCENT,nComp)<<endl;
    cout<<"The savings using power defaulting interest       = $"
            <<save6(pv,nComp,intRate/PERCENT)<<endl;
    cout<<"The savings using power defaulting interest 5%    = $"
            <<save6(pv,nComp)<<endl;
    cout<<"The savings using for loop and static counter     = $"
            <<save7(pv,intRate/PERCENT,nComp)<<endl;
    cout<<"The savings using for loop and static counter     = $"
            <<save7(pv,intRate/PERCENT,nComp);
    
    //Exit stage right
    return 0;
}


/******************************************************************************/
/*************************************Save1************************************/
/******************************************************************************/
//Inputs
//   p->Present Vale ($)
//   i->Interest Rate (%)
//   n->Number of compounding periods
//Output
//   fv->Future Value ($)
//Note: Using the power function
float save1(float p,float i,int n){
    return p*pow((1+i),n);
}

/******************************************************************************/
/*************************************Save2************************************/
/******************************************************************************/
//Inputs
//   p->Present Vale ($)
//   i->Interest Rate (%)
//   n->Number of compounding periods
//Output
//   fv->Future Value ($)
//Note: Using the exponential function
float save2(float p,float i,int n){
    return p*exp(n*log(1+i));
}

/******************************************************************************/
/*************************************Save3************************************/
/******************************************************************************/
//Inputs
//   p->Present Vale ($)
//   i->Interest Rate (%)
//   n->Number of compounding periods
//Output
//   fv->Future Value ($)
//Note: Using the for loop function
float save3(float p,float i,int n){
    for(int years=1;years<=n;years++){
        p*=(1+i);
    }
    return p;
}

/******************************************************************************/
/*************************************Save4************************************/
/******************************************************************************/
//Inputs
//   p->Present Vale ($)
//   i->Interest Rate (%)
//   n->Number of compounding periods
//Output
//   fv->Future Value ($)
//Note: Using the for loop function banking implementation
float save4(float p,float i,int n){
    int ip=p*PERCENT;                           //Place the value in pennies
    for(int years=1;years<=n;years++){
        ip*=(1+i);
    }
    p=static_cast<float>(ip)/PERCENT;           //Returning to dollars
    return p;
}

/******************************************************************************/
/*************************************Save5************************************/
/******************************************************************************/
//Inputs
//   p->Present Vale ($)
//   i->Interest Rate (%)
//   n->Number of compounding periods
//Output
//   fv->Future Value ($)
//Note: Using recursion, function calling itself
float save5(float p,float i,int n){
    if(n<=0)return p;               //Base Condition
    return save5(p,i,n-1)*(1+i);
}

/******************************************************************************/
/*************************************Save6************************************/
/******************************************************************************/
//Inputs
//   p->Present Vale ($)
//   i->Interest Rate (%)
//   n->Number of compounding periods
//Output
//   fv->Future Value ($)
//Note: Using the power function default
float save6(float p,int n,float i){
    return p*pow((1+i),n);
}

/******************************************************************************/
/*************************************Save7************************************/
/******************************************************************************/
//Inputs
//   p->Present Vale ($)
//   i->Interest Rate (%)
//   n->Number of compounding periods
//Output
//   fv->Future Value ($)
//Note: Using the for loop function and static variable
float save7(float p,float i,int n){
    static int nCalls=0;
    for(int years=1;years<=n;years++){
        p*=(1+i);
    }
    nCalls++;
    cout<<"This function, save7, contains a static counter   = "<<nCalls<<endl;
    return p;
}