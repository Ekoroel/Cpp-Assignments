/*
 *  Question4.cpp
 *
 *  Name:           EKORO, EDU IGO
 *  Department:     COMPUTER SCIENCE
 *  Reg. No:     	45305436JC
 *
 *  Program that inputs a five-digit integer,
 *  separates the integer into its digits and prints them separated by three spaces each
 *
 *  Stub file to enable you complete assignment #1 - question #4
 */

#include <iostream>
#include <string>

using namespace std;

int main()
{
    // Variable declaration
    int digits;
    
    // display welcome messages to user
    cout << "Welcome - This program reads a five-digit integer\n";
    cout << "separates the integer into its digits and prints them\n";
    cout << "separated by three spaces each\n\n";
    
    // TODO: Read integer using cin
    cout << "Enter five digit integer value -  ";
    cin >> digits;
    
    // check if digit is a five digit integer
    
    /* a bug in the common MinGW compiler doesn't allow to_string()
    so instead, I use a simple logic */
    if (digits < 10000 || digits > 99999)
    {
        cout << "\nERROR - Please enter a five digit integer\n";
    } else {
        // Separate the integer into its digits and prints them separated by three spaces each
        cout << "\n\t";
 
		cout << digits / 10000 << "   ";
 
 		digits = digits % 10000;
 		cout << digits / 1000 << "   ";
 
 		digits = digits % 1000;
 		cout << digits / 100 << "   ";
 
 		digits = digits % 100;
 		cout << digits / 10 << "   ";
 
 		digits = digits % 10;
 		cout << digits << endl;
    
    }
    
    cout << "\nThanks and Goodbye\n";
    
    system("PAUSE");
    return EXIT_SUCCESS;
}

