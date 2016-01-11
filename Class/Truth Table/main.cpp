/* 
 * File:   main.cpp
 * Author: Chris Rountree
 * Purpose: Display truth table and complete swaps
 * Created on January 11, 2016, 9:00 AM
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
    bool x=true;
    bool y=true;
    
    //Create Heading
    cout<<"X Y !X !Y X&&Y X||Y X^Y (X^Y)^Y (X^Y)^X ";
    cout<<"!(X&&Y) !X||!Y !(X||Y) !X&&!Y)"<<endl;
    
    //First row
    cout<<(x?'T':'F')<<" ";        
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"   ";
    cout<<(x&&y?'T':'F')<<"    ";
    cout<<(x||y?'T':'F')<<"   ";
    cout<<(x^y?'T':'F')<<"      ";
    cout<<((x^y)^y?'T':'F')<<"       ";
    cout<<((x^y)^x?'T':'F')<<"      ";
    cout<<(!(x&&y)?'T':'F')<<"       ";
    cout<<(!x||!y?'T':'F')<<"      ";
    cout<<(!(x||y)?'T':'F')<<"       ";
    cout<<(!x&&!y?'T':'F')<<endl;
    
    //Second row
    x=true;y=false;
    cout<<(x?'T':'F')<<" ";        
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"   ";
    cout<<(x&&y?'T':'F')<<"    ";
    cout<<(x||y?'T':'F')<<"   ";
    cout<<(x^y?'T':'F')<<"      ";
    cout<<((x^y)^y?'T':'F')<<"       ";
    cout<<((x^y)^x?'T':'F')<<"      ";
    cout<<(!(x&&y)?'T':'F')<<"       ";
    cout<<(!x||!y?'T':'F')<<"      ";
    cout<<(!(x||y)?'T':'F')<<"       ";
    cout<<(!x&&!y?'T':'F')<<endl;
            
    //Third row
    x=false;y=true;
    cout<<(x?'T':'F')<<" ";        
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"   ";
    cout<<(x&&y?'T':'F')<<"    ";
    cout<<(x||y?'T':'F')<<"   ";
    cout<<(x^y?'T':'F')<<"      ";
    cout<<((x^y)^y?'T':'F')<<"       ";
    cout<<((x^y)^x?'T':'F')<<"      ";
    cout<<(!(x&&y)?'T':'F')<<"       ";
    cout<<(!x||!y?'T':'F')<<"      ";
    cout<<(!(x||y)?'T':'F')<<"       ";
    cout<<(!x&&!y?'T':'F')<<endl;
            
    //Fourth row
    x=false;y=false;
    cout<<(x?'T':'F')<<" ";        
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"   ";
    cout<<(x&&y?'T':'F')<<"    ";
    cout<<(x||y?'T':'F')<<"   ";
    cout<<(x^y?'T':'F')<<"      ";
    cout<<((x^y)^y?'T':'F')<<"       ";
    cout<<((x^y)^x?'T':'F')<<"      ";
    cout<<(!(x&&y)?'T':'F')<<"       ";
    cout<<(!x||!y?'T':'F')<<"      ";
    cout<<(!(x||y)?'T':'F')<<"       ";
    cout<<(!x&&!y?'T':'F')<<endl<<endl;
            
    //Swap using temp
    unsigned char a=2,b=3,temp;
    cout<<"a= "<<static_cast<int>(a)<<endl;
    cout<<"b= "<<static_cast<int>(b)<<endl;
    temp=a;
    a=b;
    b=temp;
    cout<<"a= "<<static_cast<int>(a)<<endl;
    cout<<"b= "<<static_cast<int>(b)<<endl<<endl;
    
    //Swap using exclusive or operator
    cout<<"a= "<<static_cast<int>(a)<<endl;
    cout<<"b= "<<static_cast<int>(b)<<endl;
    a=a^b;
    b=a^b;
    a=a^b;
    cout<<"a= "<<static_cast<int>(a)<<endl;
    cout<<"b= "<<static_cast<int>(b);
    
    //Exit stage right
    return 0;
}
