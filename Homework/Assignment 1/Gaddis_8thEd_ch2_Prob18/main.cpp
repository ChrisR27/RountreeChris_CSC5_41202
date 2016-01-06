/* 
 * Author: Chris Rountree
 * Created on January 6, 2016, 9:38 AM
 * Purpose:  Calculate customers who purchase energy and citrus drinks
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constant
const char cnvPerc=100;//Conversion to percentage

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare and initialize variables
    unsigned short cstSrvy=16500;  //Customers Surveyed
    unsigned char peDrnk=15;       //Percentage Surveyed energy drinkers
    unsigned char pcDrnk=58;       //Percentage Surveyed energy citrus drinkers
    unsigned short neDrnk,ncDrnk;  //Number of energy and citrus energy drinkers
    
    //Calculate the number of drinkers
    neDrnk=cstSrvy*peDrnk/cnvPerc;
    ncDrnk=neDrnk*pcDrnk/cnvPerc;
    
    //Output the results
    cout<<"Number of customers surveyed = "<<cstSrvy<<endl;
    cout<<"Percentage of surveyed energy drinkers = "<<static_cast<int>(peDrnk)<<"%"<<endl;
    cout<<"Percentage of surveyed energy citrus drinkers = "<<static_cast<int>(pcDrnk)<<"%"<<endl;
    cout<<"Number of energy drinkers = "<<neDrnk<<endl;
    cout<<"Number of energy citrus drinkers = "<<ncDrnk<<endl;
    
    
    //Exit stage right
    return 0;
}