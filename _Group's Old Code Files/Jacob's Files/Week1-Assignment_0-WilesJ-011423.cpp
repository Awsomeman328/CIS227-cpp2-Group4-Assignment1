// Test.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

// A function used to determine if a given string is a valid double. Returns the resulting boolean.
bool isStringAValidDouble(std::string inString)
{
    if (inString.empty())
    {
        std::cout << "Please enter a valid input [Cannot be empty]\n";
        return false;
    }
    else
    {
        // Check each character in the string if it is either the first '.' or any non-number character. If so then return false.
        int numDots = 0;
        for (size_t i = 0; i < inString.size(); i++)
        {
            // The last argument in this if statement is to catch if the user inputs only "." which caused the program to crash before.
            if (inString[i] == '.' && numDots == 0 && inString != ".")
            {
                numDots++;
            }
            else if (!isdigit(inString[i]))
            {
                std::cout << "Please enter a valid input [Must be a number]\n";
                return false;
            }
        }
    }
    return true;
}

int main()
{
    // Variables
    std::string input;
    bool isInputValid;

    // Using long doubles to account for any large numbers the user may throw at this program.
    // However, if using a long double over a float only adds the accuracy to the number of digits
    // after the dot in the number and not actually increase the number range like it does for int,
    // then using floats instead is the correct choice. But for now I'll stick with this until I know.
    long double triHeight;
    long double triWidth;
    long double triHypotenuse;

    long double trapBaseA;
    long double trapBaseB;
    long double trapHeight;
    long double trapArea;

    long double prismLength;
    long double prismWidth;
    long double prismHeight;
    long double prismVolume;
    // Of course, I don't need to declare all 11 of these variables, I COULD get away with only 4 since that is as many as I use at once in any of the calculations.
    // But I want to avoid reusing variables when possible so as to avoid any possible mistakes with either my code or the computer not updating a variable properly.

    // Part 1.1: Start of the Program
    std::cout << "Hello! Welcome to Jacob W's Week 1 C++2 HW Assingment!\n";
    std::cout << "This program is designed to calculate the hypotenuse of a right-angled triangle, the area of a trapizoid, "
        "and the volume of a rectangular prism after recieving input from you the user.\n";
    std::cout << "\n";

    // Part 1.2: Calculating the Hypotenuse of a Right-Angled Triangle
    std::cout << "Now starting the calculation of the hypotenuse of a right-angled triangle.\n";
    // Keep asking for the triangle's height until we get a valid answer.
    isInputValid = false;
    while (!isInputValid)
    {
        std::cout << "Please enter the triangle's height:\n";
        std::cin >> input;
        isInputValid = isStringAValidDouble(input);
    }
    triHeight = std::stod(input);
    std::cout << "\n";
    // Keep asking for the triangle's width until we get a valid answer.
    isInputValid = false;
    while (!isInputValid)
    {
        std::cout << "Please enter the triangle's width:\n";
        std::cin >> input;
        isInputValid = isStringAValidDouble(input);
    }
    triWidth = std::stod(input);
    std::cout << "\n";
    // Calculate the hypotenuse!
    triHypotenuse = sqrt( (triHeight * triHeight) + (triWidth * triWidth) );
    std::cout << "The calculated hypotenuse for a right-angled triangle with a height of " << triHeight << " and a width of " << triWidth << " is: " << triHypotenuse << "\n";
    std::cout << "\n";

    // Part 1.3: Calculating the area of a Trapezoid
    std::cout << "Now starting the calculation of the area of a trapezoid.\n";
    // Keep asking for the trapezoid's base A until we get a valid answer.
    isInputValid = false;
    while (!isInputValid)
    {
        std::cout << "Please enter the trapezoid's base A:\n";
        std::cin >> input;
        isInputValid = isStringAValidDouble(input);
    }
    trapBaseA = std::stod(input);
    std::cout << "\n";
    // Keep asking for the trapezoid's base B until we get a valid answer.
    isInputValid = false;
    while (!isInputValid)
    {
        std::cout << "Please enter the trapezoid's base B:\n";
        std::cin >> input;
        isInputValid = isStringAValidDouble(input);
    }
    trapBaseB = std::stod(input);
    std::cout << "\n";
    // Keep asking for the trapezoid's height until we get a valid answer.
    isInputValid = false;
    while (!isInputValid)
    {
        std::cout << "Please enter the trapezoid's height:\n";
        std::cin >> input;
        isInputValid = isStringAValidDouble(input);
    }
    trapHeight = std::stod(input);
    std::cout << "\n";
    // Calculate the area!
    trapArea = (trapBaseA + trapBaseB) * trapHeight / 2;
    std::cout << "The calculated area of a trapezoid with the bases " << trapBaseA << " and  " << trapBaseB << " with the height of " << trapHeight << " is: " << trapArea << "\n";
    std::cout << "\n";

    // Part 1.4: Calculating the Volume of a Rectangular Prism
    std::cout << "Now starting the calculation of the volume of a rectangular prism.\n";
    // Keep asking for the prism's length until we get a valid answer.
    isInputValid = false;
    while (!isInputValid)
    {
        std::cout << "Please enter the prism's length:\n";
        std::cin >> input;
        isInputValid = isStringAValidDouble(input);
    }
    prismLength = std::stod(input);
    std::cout << "\n";
    // Keep asking for the prism's width until we get a valid answer.
    isInputValid = false;
    while (!isInputValid)
    {
        std::cout << "Please enter the prism's width:\n";
        std::cin >> input;
        isInputValid = isStringAValidDouble(input);
    }
    prismWidth = std::stod(input);
    std::cout << "\n";
    // Keep asking for the prism's height until we get a valid answer.
    isInputValid = false;
    while (!isInputValid)
    {
        std::cout << "Please enter the prism's height:\n";
        std::cin >> input;
        isInputValid = isStringAValidDouble(input);
    }
    prismHeight = std::stod(input);
    std::cout << "\n";
    // Calculate the area!
    prismVolume = prismLength * prismWidth * prismHeight;
    std::cout << "The calculated volume of a recangular prism with a length " << prismLength << ", a width  " << prismWidth << ", and a height " << prismHeight << " is: " << prismVolume << "\n";
    std::cout << "\n";

    // Part 1.5: Exiting the Program
    std::cout << "All calculations are now complete! Now exiting program.\n";
}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started on Visual Studio: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
