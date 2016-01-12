/* 
 * File:   main.cpp
 * Author: Chris Rountree
 * Purpose: Check out IDE
 * Created on January 12, 2016, 10:13 AM
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Functional Prototypes

//Execution Begins Here


int main(int argc, char** argv) {
    //Declare and initialize variables
    unsigned short score;
    unsigned short grade;
   
    
    //Input Data
    cout<<"Enter your score from 0-100"<<endl;
    cin>>score;
    
    //Output the results
    switch (score)
    {
        case 100: case 99: case 98: case 97: case 96: case 95:
        case 94: case 93: case 92: case 91: case 90:
            cout<<"You have an A"<<endl; 
        case 89: case 88: case 87: case 86: case 85:
        case 84: case 83: case 82: case 81: case 80:
            cout<<"You have a B"<<endl; 
        case 79: case 78: case 77: case 76: case 75:
        case 74: case 73: case 72: case 71: case 70:
            cout<<"You have a C"<<endl; 
        case 69: case 68: case 67: case 66: case 65:
        case 64: case 63: case 62: case 61: case 60:
            cout<<"You have a D"<<endl; 
        case 59: case 58: case 57: case 56: case 55:
        case 54: case 53: case 52: case 51: case 50:
            cout<<"You have a B"<<endl; 
        case 49: case 48: case 87: case 86: case 85:
        case 84: case 83: case 82: case 81: case 80:
            cout<<"You have a B"<<endl; 
    }
    
    //Exit stage right
    return 0;
}
