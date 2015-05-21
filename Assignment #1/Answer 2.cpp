/*
 *  Question2.cpp
 *
 *  Name:           EKORO, EDU IGO
 *  Department:     COMPUTER SCIENCE
 *  Reg. No:     	45305436JC
 *
 *  Program that reads two integers and determines
 *  if first is a multiple of second
 *
 *  Stub file to enable you complete assignment #1 - question #2
 */

#include <iostream>
using namespace std;

int main()
{
    // Variable declaration
    int firstInteger;
    int secondInteger;
    
    // display welcome messages to user
    cout << "Welcome - This program reads two integers\n";
    cout << "and determines if first is a multiple of second\n\n";
    
    // Read first integer
    cout << "Enter first integer value -  \n";
    cin >> firstInteger;
    
    // Read second integer
    cout << "Enter second integer value -  \n";
    cin >> secondInteger;
    
    // Determine if first is a multiple of second
    if(firstInteger % secondInteger == 0){
    cout << "\n  " << firstInteger << " is a multiple of " << secondInteger << endl;	// display if it is a multiple
    }
    else {
    cout << "\n  " << firstInteger << " is not a multiple of " << secondInteger << endl;	// display if it is not a multiple
    }
    
    cout << "\nThanks and Goodbye\n";
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
