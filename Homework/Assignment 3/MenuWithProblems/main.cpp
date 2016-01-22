/* 
 * File:   main.cpp
 * Author: Chris Rountree
 * Purpose: Menu
 * Created on January 19, 2016, 8:33 AM
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
    unsigned short nSolutn;        //Problem solution to display
    bool reDsply=true;             //Exit program when false
    
    //Menu to display solution
    do{
        //Input Problem to display, i.e. Menu
        cout<<"Assignment 3 Problem Set"<<endl;
        cout<<"Type 1 to Savitch 8thEd Ch2 Prob10"<<endl;
        cout<<"Type 1 to display problem 2"<<endl;
        cout<<"Type 1 to display problem 3"<<endl;
        cout<<"Type anything else to exit"<<endl<<endl;
        cin>>nSolutn;
        //Solutions to all the problems
        switch(nSolutn){
            case 1:{
                cout<<endl<<"Solution to Savitch 8thEd Ch2 Prob10";
                cout<<endl<<"The Fibonacci Sequence"<<endl<<endl;
                //Declare variables
                unsigned int fi,fim1,fim2;  //Designations in the sequence
                unsigned short nTerms;      //Number of terms in the sequence
                unsigned short counter;     //Current position in the sequence
                //Initialize the sequence
                fim2=fim1=1;                //Start the sequence
                counter=2;                  //Initialize the counter
                //Input the number of terms in the sequence
                cout<<"Input the number of terms in the sequence"<<endl;
                cin>>nTerms;
                //Output or Calculate the output required
                if(nTerms==1){
                    cout<<"Term "<<nTerms<<" in the sequence = "
                            <<fim2<<endl<<endl;
                }else if(nTerms==2){
                    cout<<"Term "<<nTerms<<" in the sequence = "
                            <<fim2<<endl<<endl;
                }else{
                    do{
                        fi=fim1+fim2;
                        counter++;
                        fim2=fim1;
                        fim1=fi;
                    }while(counter<nTerms);
                    cout<<"Term "<<nTerms<<" in the sequence= "<<fi<<endl<<endl;
                }
                break;
            }
            case 2:{
                cout<<endl<<"Solution to problem 2"<<endl<<endl;
                break;
            }
            case 3:{
                cout<<endl<<"Solution to problem 3"<<endl<<endl;
                break;
            }
            default:{
                cout<<endl<<"Exiting the program"<<endl;
                reDsply=false;
            }
        }
    }while(reDsply);
    
    //Output the results
    
    //Exit stage right
    return 0;
}