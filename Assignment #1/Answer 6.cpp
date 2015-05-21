/*
 *  Question6.cpp
 *
 *  Name:           EKORO, EDU IGO
 *  Department:     COMPUTER SCIENCE
 *  Reg. No:     	45305436JC
 *
 *  Body Mass Index (BMI) calculator application that reads
 *  the user's weight in kilograms and height in meters,
 *  calculates and display the user's body mass index
 *
 *  Stub file to enable you complete assignment #1 - question #6
 */

#include <iostream>
using namespace std;

int main()
{
    // Variable declaration
    double weightInKilograms;
    double heightInMeters;
    double BMI;
    
    // display welcome messages to user
    cout << "Welcome - This Body Mass Index (BMI) calculator application that reads\n";
    cout << "the user's weight in kilograms and height in meters,\n";
    cout << "calculates and display the user''s body mass index\n\n";
    
    // display information from the Department of Health and Human Services
    
	cout << "\tBMI Information from the Department of Health and Human Services:\n";
	cout << "\t- Underweight: less than 18.5\n";
	cout << "\t- Normal: between 18.5 and 24.9\n";
	cout << "\t- Overweight: between 25 and 29.9\n";
	cout << "\t- Obese: 30 and greater\n";
	cout << "\n";
    
    // read in values
    cout << "Enter weight (in kilograms): ";
    cin >> weightInKilograms;
    cout << "Enter height (in meters): ";
    cin >> heightInMeters;
    
    // calculate BMI
	BMI = weightInKilograms / (heightInMeters * heightInMeters);
    
    // display result
	cout << "\n\tYour BMI: " << BMI << endl;

    
    cout << "\n\nThanks and Goodbye\n";
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
