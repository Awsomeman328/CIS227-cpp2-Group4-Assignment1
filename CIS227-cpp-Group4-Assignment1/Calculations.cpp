/*
 * Calculations.cpp
 *
 * Author: Mike Dolan
 */

#include "Calculations.h"

//function to calculate hypotenuse
float hypot(float a, float b)
{
	return sqrt((pow(a, 2) + pow(b, 2)));
}

//function to calculate area of trapezoid
float area(float a, float b, float h)
{
	return ((a + b) / 2 * h);
}

//function to calculate volume of rectangular prism
float volume(float length, float width, float height)
{
	return length * width * height;
}