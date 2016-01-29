/* 
 * File:   main.cpp
 * Author: Chris Rountree
 * Purpose: Craps Example Project V6
 * Created on January 27, 2016, 9:45 AM
 */

//System Libraries
#include <iostream>     //I/O
#include <cstdlib>      //Srand and rand function
#include <ctime>        //Time to set the random number seed
#include <fstream>      //File I/O
#include <iomanip>      //Formatting
using namespace std;

//User Libraries

//Global Constants

//Functional Prototypes

//Execution Begins Here


int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare and initialize variables
    const unsigned int LIMIT=1500;      //Table single bet limit=$1500
    unsigned short games;               //Max number of throws
    unsigned short wins=0,losses=0;
    unsigned int cntRoll,maxRoll=0,totRoll=0;
    float wallet,bet;                   //In $
    ofstream out;
    
    //Open the File
    out.open("CardGame.dat");
    
    //Input Data
    cout<<"How many games of Craps would you like to play?"<<endl;
    cout<<"Utilize a number between 10,000 and 40,000"<<endl;
    cin>>games;
    while(games<10000||games>40000){
        cout<<"How many games of Craps would you like to play?"<<endl;
        cout<<"Utilize a number between 10,000 and 40,000"<<endl;
        cin>>games;
    }
    cout<<"How much money do you have to gamble with?"<<endl;
    cin>>wallet;
    cout<<"How much would you like to bet per game?"<<endl;
    cin>>bet;
    
    //Modify the bet based upon the table limit
    bet=bet<LIMIT?bet:LIMIT;//Limit the bet to the table limit if input>limit
    
    //Throw the dice
    for(int game=1;game<=games;game++){
        cntRoll=0;
        char die1=rand()%6+1;        //Number between [1,6]
        char die2=rand()%6+1;        //Number between [1,6]
        char sum=die1+die2;         //Sum of the die rolls
        cntRoll++;                  //Every time the dice are thrown, increment
        if(sum==2||sum==3||sum==12){
            losses++;
            wallet-=bet;
        }else if(sum==7||sum==11){
            wins++;
            wallet+=bet;
        }else{
            //roll again
            bool kpRln=true;
            do{
                die1=rand()%6+1;        //Number between [1,6]
                die2=rand()%6+1;        //Number between [1,6]
                char sum2=die1+die2;    //Sum of the die rolls
                cntRoll++;         //Every time the dice are thrown, increment
                switch(sum2==7){
                        case true:{
                            losses++;
                            wallet-=bet;
                            kpRln=false;
                        }
                    default:
                        if(sum==sum2){
                            wins++;
                            wallet+=bet;
                            kpRln=false;
                        }
                }
            }while(kpRln);
            
        }totRoll+=cntRoll;
        if(cntRoll>maxRoll)maxRoll=cntRoll;
    }
    //Output the results
    cout<<endl<<"Out of "<<games<<" played"<<endl;
    cout<<"You won "<<wins<< " games and "<<endl;
    cout<<"You lost "<<losses<<" games"<<endl<<endl;
    cout<<"Percentage wise:"<<endl;
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"You won "<<100.0f*wins/games<< "% games and "<<endl;
    cout<<"You lost "<<100.0f*losses/games<<"% games"<<endl;
    cout<<"The average roll per game = "
            <<static_cast<float>(totRoll)/games<<endl;
    cout<<"The maximum roll per game = "<<maxRoll<<endl;
    cout<<"My wallet contains $"<<wallet<<endl;
    cout<<"My bets were = $"<<bet<<endl;
    
    //Output the results
    out<<endl<<"Out of "<<games<<" played"<<endl;
    out<<"You won "<<wins<< " games and "<<endl;
    out<<"You lost "<<losses<<" games"<<endl<<endl;
    out<<"Percentage wise:"<<endl;
    out<<fixed<<setprecision(2)<<showpoint;
    out<<"You won "<<100.0f*wins/games<< "% games and "<<endl;
    out<<"You lost "<<100.0f*losses/games<<"% games"<<endl;
    out<<"The average roll per game = "
            <<static_cast<float>(totRoll)/games<<endl;
    out<<"The maximum roll per game = "<<maxRoll<<endl;
    out<<"My wallet contains $"<<wallet<<endl;
    out<<"My bets were = $"<<bet<<endl;
    
    //Exit stage right
    out.close();
    return 0;
}

