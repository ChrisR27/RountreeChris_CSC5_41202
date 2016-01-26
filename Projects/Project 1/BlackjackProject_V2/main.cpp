/* 
 * File:   main.cpp
 * Author: Chris Rountree
 * Purpose: Blackjack Project V2
 * Created on January 26, 2016, 11:30 AM
 */

//System Libraries
#include <iostream>     //I/O
#include <cstdlib>      //Srand and rand function
#include <ctime>        //Time to set the random number seed
using namespace std;

//User Libraries

//Global Constants

//Functional Prototypes
void hit();
void stand();
void fold();

//Execution Begins Here


int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare and initialize variables
    const unsigned short MAXCARD=13000;    //Max number of card plays
    unsigned char card=rand()%13+2;        //Number between [2,14]
    unsigned short decisn;                 //Players decision
    bool reDsply=true;                     //Exit program when false
    
    //Menu to ask for players input
    do{
        //Ask player what move he wants to make
        cout<<"Make a move:"<<endl;
        cout<<"Type 1 to Hit"<<endl;
        cout<<"Type 2 to Stand"<<endl;
        cout<<"Type 3 to Fold"<<endl;
        cout<<"Type anything else to exit "<<endl<<endl;
        cin>>decisn;
        //Action based on players input
        switch(decisn){
            case 1:{hit();break;}
            case 2:{stand();break;}
            case 3:{fold();break;}
            default:{
                cout<<"Exiting the Program"<<endl;
                reDsply=false;
            }
        }
    }while(reDsply);
    
    //Play the cards
    
    
    //Exit stage right
    return 0;
}

/******************************************************************************/
/************************************Hit***************************************/
/******************************************************************************/
void hit(){
    
}

/******************************************************************************/
/************************************Stand*************************************/
/******************************************************************************/
void stand(){
    
}

/******************************************************************************/
/************************************Fold**************************************/
/******************************************************************************/
void fold(){
    
}