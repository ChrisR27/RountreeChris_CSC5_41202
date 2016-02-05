/* 
 * File:   main.cpp
 * Author: Chris Rountree
 * Purpose: Coin Toss
 * Created on February 4, 2016, 10:30 PM
 */

//System Libraries
#include <iostream>
#include <cstdlib>
using namespace std;

//User Libraries

//Global Constants

//Functional Prototypes
void coinTos();

//Execution Begins Here


int main(int argc, char** argv) {
    //Declare and initialize variables
    int number;         //Number of tosses
    
    //Input Data
    cout<<"Enter the number of tosses"<<endl;
    cin>>number;
    
    //Loop to find results
    for(int i=0;i<number;i++){
        coinTos();
    }
    
    //Exit stage right
    return 0;
}

/******************************************************************************/
/*******************************Toss the Coin**********************************/
/******************************************************************************/
void coinTos(){
    //Declare variables
    unsigned short coin;
    
    //Flip the coin
    coin=rand()%2+1;     //Random number [1,2]
    if(coin==1)
        cout<<"Heads"<<endl;
    else
        cout<<"Tails"<<endl;
}