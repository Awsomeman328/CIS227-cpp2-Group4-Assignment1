/*
 * CIS227-cpp-Group4-Assignment1.cpp
 *
 * Author: Chris Rodela
 */

#include <iostream>
#include <string>
#include "ValidateDoubleFromString.h"
#include "Calculations.h"

using namespace std;

int main()
{
	double a;
	double b;
	double c;
	double h;
	string choice;
	bool isRunning = true;
	bool isValid;
	bool isInputValid;


	while (isRunning) {
		cout << "Press 1 for the hypothenuse of a right triangle" << endl;
		cout << "Press 2 for the area of a trapezoid" << endl;
		cout << "Press 3 for the volume of a rectangular prism" << endl;
		cout << "Press 4 to exit" << endl;
		cin >> choice;

		do {
			if (isStringAValidDouble(choice)) {
				isValid = true;
			}
			else {
				cout << "Please enter a valid input [Must be a number]" << endl;
				cout << "Press 1 for the hypothenuse of a right triangle" << endl;
				cout << "Press 2 for the area of a trapezoid" << endl;
				cout << "Press 3 for the volume of a rectangular prism" << endl;
				cout << "Press 4 to exit" << endl;
				cin >> choice;
				isValid = false;
			}
		} while (!isValid);



		switch (stoi(choice)) {
		case 1: {
			//the hypotenuse of a triangle
			cout << "To calculate the hypotenuse of a right triangle, enter the length of the two legs." << endl;
			isInputValid = false;
			while (!isInputValid)
			{
				cout << "Please enter the triangle's first leg:\n";
				cin >> choice;
				isInputValid = isStringAValidDouble(choice);
				if (isInputValid == NULL)
				{
					cout << "Please enter a valid input [Cannot be empty]\n";
					isInputValid = false;
				}
				else if (isInputValid)
				{
					cout << "Please enter a valid input [Must be a number]\n";
				}
			}
			a = stod(choice);
			isInputValid = false;
			while (!isInputValid)
			{
				cout << "Please enter the triangle's second leg:\n";
				cin >> choice;
				isInputValid = isStringAValidDouble(choice);
				if (isInputValid == NULL)
				{
					cout << "Please enter a valid input [Cannot be empty]\n";
					isInputValid = false;
				}
				else if (isInputValid)
				{
					cout << "Please enter a valid input [Must be a number]\n";
				}
			}
			b = stod(choice);
			c = hypot(a, b);
			cout << "The length of the hypotenuse is: " << c << endl;
			cout << "*************************************************" << endl;
			break;
		}
		case 2: {
			//the area of a trapezoid
			cout << "To calculate the area of a trapezoid, enter the length of the two parallel sides and the height." << endl;
			isInputValid = false;
			while (!isInputValid)
			{
				cout << "Enter the length of the first parallel side:\n";
				cin >> choice;
				isInputValid = isStringAValidDouble(choice);
				if (isInputValid == NULL)
				{
					cout << "Please enter a valid input [Cannot be empty]\n";
					isInputValid = false;
				}
				else if (isInputValid)
				{
					cout << "Please enter a valid input [Must be a number]\n";
				}
			}
			a = stod(choice);
			isInputValid = false;
			while (!isInputValid)
			{
				cout << "Enter the length of the second parallel side:\n";
				cin >> choice;
				isInputValid = isStringAValidDouble(choice);
				if (isInputValid == NULL)
				{
					cout << "Please enter a valid input [Cannot be empty]\n";
					isInputValid = false;
				}
				else if (isInputValid)
				{
					cout << "Please enter a valid input [Must be a number]\n";
				}
			}
			b = stod(choice);
			isInputValid = false;
			while (!isInputValid)
			{
				cout << "Please enter the height:\n";
				cin >> choice;
				isInputValid = isStringAValidDouble(choice);
				if (isInputValid == NULL)
				{
					cout << "Please enter a valid input [Cannot be empty]\n";
					isInputValid = false;
				}
				else if (isInputValid)
				{
					cout << "Please enter a valid input [Must be a number]\n";
				}
			}
			h = stod(choice);
			c = area(a, b, h);
			cout << "The area of the trapezoid is: " << c << endl;
			cout << "*************************************************" << endl;
			break;
		}
		case 3: {
			//the volume of a rectangle
			cout << "To calculate the volume of a rectangle, enter the length, width, and height." << endl;
			isInputValid = false;
			while (!isInputValid)
			{
				cout << "Please enter the length:\n";
				cin >> choice;
				isInputValid = isStringAValidDouble(choice);
				if (isInputValid == NULL)
				{
					cout << "Please enter a valid input [Cannot be empty]\n";
					isInputValid = false;
				}
				else if (isInputValid)
				{
					cout << "Please enter a valid input [Must be a number]\n";
				}
			}
			a = stod(choice);
			isInputValid = false;
			while (!isInputValid)
			{
				cout << "Please enter the width:\n";
				cin >> choice;
				isInputValid = isStringAValidDouble(choice);
				if (isInputValid == NULL)
				{
					cout << "Please enter a valid input [Cannot be empty]\n";
					isInputValid = false;
				}
				else if (isInputValid)
				{
					cout << "Please enter a valid input [Must be a number]\n";
				}
			}
			b = stod(choice);
			isInputValid = false;
			while (!isInputValid)
			{
				cout << "Please enter the height:\n";
				cin >> choice;
				isInputValid = isStringAValidDouble(choice);
				if (isInputValid == NULL)
				{
					cout << "Please enter a valid input [Cannot be empty]\n";
					isInputValid = false;
				}
				else if (isInputValid)
				{
					cout << "Please enter a valid input [Must be a number]\n";
				}
			}
			h = stod(choice);
			c = volume(a, b, h);
			cout << "The volume of the rectangle is: " << c << endl;
			cout << "*************************************************" << endl;
			break;
		}
		case 4: {
			cout << "Goodbye!" << endl;
			isRunning = false;
			break;
		}
		default: {
			cout << "Invalid choice,please try again." << endl;
		}
		}
	}
}