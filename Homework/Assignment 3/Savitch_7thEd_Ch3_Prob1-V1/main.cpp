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
    
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare and initialize variables
    char computr;     //The computers move
    char player;      //The players move
    
    //Input the players turn
    do{
        cout<<"What is your move: P, R, or S?"<<endl;
        cin>>player;
        player=toupper(player);
    }while(!(player=='P'||player=='R'||player=='S'));
    
    //Computer generated play
    do{
        computr=rand()%4+80;
    }while(computr=='Q');
    
    //Output the results
    cout<<"The computer played "<<computr<<endl;
    cout<<"The players move "<<player<<endl;
    
    //Exit stage right
    return 0;
}

