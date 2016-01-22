/* 
 * File:   main.cpp
 * Author: Chris Rountree
 * Purpose: Rock, paper, scissors
 * Created on January 19, 2016, 8:54 AM
 */

//System Libraries
#include <iostream>     //Input/Output
#include <cstdlib>      //Rand function
#include <ctime>        //Time to set the random number seed
using namespace std;

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //The problem to solve
    cout<<endl<<"Solution to Savitch 7th Ed Ch3 Prob1"<<endl;
    cout<<endl<<"The Rock-Paper-Scissors Game"<<endl<<endl;
    
    //Set the random number seed and declare the question
    srand(static_cast<unsigned int>(time(0)));
    char qstion;      //Ask if the player wants to keep playing
    
    //Loop until player wants to quit
    do{
        //Declare and initialize variables
        char computr;     //The computers move
        char player;      //The players move

        //Input the players turn
        do{
            cout<<endl<<"What is your move: P, R, or S?"<<endl;
            cin>>player;
            player=toupper(player);
        }while(!(player=='P'||player=='R'||player=='S'));

        //Computer generated play
        do{
            computr=rand()%4+80;
        }while(computr=='Q');

        //Output the moves by the computer and player
        cout<<"The computer played "<<computr<<endl;
        cout<<"The players move "<<player<<endl;

        //Determine the result
        if(computr==player){
            cout<<"The result is a tie."<<endl;
        }else if(player=='P'&&computr=='R'){
            cout<<"The player wins!"<<endl;
        }else if(player=='R'&&computr=='S'){
            cout<<"The player wins!"<<endl;
        }else if(player=='S'&&computr=='P'){
            cout<<"The player wins!"<<endl;
        }else{
            cout<<"The player loses!"<<endl;
        }
        //Keep playing?
        cout<<endl<<"Do you want to continue you playing, y/n?"<<endl;
        cin>>qstion;
    }while(toupper(qstion)=='Y');
    //Exit stage right
    return 0;
}

