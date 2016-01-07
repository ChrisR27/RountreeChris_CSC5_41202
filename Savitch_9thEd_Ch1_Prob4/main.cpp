/* 
 * Author: Chris Rountree
 * Created on January 7, 2016, 10:43 AM
 * Purpose:  How far to drop?
 */

//System Libraries
#include <iostream>     //Input/Output functions
#include <cstdlib>      //Standard library
#include <cmath>        //Math library
#include <ctime>        //Time to set random seed
#include <iomanip>      //Format library
#include <fstream>      //Reading/writing to a file
using namespace std;

//User Libraries

//Global Constant
const float GRAVITY=32.174f;    //Gravity on earth in feet/second^2

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare variables
    ofstream out;                   //Declare a file stream object called out
    float drpTime,distance;         //Time to drop and distance dropped
    
    //Input the drop time range and opening a file
    drpTime=rand()%11+10;           //[10,20] secs
    const int SIZE=21;
    char fileNam[SIZE]="DropDistance.dat";
    out.open(fileNam);
    
    //Calculate the distance you fall
    distance=0.5f*GRAVITY*drpTime*drpTime;
    
    //Output the results
    cout<<"Drop Time = "<<drpTime<<" sec"<<endl;
    cout<<fixed<<setprecision(3)<<showpoint;   //Format the decimal to 3 spaces
    cout<<"Free Fall Distance = "<<distance<<" feet"<<endl;
    
    //Output the results to a file
    out<<fixed<<setprecision(3)<<showpoint;   //Format the decimal to 3 spaces
    out<<"Free Fall Distance = "<<distance<<" feet"<<endl;
    
    //Exit stage right make sure to close files
    out.close();
    return 0;
}