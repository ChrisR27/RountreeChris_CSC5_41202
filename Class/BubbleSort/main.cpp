/* 
 * File:   main.cpp
 * Author: Chris Rountree
 * Purpose: Sort using Bubble sort
 * Created on February 2, 2016, 11:30 AM
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>        //Setting the seed with time
using namespace std;

//User Libraries

//Global Constants

//Functional Prototypes
void fillAry(int [],int);       //Fill in array
void prntAry(int [],int,int);   //Print the array
void bublSrt(int [],int);       //Swap and sort the whole array

//Execution Begins Here


int main(int argc, char** argv) {
    //Initialize the seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare variables
    const int SIZE=100;
    int array[SIZE];
    
    //Fill the array with random 2 digit numbers
    fillAry(array,SIZE);
    
    //Print the array
    prntAry(array,SIZE,10);
    
    //Test finding the smallest element in the list
    bublSrt(array,SIZE);
    
    //Print the array
    prntAry(array,SIZE,10);
    
    //Exit stage right
    return 0;
}

/******************************Fill Array**************************************/
//Inputs:
// a->List
// n->Size of the array
//Outputs:
// a->List (initialized with random 2 digit numbers)
/******************************************************************************/
void fillAry(int a[],int n){
    //Loop and fill the array with random numbers
    for(int i=0;i<n;i++){
        a[i]=rand()%90+10;      //[10,99]
    }
}

/******************************Print Array*************************************/
//Inputs:
// a->List
// n->Size of the array
// perLine->How many list elements per line to print
//Outputs:
// a->List (initialized with random 2 digit numbers)
/******************************************************************************/
void prntAry(int a[],int n,int perLine){
    //Loop and fill the array with random numbers
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
        if(i%perLine==(perLine-1))cout<<endl;
    }
    cout<<endl;
}

/*******************************Bubble Sort************************************/
//Inputs:
// a->Array or list
// n->Size of list
//Outputs:
// a->Sorted array
/******************************************************************************/
void bublSrt(int a[],int n){
    //Outside loop to test if any swaps happen
    bool swap;
    do{
        swap=false;
        //Inside list above the element
        for(int j=0;j<n-1;j++){
            if(a[j]>a[j+1]){
                int temp=a[j];      //Creating a temp swap variable
                a[j]=a[j+1];
                a[j+1]=temp;
                swap=true;
            }
        }
    }while(swap);
}