/* 
 * File:   main.cpp
 * Author: Chris Rountree
 * Purpose: Winning Division
 * Created on February 3, 2016, 11:15 AM
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Functional Prototypes
int getSale(int);
void highest(int, int, int, int);

//Execution Begins Here


int main(int argc, char** argv) {
    //Declare and initialize variables
    int saleNE,saleSE,saleNW,saleSW;  //Sales for the 4 different divisions
    
    //Calling the function to input sales from each region
    saleNE=getSale(1);
    saleSE=getSale(2);
    saleNW=getSale(3);
    saleSW=getSale(4);
    
    //Output the the highest sales division
    highest(saleNE, saleSE, saleNW, saleSW);
    
    //Exit stage right
    return 0;
}

/******************************************************************************/
/**********************Get sales for each division*****************************/
/******************************************************************************/
int getSale(int division){
    //Declare variables
    int tmpSale;        //The input for each division
    
    //Input for each division
    switch(division){
        //Northeast division
        case 1:{
            cout<<"Input the total sales from the Northeast division"<<endl;
            break;
        }//Southeast division
        case 2:{
            cout<<"Input the total sales from the Southeast division"<<endl;
            break;
        }//Northwest division
        case 3:{
            cout<<"Input the total sales from the Northwest division"<<endl;
            break;
        }//Southwest division
        case 4:{
            cout<<"Input the total sales from the Southwest division"<<endl;
            break;
        }
    }
    //Used to input values for each divisions sales
    tmpSale=-1;
    while(tmpSale<0){
        cin>>tmpSale;
    }return tmpSale;
}

/******************************************************************************/
/****************Finding the division with the highest sales*******************/
/******************************************************************************/
void highest(int saleNE, int saleSE, int saleNW, int saleSW){
    //Finding out if Northeast has the highest
    if(saleNE>saleSE && saleNE>saleNW && saleNE>saleSW){
        cout<<"The Northeast division has the highest amount of sales with $"
                <<saleNE<<endl;
    }//Finding out if Southeast has the highest
    if(saleSE>saleNE && saleSE>saleNW && saleSE>saleSW){
        cout<<"The Southeast division has the highest amount of sales with $"
                <<saleSE<<endl;
    }//Finding out if Northwest has the highest
    if(saleNW>saleSE && saleNW>saleNE && saleNW>saleSW){
        cout<<"The Northwest division has the highest amount of sales with $"
                <<saleNW<<endl;
    }//Finding out if Southwest has the highest
    if(saleSW>saleSE && saleSW>saleNE && saleSW>saleNW){
        cout<<"The Southwest division has the highest amount of sales with $"
                <<saleSW<<endl;
    }
}