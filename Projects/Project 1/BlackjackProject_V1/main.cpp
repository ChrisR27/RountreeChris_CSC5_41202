/* 
 * File:   main.cpp
 * Author: Chris Rountree
 * Purpose: Blackjack Project V1
 * Created on January 26, 2016, 11:00 AM
 */

//System Libraries
#include <iostream>     //I/O
#include <cstdlib>      //Srand and rand function
#include <ctime>        //Time to set the random number seed
using namespace std;

//User Libraries

//Global Constants

//Functional Prototypes

//Execution Begins Here


int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare and initialize variables
    const unsigned short MAXCARD=13000;          //Max number of card plays
    
   //Frequency of the cards
    unsigned short frq2=0,frq3=0,frq4=0,frq5=0,frq6=0;
    unsigned short frq7=0,frq8=0,frq9=0,frq10=0,frq11=0,frq12=0,frq13=0,frq14=0;
    unsigned short total;
    
    //Input Data
    
    //Play the cards
    for(int turns=1;turns<=MAXCARD;turns++){
        char card=rand()%13+2;        //Number between [2,14]
        switch(card){
            case 2:frq2++;break;
            case 3:frq3++;break;
            case 4:frq4++;break;
            case 5:frq5++;break;
            case 6:frq6++;break;
            case 7:frq7++;break;
            case 8:frq8++;break;
            case 9:frq9++;break;
            case 10:frq10++;break;
            case 11:frq10++;break;
            case 12:frq10++;break;
            case 13:frq10++;break;
            case 14:frq14++;break;
            default:cout<<"Not Possible"<<endl;
        }
    }
    total=frq2+frq3+frq4+frq5+frq6+frq7+frq8+frq9+frq10+frq11+frq12+frq13+frq14;
    
    //Output the results
    cout<<"The card statistics are:"<<endl;
    cout<<"2 was shown "<<frq2<<" times"<<endl;
    cout<<"3 was shown "<<frq3<<" times"<<endl;
    cout<<"4 was shown "<<frq4<<" times"<<endl;
    cout<<"5 was shown "<<frq5<<" times"<<endl;
    cout<<"6 was shown "<<frq6<<" times"<<endl;
    cout<<"7 was shown "<<frq7<<" times"<<endl;
    cout<<"8 was shown "<<frq8<<" times"<<endl;
    cout<<"9 was shown "<<frq9<<" times"<<endl;
    cout<<"10 was shown "<<frq10<<" times"<<endl;
    cout<<"11 was shown "<<frq11<<" times"<<endl;
    cout<<"12 was shown "<<frq12<<" times"<<endl;
    cout<<"13 was shown "<<frq13<<" times"<<endl;
    cout<<"14 was shown "<<frq14<<" times"<<endl;
    cout<<"The total cards being shown = "<<total<<endl;
    
    //Exit stage right
    return 0;
}

