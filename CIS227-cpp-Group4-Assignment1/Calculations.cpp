/*
 * Calculations.cpp
 *
 * Author: Mike Dolan
 */

#include "Calculations.h"

//function to calculate hypotenuse
double hypot(double a, double b)
{
	return sqrt((pow(a, 2) + pow(b, 2)));
}

//function to calculate area of trapezoid
double area(double a, double b, double h)
{
	return ((a + b) / 2 * h);
}

//function to calculate volume of rectangular prism
double volume(double length, double width, double height)
{
	return length * width * height;
}