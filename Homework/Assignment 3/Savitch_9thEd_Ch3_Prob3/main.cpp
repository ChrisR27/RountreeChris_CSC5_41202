/* 
 * File:   main.cpp
 * Author: Chris Rountree
 * Purpose: Convert numbers to Roman Numerals
 * Created on January 21, 2016, 8:30 AM
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//User Libraries

//Global Constants

//Functional Prototypes

//Execution Begins Here


int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare and initialize variables
    unsigned short number=rand()%2001+1000;     //Range of [1000,3000]
    unsigned char n1000,n100,n10,n1;            //Number of 10^x's
    cout<<"The number to convert = "<<number<<endl;
    
    //Calculate the number of thousands, hundreds, tens, and ones.
    n1000=(number-number%1000)/1000;     //Number of thousands
    number=number-n1000*1000;            //Subtract off thousands
    n100=(number-number%100)/100;        //Number of hundreds
    number=number-n100*100;              //Subtract off hundreds
    n10=(number-number%10)/10;           //Number of tens
    n1=number-n10*10;                    //Number of ones
    
    //Output the number and its components
    cout<<"The number of 1000's = "<<static_cast<int>(n1000)<<endl;
    cout<<"The number of 100's = "<<static_cast<int>(n100)<<endl;
    cout<<"The number of 10's = "<<static_cast<int>(n10)<<endl;
    cout<<"The number of 1's = "<<static_cast<int>(n1)<<endl;
    
    //Output the results
    cout<<"The Roman Numeral equivalent = ";
    
    //Output the 1000's
    switch(n1000){
        case 3: cout<<"M";
        case 2: cout<<"M";
        case 1: cout<<"M";
    }
    
    //Output the 100's
    switch(n100){
        case 9: cout<<"CM";break;
        case 8: cout<<"DCCC";break;
        case 7: cout<<"DCC";break;
        case 6: cout<<"DC";break;
        case 5: cout<<"D";break;
        case 4: cout<<"CD";break;
        case 3: cout<<"C";
        case 2: cout<<"C";
        case 1: cout<<"C";
    }
    
    //Output the 10's
    switch(n10){
        case 9: cout<<"XC";break;
        case 8: cout<<"LXXX";break;
        case 7: cout<<"LXX";break;
        case 6: cout<<"LX";break;
        case 5: cout<<"L";break;
        case 4: cout<<"XL";break;
        case 3: cout<<"X";
        case 2: cout<<"X";
        case 1: cout<<"X";
    }
    
    //Output the 1's
    switch(n1){
        case 9: cout<<"IX";break;
        case 8: cout<<"VIII";break;
        case 7: cout<<"VII";break;
        case 6: cout<<"VI";break;
        case 5: cout<<"V";break;
        case 4: cout<<"IV";break;
        case 3: cout<<"I";
        case 2: cout<<"I";
        case 1: cout<<"I";
    }
    
    //Exit stage right
    return 0;
}

