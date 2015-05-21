/*
 *  Question1.cpp
 *
 *  Name:           EKORO, EDU IGO
 *  Department:     COMPUTER SCIENCE
 *  Reg. No:     	45305436JC
 *
 *  Program that reads an integer and determines
 *  and prints whether it's odd or even
 *
 *  Stub file to enable you complete assignment #1 - question #1
 */

#include <iostream>
using namespace std;

int main()
{
    // declare variable to hold integer value
    int value;
    
    // display welcome messages to user
    cout << "Welcome - This program reads an integer\n";
    cout << "and determines if it is odd or even\n\n";
    

    cout << "Please enter an integer value -  \n";
    cin >> value;
 
 
	if(value % 2 == 0) {
    cout << " " << value << " is an even number.\n";	// display if even
    }
    else {
    cout << " " << value << " is an odd number.\n";	// display if odd
    }
    
    cout << "\nThanks and Goodbye\n";
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
