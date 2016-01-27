/* 
 * File:   main.cpp
 * Author: Chris Rountree
 * Purpose: Blackjack Project V3
 * Created on January 27, 2016, 10:00 AM
 */

//System Libraries
#include <iostream>     //I/O
#include <cstdlib>      //Srand and rand function
#include <ctime>        //Time to set the random number seed
using namespace std;

//User Libraries

//Global Constants

//Functional Prototypes
unsigned char card();

//Execution Begins Here


int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare and initialize variables
    unsigned char totPlyr=card()+card();      //Starting hand for the player
    unsigned char totCpu=card();              //Starting hand for the computer
    
    //Output the results
    cout<<"The player has "<<static_cast<int>(totPlyr)<<endl;
    cout<<"The dealer has a "<<static_cast<int>(totCpu)<<" showing"<<endl;
    
    //Exit stage right
    return 0;
}

/******************************************************************************/
/***********************************Card***************************************/
/******************************************************************************/
unsigned char card(){
    unsigned char card;
    card=rand()%13+2;
    if(card==12||card==13||card==14){return card=10;}
    else return card;
}