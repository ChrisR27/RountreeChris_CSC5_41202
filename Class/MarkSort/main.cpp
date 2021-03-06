/* 
 * File:   main.cpp
 * Author: Chris Rountree
 * Purpose: Sort using Mark sort
 * Created on February 2, 2016, 8:20 AM
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
void swap(int &,int &);         //Swap the elements in the array
void lstSml(int [],int,int);    //Swap based on smallest in the array
void markSrt(int [],int);       //Swap and sort the whole array

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
    markSrt(array,SIZE);
    
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

/****************************Swap Variables************************************/
//Inputs:
// a->First variable
// b->Second variable
//Outputs:
// a->First variable with value of b
// b->Second variable with value of a
/******************************************************************************/
void swap(int &a,int &b){
    a=a^b;      //Exclusive or swap
    b=a^b;      //Exclusive or swap   b=a
    a=a^b;      //Exclusive or swap   a=b
}

/**************************Smallest in List************************************/
//Inputs:
// a->Array or list
// n->Size of list
// pos->Position to place smallest in list that follows
//Outputs:
// a[pos]->Smallest element in [a[pos],a[n-1]]
/******************************************************************************/
void lstSml(int a[],int n,int pos){
    //Loop and compare
    for(int i=pos+1;i<n;i++){
        if(a[pos]>a[i])swap(a[pos],a[i]);
    }
}

/*********************************Mark Sort************************************/
//Inputs:
// a->Array or list
// n->Size of list
//Outputs:
// a->Sorted array
/******************************************************************************/
void markSrt(int a[],int n){
    //Loop and compare
    for(int i=0;i<n-1;i++){
        lstSml(a,n,i);
    }
}