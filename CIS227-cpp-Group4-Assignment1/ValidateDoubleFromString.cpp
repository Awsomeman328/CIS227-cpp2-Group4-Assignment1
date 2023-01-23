/*
 * ValidateDoubleFromString.cpp
 * 
 * Author: Jacob Wiles
 */

#include "ValidateDoubleFromString.h"

// A function used to determine if a given string is a valid double. Returns the resulting boolean.
// Returns "NULL" if the inString is empty, returns "false" if the inString is not valid (i.e. its not a number), and returns "true" if the inString is valid
bool isStringAValidDouble(string inString)
{
    if (inString.empty())
    {
        // Recommended error message: (cout << "Please enter a valid input [Cannot be empty]\n";)
        return NULL;
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
                // Recommended error message: (cout << "Please enter a valid input [Must be a number]\n";)
                return false;
            }
        }
    }
    return true;
}