/* 
 * File:   main.cpp
 * Author: Chris Rountree
 * Purpose: Largest/Smallest Array Values
 * Created on February 4, 2016, 10:07 AM
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
    const int SIZE=10;      //Size of the array
    int min,max;            //Min and max values in the array
    int numArry[SIZE];      //The array to be created
    
    //Input numbers into the array
    cout<<"Enter 10 numbers to put into an array"<<endl;
    for (int i=0;i<SIZE;i++){
        cin>>numArry[i];
    }
    //Create a starting point for mix and max
    min=numArry[0];
    max=numArry[0];
    
    //Finding the min and max
    for(int j=0;j<SIZE;j++){
        if (numArry[j]>max)
            max=numArry[j];
        if (numArry[j]<min)
            min=numArry[j];
    }
    
    //Output the min and max values found in the array
    cout<<"The minimum value found in the array is "<<min<<endl;
    cout<<"The maximum value found in the array is "<<max<<endl;
    
    //Exit stage right
    return 0;
}