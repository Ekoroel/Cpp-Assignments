/*
 *  Question5.cpp
 *
 *  Name:           EKORO, EDU IGO
 *  Department:     COMPUTER SCIENCE
 *  Reg. No:     	45305436JC
 *
 *  Program that calculates the squares and cubes of the integers from 0 to 10
 *
 *  Stub file to enable you complete assignment #1 - question #5
 */

#include <iostream>
#include <math.h>   // library to use pow() function to calculate squares and cubes
using namespace std;

int main()
{
    
    // display welcome messages to user
    cout << "Welcome - This program calculates the squares and cubes\n";
    cout << "of the integers from 0 to 10 and prints using tabs\n\n";
    
	// Print the table    
    int num;
    num = 0;
  	cout  << "\n\tNUMBER\tSQUARE\tCUBE\n";
	cout << "\t" << num << "\t" << pow(num, 2) << "\t" << pow(num, 3) << "\n"; 
	num = 1;
	cout << "\t" << num << "\t" << pow(num, 2) << "\t" << pow(num, 3) << "\n"; 
	num = 2;
	cout << "\t" << num << "\t" << pow(num, 2) << "\t" << pow(num, 3) << "\n"; 
	num = 3;
	cout << "\t" << num << "\t" << pow(num, 2) << "\t" << pow(num, 3) << "\n"; 
	num = 4;
	cout << "\t" << num << "\t" << pow(num, 2) << "\t" << pow(num, 3) << "\n"; 
	num = 5;
	cout << "\t" << num << "\t" << pow(num, 2) << "\t" << pow(num, 3) << "\n"; 
	num = 6;
	cout << "\t" << num << "\t" << pow(num, 2) << "\t" << pow(num, 3) << "\n"; 
	num = 7;
	cout << "\t" << num << "\t" << pow(num, 2) << "\t" << pow(num, 3) << "\n"; 
	num = 8;
	cout << "\t" << num << "\t" << pow(num, 2) << "\t" << pow(num, 3) << "\n"; 
	num = 9;
	cout << "\t" << num << "\t" << pow(num, 2) << "\t" << pow(num, 3) << "\n";  
	num = 10;
	cout << "\t" << num << "\t" << pow(num, 2) << "\t" << pow(num, 3) << "\n";  	
    
    
    cout << "\nThanks and Goodbye\n";
    
    system("PAUSE");
    return EXIT_SUCCESS;
}

