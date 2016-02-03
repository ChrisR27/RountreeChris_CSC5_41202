/* 
 * File:   main.cpp
 * Author: Chris Rountree
 * Purpose: Blackjack Project V5
 * Created on January 31, 2016, 2:12 PM
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
void hit();
void stand();

//Execution Begins Here


int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare and initialize variables
    unsigned char totPlyr=card()+card();      //Starting hand for the player
    unsigned char totCpu=card();              //Starting hand for the computer
    unsigned short decisn;                    //Players input to hit/stand
    bool reDsply=true;                        //Display for hit/stand prompt
    
    //Adjusting for player getting double aces
    if(totPlyr==22){totPlyr=12;}
    
    //Output the results
    cout<<"The player has "<<static_cast<int>(totPlyr)<<endl;
    cout<<"The dealer has a "<<static_cast<int>(totCpu)<<" showing"<<endl<<endl;
    
    //Check to see if player has blackjack
    if(totPlyr==21){
        cout<<"Blackjack! Congratulations, you win. ";
        cout<<"Play again? y/n"<<endl;
        //Put in the loop later
    }else 
        while(reDsply && totPlyr<22){
        //Ask player if he wants to hit or stand
        cout<<"What would you like to do?"<<endl;
        cout<<"Type 1 to Hit"<<endl;
        cout<<"Type 2 to Stand"<<endl;
        cout<<"Type anything else to exit"<<endl<<endl;
        cin>>decisn;
        //Action based on players input
        switch(decisn){
            case 1:{
                if(totPlyr>10 && card()==11){totPlyr+=1;}
                else totPlyr+=card();
                if(totPlyr>21){
                    cout<<"The player has busted"<<endl;
                }
                else{
                    cout<<"The player now has "<<
                        static_cast<int>(totPlyr)<<endl; 
                }break;
            }
            case 2:{
                do{
                    totCpu+=card();
                }while(totCpu<17);
                cout<<"The dealer has "<<static_cast<int>(totCpu)<<endl;
            }
            default:{
                cout<<"Exiting the Program"<<endl;
                reDsply=false;
                }
            }
        }
    
    
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
