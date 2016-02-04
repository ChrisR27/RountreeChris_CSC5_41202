/* 
 * File:   main.cpp
 * Author: Chris Rountree
 * Purpose: Safest Driving Area
 * Created on February 4, 2016, 9:00 AM
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Functional Prototypes
int nAccdnt(int);
void lowest(int, int, int, int, int);

//Execution Begins Here


int main(int argc, char** argv) {
    //Declare and initialize variables
    int north,south,east,west,central;      //The five different regions
    
    //Calling the function to input accidents from each region
    north=nAccdnt(1);
    south=nAccdnt(2);
    east=nAccdnt(3);
    west=nAccdnt(4);
    central=nAccdnt(5);
    
    //Output the the region with the lowest accident rate
    lowest(north, south, east, west, central);
    
    //Exit stage right
    return 0;
}

/******************************************************************************/
/**********************Get accidents for each region***************************/
/******************************************************************************/
int nAccdnt(int region){
    //Declare variables
    int accdnts;        //The accidents for each region
    
    //Input for each division
    switch(region){
        //Northern region
        case 1:{
            cout<<"Input the total accidents from the Northern region"<<endl;
            break;
        }//Southern region
        case 2:{
            cout<<"Input the total accidents from the Southern region"<<endl;
            break;
        }//Eastern region
        case 3:{
            cout<<"Input the total accidents from the Eastern region"<<endl;
            break;
        }//Western region
        case 4:{
            cout<<"Input the total accidents from the Western region"<<endl;
            break;
        }//Central region
        case 5:{
            cout<<"Input the total accidents from the Central region"<<endl;
            break;
        }
    }
    //Used to input values for each divisions sales
    accdnts=-1;
    while(accdnts<0){
        cin>>accdnts;
    }return accdnts;
}

/******************************************************************************/
/****************Finding the region with the least accidents*******************/
/******************************************************************************/
void lowest(int north, int south, int east, int west, int central){
    //Finding out if the Northern region has the least accidents
    if(north<south && north<east && north<west && north<central){
        cout<<"The Northern region has the least amount of accidents with "
                <<north<<endl;
    }//Finding out if the Southern region has the least accidents
    if(south<north && south<east && south<west && south<central){
        cout<<"The Southern region has the least amount of accidents with "
                <<south<<endl;
    }//Finding out if the Eastern region has the least accidents
    if(east<south && east<north && east<west && east<central){
        cout<<"The Eastern region has the least amount of accidents with "
                <<east<<endl;
    }//Finding out if the Western region has the least accidents
    if(west<south && west<north && west<east && west<central){
        cout<<"The Western region has the least amount of accidents with "
                <<west<<endl;
    }//Finding out if the Central region has the least accidents
    if(central<south && central<north && central<east && central<west){
        cout<<"The Central region has the least amount of accidents with "
                <<central<<endl;
    }
}