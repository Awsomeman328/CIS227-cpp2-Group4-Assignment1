/*
 * CIS227-cpp-Group4-Assignment1.cpp
 * 
 * Author: Chris Rodela
 */

#include <iostream>
#include "ValidateDoubleFromString.h"
#include "Calculations.h"

using namespace std;

int main()
{
	float a;
	float b;
	float c;
	float h;
	int choice;

	cout << "Press 1 for the hypothenuse of a right triangle" << endl;
	cout << "Press 2 for the area of a trapezoid" << endl;
	cout << "Press 3 for the volume of a rectangular prism" << endl;
	cin >> choice;

	switch (choice) {
	case 1: {
		//the hypotenuse of a triangle
		cout << "To calculate the hypotenuse of a right triangle, enter the length of the two legs." << endl;
		cout << "Enter the length of the first leg: ";
		cin >> a;
		cout << "Enter the length of the second leg: ";
		cin >> b;
		c = sqrt((a * a) + (b * b));
		cout << "The length of the hypotenuse is: " << c << endl;
		cout << "*************************************************" << endl;
		break;
	}
	case 2: {
		//the area of a trapezoid
		cout << "To calculate the area of a trapezoid, enter the length of the two parallel sides and the height." << endl;
		cout << "Enter the length of the first parallel side: ";
		cin >> a;
		cout << "Enter the length of the second parallel side: ";
		cin >> b;
		cout << "Enter the height: ";
		cin >> h;
		c = ((a + b) / 2) * h;
		cout << "The area of the trapezoid is: " << c << endl;
		cout << "*************************************************" << endl;
		break;
	}
	case 3: {
		//the volume of a rectangle
		cout << "To calculate the volume of a rectangle, enter the length, width, and height." << endl;
		cout << "Enter the length: ";
		cin >> a;
		cout << "Enter the width: ";
		cin >> b;
		cout << "Enter the height: ";
		cin >> h;
		c = a * b * h;
		cout << "The volume of the rectangle is: " << c << endl;
		cout << "*************************************************" << endl;
		break;
	}
	default: {
		cout << "Invalid choice" << endl;
		break;
	}
	}
}




