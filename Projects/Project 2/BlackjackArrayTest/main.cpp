/* 
 * File:   main.cpp
 * Author: Chris Rountree
 * Purpose: Use an array to randomly generate cards for player/dealer
 * Created on February 10, 2016, 10:20 AM
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>        //Setting the seed with time
using namespace std;

//User Libraries

//Global Constants

//Functional Prototypes
void draw(int [],int);       //Fill in array

//Execution Begins Here


int main(int argc, char** argv) {
    //Initialize the seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare variables
    const int CARD=21;  //Maximum potential cards to have
    int plyr[CARD];     //The players potential cards
    int cpu[CARD];      //The dealers potential cards
    
    //Fill the player and dealers hands with randomly generated cards
    draw(plyr,CARD);
    draw(cpu,CARD);
    
    //Output the players and dealers cards and total
    cout<<"The player has: "<<plyr[0]<<" and "<<plyr[1]
            <<" for a total of "<<plyr[0]+plyr[1]<<endl<<endl;
    
    cout<<"The dealer has: "<<cpu[0]<<" and "<<cpu[1]
            <<" for a total of "<<cpu[0]+cpu[1]<<endl;
    
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
void draw(int a[],int n){
    //Loop and fill the array with random numbers
    for(int i=0;i<n;i++){
        a[i]=rand()%13+2;      //[2,14]
        if(a[i]==12 || a[i]==13 || a[i]==14){a[i]=10;}
    }
}