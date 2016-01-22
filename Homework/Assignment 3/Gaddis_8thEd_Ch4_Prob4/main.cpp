/* 
 * File:   main.cpp
 * Author: Chris Rountree
 * Purpose: Areas of Rectangles
 * Created on January 21, 2016, 6:44 PM
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
    float length1,length2,width1,width2,area1,area2;//Lengths, widths, and areas
    
    //Input Data
    cout<<"Enter the length of the first rectangle:"<<endl;
    cin>>length1;
    cout<<"Enter the width of the first rectangle:"<<endl;
    cin>>width1;
    cout<<"Enter the length of the second rectangle:"<<endl;
    cin>>length2;
    cout<<"Enter the width of the second rectangle:"<<endl;
    cin>>width2;
    
    //Calculate the areas of the rectangles
    area1=length1*width1;
    area2=length2*width2;
    
    //Outputting the areas and which is larger
    cout<<"The area of the first rectangle = "<<area1<<endl;
    cout<<"The area of the second rectangle = "<<area2<<endl;
    if(area1>area2){
        cout<<"The first rectangle is larger."<<endl;
    }else if(area1==area2){
        cout<<"The rectangles have equal area."<<endl;
    }else
        cout<<"The second rectangle is larger."<<endl;
    
    //Exit stage right
    return 0;
}

