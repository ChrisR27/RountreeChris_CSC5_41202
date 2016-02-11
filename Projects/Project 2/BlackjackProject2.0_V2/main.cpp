/* 
 * File:   main.cpp
 * Author: Chris Rountree
 * Purpose: Blackjack Project 2.0 Version 2
 * Created on February 10, 2016, 4:50 PM
 */

//System Libraries
#include <iostream>     //I/O
#include <iomanip>      //Formating
#include <cstdlib>      //Srand and rand function
#include <ctime>        //Time to set the random number seed
#include <fstream>      //File I/O
using namespace std;

//User Libraries

//Global Constants
const char PERCENT=100;         //Conversion to percent

//Functional Prototypes
int card();

//Execution Begins Here
int main(int argc, char** argv) {
    //Set the random number seed and declare variables
    srand(static_cast<unsigned int>(time(0)));
    char qstion;            //Ask if the player wants to keep playing
    unsigned int wins=0,losses=0,games=0,push=0;//Wins, losses, pushes,and games
    float money,bet;//How much money the player has total and the bet amount in$
    ofstream out;       //Setting up the file to be made
    const int HAND=21;        //Max cards possible for dealer or player to have
    int player[HAND];
    int dealer[HAND];
    
    //Open a file
    out.open("Blackjack.dat");
 
    //Asking the player for total money
    cout<<"How much money do you have to gamble with in dollars?"<<endl;
    cin>>money;
    
    do{
        //Reseting player and dealers hands
        player[HAND]=0;
        dealer[HAND]=0;
        
        //Deal cards to the player and dealer
        player[0]=card();
        player[1]=card();
        dealer[0]=card();
        
        //Declare and initialize variables for playing
        unsigned short decisn;                 //Players input to hit/stand
        bool reDsply=true;                     //Display for hit/stand prompt
        unsigned int totPlyr=player[0]+player[1];
        unsigned int totCpu=dealer[0];
        
        //Asking for a bet each time
        cout<<"How much would you like to bet?"<<endl;
        cin>>bet;
        
        //Don't let the player bet more than he has
        bet=bet<money?bet:money;    //Setting the bet=money if bet>money

        //Output the first hand for player and dealer
        cout<<endl<<"You have a "<<player[0]<<" and "
                <<player[1]<<" for a total of "<<totPlyr<<endl;
        cout<<endl<<"The dealer has a "<<dealer[0]<<" showing."<<endl;

        //Check to see if player has blackjack
        if(totPlyr==21){
            cout<<"Blackjack! Congratulations, you win!";
            games++;
            wins++;
            money+=bet;
        }else 
        while(totPlyr<22 && reDsply){
        //Ask player if he wants to hit or stand
        cout<<"What would you like to do?"<<endl;
        cout<<"Type 1 to Hit"<<endl;
        cout<<"Type 2 to Stand"<<endl;
        cin>>decisn;
            //Playing the hand out, determining wins and losses
            switch(decisn){
                case 1:{
                    if(totPlyr>10 && card()==11){totPlyr+=1;}
                    else totPlyr+=card();
                    if(totPlyr>21){
                        cout<<endl<<"You've busted with "
                            <<static_cast<int>(totPlyr)<<endl;
                        games++;
                        losses++;
                        money-=bet;
                    }
                    else{
                        cout<<endl<<"You now have "
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
                        games++;
                        wins++;
                        money+=bet;
                    }else if(totPlyr<22 && totCpu<22 && totPlyr>totCpu){
                        cout<<"Congratulations, you've won!"<<endl;
                        games++;
                        wins++;
                        money+=bet;
                    }else if(totPlyr<22 && totCpu<22 && totPlyr==totCpu){
                        cout<<"Push."<<endl;
                        games++;
                        push++;
                    }else{
                        cout<<"Sorry, you've lost."<<endl;
                        games++;
                        losses++;
                        money-=bet;
                    }reDsply=false;
            }
        }
        //Keep playing?
        cout<<endl<<"Do you want to continue you playing, y/n?"<<endl;
        cin>>qstion;
        cout<<endl;
    }while(toupper(qstion)=='Y');
    
    
    //Output the information to the screen at the end of playing
    cout<<"You played "<<games<<" game(s)"<<endl;
    cout<<"You won "<<wins<<" game(s), lost "<<losses
            <<" game(s), and pushed "<<push<<" game(s)."<<endl;  
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Your win percentage was "<<1.0f*wins/games*PERCENT<<"%"<<endl;
    cout<<"You ended with $"<<money<<endl;
    
    //Output the information to a file at the end of playing
    out<<"You played "<<games<<" game(s)"<<endl;
    out<<"You won "<<wins<<" game(s), lost "<<losses
            <<" game(s), and pushed "<<push<<" game(s)."<<endl;  
    out<<fixed<<setprecision(2)<<showpoint;
    out<<"Your win percentage was "<<1.0f*wins/games*PERCENT<<"%"<<endl;
    out<<"You ended with $"<<money<<endl;
    
    //Exit stage right
    out.close();
    return 0;
}

/******************************************************************************/
/***********************************Card***************************************/
/******************************************************************************/
int card(){
    //Declare and initialize variables
    unsigned char card;     //Randomly generating a card to be drawn
    
    //Create a random number
    card=rand()%13+2;       //Random card drawn between [2,14]
    
    //Making sure if it's a Jack, Queen, or King, it converts to a 10
    if(card==12||card==13||card==14){return card=10;}
    else return card;
}