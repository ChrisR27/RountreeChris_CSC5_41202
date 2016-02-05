/* 
 * File:   main.cpp
 * Author: Chris Rountree
 * Purpose: Chips and Salsa
 * Created on February 4, 2016, 11:35 AM
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Functional Prototypes
float calcTotR(float[], int);
float calcAvgR(float[], int);
float maxRain(float[], int, int &);
float minRain(float[], int, int &);

//Execution Begins Here


int main(int argc, char** argv) {
    //Declare and initialize variables
    const int TYPES=5;
    const int SOLD=5;
    string salsa[TYPES]={"Mild", "Medium", "Sweet", "Hot", "Zesty"};
    int jars[SOLD];
    unsigned short totSold, hiSold, lowSold;   //Total, highest, and lowest sold
    string hiSoldP;         //Highest sold product
    string loSoldP;         //Lowest sold product
    
    //Create the array to store rainfall from each month and the names of months
    float rain[SIZE];
    string months[SIZE]={"January","February","March","April","May","June",
    "July","August","September","October","November","December"};
    
    //Loop the array to get rainfall input
    for (int i=0; i<SIZE; i++){
        cout<<"Enter the total rainfall in "<<months[i]<<endl;
        cin>>rain[i];
    }
    
    //Call functions to get rainfall statics for the whole year
    totRain=calcTotR(rain, SIZE);
    avgRain=calcAvgR(rain, SIZE);
    hiRain=maxRain(rain, SIZE, hiIndex);
    lowRain=minRain(rain, SIZE, loIndex);
    
    //Output the all of the rain statistics
    cout<<fixed<<setprecision(2)<<showpoint<<endl;
    cout<<"The total rainfall for the year was: "<<totRain<<endl;
    cout<<"The average rainfall for the year was: "<<avgRain<<endl;
    cout<<"The highest rainfall for the year was: "
            <<hiRain<<" in "<<months[hiIndex]<<endl;
    cout<<"The lowest rainfall for the year was: "
            <<lowRain<<" in "<<months[loIndex]<<endl;
    
    //Exit stage right
    return 0;
}

/******************************************************************************/
/*****************************Total Rainfall***********************************/
/******************************************************************************/
float calcTotR(float amount[], int n){
    //Declare variables
    float totAmnt=0;
    
    //Calculate the total amount of rainfall
    for (int i=0; i<n; i++)
        totAmnt+=amount[i];
    return totAmnt;
}

/******************************************************************************/
/****************************Average Rainfall**********************************/
/******************************************************************************/
float calcAvgR(float amount[], int n){
    //Declare variables
    float totAmnt=0;
    float avgAmnt=0;
    
    //Calculate average total amount of rainfall
    for (int i=0; i<n; i++)
        totAmnt+=amount[i];
    avgAmnt=totAmnt/n;
    return avgAmnt;
}

/******************************************************************************/
/****************************Highest Rainfall**********************************/
/******************************************************************************/
float maxRain(float amount[], int n, int &monthIn){
    //Declare variables
    float hiAmnt;
    int i=0;
    hiAmnt=amount[i];
    
    //Find the highest amount of rainfall
    while(i<n){
        if (amount[i]>hiAmnt){
            hiAmnt=amount[i];
            monthIn=i;
        }i++;
    }return hiAmnt;
}

/******************************************************************************/
/****************************Lowest Rainfall***********************************/
/******************************************************************************/
float minRain(float amount[], int n, int &monthIn){
    //Declare variables
    float lowAmnt;
    int i=0;
    lowAmnt=amount[i];
    
    //Find the highest amount of rainfall
    while(i<n){
        if (amount[i]<lowAmnt){
            lowAmnt=amount[i];
            monthIn=i;
        }i++;
    }return lowAmnt;
}