// Project 3

// Author: Ryan Canty

// Date: 9/24/15

// Course: CSC1610

// Description: This file prompts the user for 3 doubles and then performs the
// Quadratic formula with them, computing both positive and negative roots.

// Input: Three user-defined doubles collected from the standard
// input stream (keyboard)

// Output: Positive and negative roots of the quadratic formula.

#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>

using namespace std;

void quadEquation( double, double, double, double ); //Prototype

/*
 * 
 */
int main() {

    double a; //Double that will hold first user inputted number
    double b; //Double that will hold second user inputted number
    double c; //Double that will hold third user inputted number
    cout << "Please provide a, b, and c." << endl; //Promt for numbers
    cin >> a >> b >> c; //Store numbers
    cout << " " << endl;
    quadEquation( a, b, c, 1 ); //Perform quadratic equation for positive roots.
    quadEquation( a, b, c, -1); //Perform quadratic equation for negative roots.
    
    
    return 0;
}

//Description: Output positive and negative roots of the quadratic equation
//using 3 user inputted numbers.
//Precondition: double d must be 1 to find the positive root and -1 to find the 
//negative root.
//Postcondition: The positive and negative roots of the quadratic equation are
//displayed using the user's numbers.
void quadEquation( double a, double b, double c, double d ) 
{
    double quadAns; //Double that will store the roots of the quad equation
    quadAns = (-b + d*(sqrt((pow(b,2.0)) - (4.0 * a * c)))) / (2.0 * a);
    //Calculates quadratic formula with user numbers.
    cout << quadAns << endl; //Outputs the roots to the user
}