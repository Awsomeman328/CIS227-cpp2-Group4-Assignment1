// assignment0.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "header.h"

int main()
{
    //variable declaration
    char menuSelection;
    bool selectionValid = false;
    double triBase;
    double triHeight;
    float trapA;
    float trapB;
    float trapH;
    float rectLength;
    float rectWidth;
    float rectHeight;

    //menu to select which calculation to perform
    cout << "Welcome! Please select which function you would like to perform." << endl;
    cout << "To calculate the hypotenuse of a right triangle, press 1" << endl;
    cout << "To calculate the area of a trapezoid, press 2" << endl;
    cout << "To calculate the volume of a rectangular prism, press 3" << endl;
    cout << "To quit, press 0" << endl;
    
    //input validation for menu
    do
    {
        cin >> menuSelection;
        if (menuSelection != '1' && menuSelection != '2' && menuSelection != '3' && menuSelection != '0')
        {
            cout << "Invalid input. Please try again" << endl;
        }
        else
            selectionValid = true;
    } while (!selectionValid);

    //branching point for different operations
    //Calculate hypotenuse
    if (menuSelection == '1')
    {
        cout << "You have selected 'Calculate Hypotenuse'. Please note that only dimensions of right triangles may be used." << endl;
        cout << "Please enter the length of the base of the triangle: ";
        cin >> triBase;
        cout << endl << "Please enter the height of the triangle: ";
        cin >> triHeight;
        cout << endl << "The length of the hypotenuse of the given triangle is " << hypot(triBase, triHeight) << endl;
    }

    //Calculate area of trapezoid
    else if (menuSelection == '2') 
    {
        cout << "You have selected 'Calculate Area of a Trapezoid.'" << endl;
        cout << "Please enter the length of the base of the trapezoid: ";
        cin >> trapA;
        cout << endl << "Please enter the length of the opposite side of the trapezoid: ";
        cin >> trapB;
        cout << endl << "Please enter the height of the trapezoid: ";
        cin >> trapH;
        cout << endl << "The area of the given trapezoid is " << area(trapA, trapB, trapH) << endl;
    }

    //Calculate volume of Rectangular prism
    else if (menuSelection == '3')
    {
        cout << "You have selected 'Calculate Volume of a Rectangular Prism.'" << endl;
        cout << "Please enter the length of the prism: ";
        cin >> rectLength;
        cout << endl << "Please enter the width of the prism: ";
        cin >> rectWidth;
        cout << endl << "Please enter the height of the prism: ";
        cin >> rectHeight;
        cout << endl << "The volume of the given rectangular prism is " << volume(rectLength, rectWidth, rectHeight);
    }
    //Exit path
    else
    {
        cout << "Now exiting";
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
