/* 
 * File:   main.cpp
 * Author: Chris Rountree
 * Purpose: Blackjack Project V6
 * Created on February 1, 2016, 10:09 AM
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
    //Set the random number seed and declare the variable for the question
    srand(static_cast<unsigned int>(time(0)));
    char qstion;      //Ask if the player wants to keep playing
 
    do{
        //Declare and initialize variables
        unsigned char totPlyr=card()+card();   //Starting hand for the player
        unsigned char totCpu=card();           //Starting hand for the computer
        unsigned short decisn;                 //Players input to hit/stand
        bool reDsply=true;                     //Display for hit/stand prompt

        //Adjusting for player getting double aces
        if(totPlyr==22){totPlyr=12;}

        //Output the results
        cout<<"You have "<<static_cast<int>(totPlyr)<<endl;
        cout<<"The dealer has a "
                <<static_cast<int>(totCpu)<<" showing"<<endl<<endl;

        //Check to see if player has blackjack
        if(totPlyr==21){
            cout<<"Blackjack! Congratulations, you win!";
        }else 
        while(totPlyr<22 && reDsply){
        //Ask player if he wants to hit or stand
        cout<<"What would you like to do?"<<endl;
        cout<<"Type 1 to Hit"<<endl;
        cout<<"Type 2 to Stand"<<endl;
        cout<<"Type anything else to exit"<<endl;
        cin>>decisn;
            //Action based on players input
            switch(decisn){
                case 1:{
                    if(totPlyr>10 && card()==11){totPlyr+=1;}
                    else totPlyr+=card();
                    if(totPlyr>21){
                        cout<<endl<<"You have busted with "
                            <<static_cast<int>(totPlyr)<<endl;
                    }
                    else{
                        cout<<endl<<"The player now has "
                            <<static_cast<int>(totPlyr)<<endl<<endl; 
                    }break;
                }
                case 2:{
                    do{
                        totCpu+=card();
                    }while(totCpu<17);
                    cout<<endl<<"The dealer has "
                            <<static_cast<int>(totCpu)<<endl;
                }
                default:
                    if(totPlyr<22 && totCpu>21){
                        cout<<"Congratulations, you've won!"<<endl;
                    }else if(totPlyr<22 && totCpu<22 && totPlyr>totCpu){
                        cout<<"Congratulations, you've won!"<<endl;
                    }else if(totPlyr<22 && totCpu<22 && totPlyr==totCpu){
                        cout<<"Push."<<endl;
                    }else{cout<<"Sorry, you've lost."<<endl;}
                    reDsply=false;
            }
        }
        //Keep playing?
        cout<<endl<<"Do you want to continue you playing, y/n?"<<endl;
        cin>>qstion;
        cout<<endl;
    }while(toupper(qstion)=='Y');
    
    
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
