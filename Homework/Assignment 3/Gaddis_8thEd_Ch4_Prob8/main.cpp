/* 
 * File:   main.cpp
 * Author: Chris Rountree
 * Purpose: Math Ttutor
 * Created on January 21, 2016, 10:35 PM
 */

//System Libraries
#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Functional Prototypes

//Execution Begins Here


int main(int argc, char** argv) {
    //Set the random number generator
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare and initialize variables
    short seed=999;               //The random number seed mod
    short num1, num2, sum, answer;//Number 1, 2, the sum of those, and the students answer
    
    //Generating the two random numbers and calculating the sum
    num1=1+rand()%seed;
    num2=1+rand()%seed;
    cout<<setw(5)<<num1<<endl;
    cout<<"+ "<<setw(3)<<num2<<endl;
    cout<<"_____"<<endl;
    sum=num1+num2;
    
    //Student answer input
    cout<<"Enter your answer"<<endl;
    cin>>answer;
    
    //Comparing answers
    if(answer==sum){
        cout<<"Congratulations, you got the correct answer!"<<endl;
    }else
        cout<<"Sorry, that is incorrect. The correct answer is: "<<sum<<endl;
    
    //Exit stage right
    return 0;
}

