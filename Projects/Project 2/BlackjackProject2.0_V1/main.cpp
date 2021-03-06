/* 
 * File:   main.cpp
 * Author: Chris Rountree
 * Purpose: Blackjack Project 2.0 Version 1
 * Created on February 8, 2016, 11:00 AM
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
void draw(int [],int);       //Randomly generate cards

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare and initialize variables
    char qstion;            //Ask if the player wants to keep playing
    unsigned int wins=0,losses=0,games=0,push=0;//Wins, losses, pushes,and games
    float iMoney,money;//How much money the player starts out with and ends with
    float bet;      //How much the player wants to bet each hand
    ofstream out;       //Setting up the file to be made
    
    //Open a file
    out.open("Blackjack.dat");
    
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare the arrays and variables
    const int CARD=21;  //Maximum potential cards to have
    int plyr[CARD];     //The players potential cards
    int cpu[CARD];      //The dealers potential cards
    
    //Fill the player and dealers hands with randomly generated cards
    draw(plyr,CARD);
    draw(cpu,CARD);
 
    //Asking the player for total money
    cout<<"How much money do you have to gamble with in dollars?"<<endl;
    cin>>money;
    iMoney=money;
    
    do{
        //Declare and initialize variables for playing
        unsigned char totPlyr=plyr[0]+plyr[1];   //Starting hand for the player
        unsigned char totCpu=cpu[0];           //Starting hand for the computer
        int decisn;                 //Players input to hit/stand
        bool reDsply=true;                     //Display for hit/stand prompt
        
        //Asking for a bet each time
        cout<<"How much would you like to bet?"<<endl;
        cin>>bet;
        
        //Don't let the player bet more than he has
        bet=bet<money?bet:money;    //Setting the bet=money if bet>money
        
        //Adjusting for player getting double aces
        if(totPlyr==22){totPlyr=12;}

        //Output the players and dealers original cards
        cout<<"You have a "<<plyr[0]<<" and "<<plyr[1]<<" for a total of "
                <<static_cast<int>(totPlyr)<<endl;
        cout<<"The dealer has a "<<static_cast<int>(totCpu)
                <<" showing."<<endl<<endl;

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
                    for (int i=0;i<1;i++){
                        if(totPlyr>10 && plyr[i]==11)
                            totPlyr+=1;
                        else totPlyr+=plyr[i];
                        cout<<"You now have  "<<plyr[0]<<", "<<plyr[1]<<" and "
                            <<plyr[i]<<" for a total of "
                            <<static_cast<int>(totPlyr)<<endl;
                        i++;
                    }
                    
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
                        totCpu+=cpu[CARD];
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
    cout<<"You started with $"<<iMoney<<endl;
    cout<<"You ended with $"<<money<<endl;
    cout<<"You you made $"<<money-iMoney<<endl;
    
    //Output the information to a file at the end of playing
    out<<"You played "<<games<<" game(s)"<<endl;
    out<<"You won "<<wins<<" game(s), lost "<<losses
            <<" game(s), and pushed "<<push<<" game(s)."<<endl;  
    out<<fixed<<setprecision(2)<<showpoint;
    out<<"Your win percentage was "<<1.0f*wins/games*PERCENT<<"%"<<endl;
    out<<"You started with $"<<iMoney<<endl;
    out<<"You ended with $"<<money<<endl;
    out<<"You you made $"<<money-iMoney<<endl<<endl;
    
    //Exit stage right
    out.close();
    return 0;
}

/*********************************Draw*****************************************/
//Inputs:
// a->List
// n->Size of the array
//Outputs:
// a->List (initialized with cards ranging in value from 2 to 14)
/******************************************************************************/
void draw(int a[],int n){
    //Loop and fill the array with random numbers
    for(int i=0;i<n;i++){
        a[i]=rand()%13+2;      //[2,14]
        if(a[i]==12 || a[i]==13 || a[i]==14){a[i]=10;}
    }
}