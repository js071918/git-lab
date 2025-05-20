/**
 *   @file: lab1Errors.cc
 * @author: Jacob Sheaffer
 *   @date: 5/20/2025
 *  @brief: Set up float variables to obtain from user, these values' roots will be calculated using the quadratic formula. 
 * 
 */

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;


int main() 
{
/**
 *  get user input for variables a b and c
 */  
    cout << "Enter the values for a, b, and c.";
    double a, b, c;
    cin >> a >> b >> c; 
    double disc;
    /**
     * Use variables in square root function inside quadratic.
     */
    disc = sqrt(b * b - 4 * a * c); 
    /**
     * Define both positive and negative outputs for formula.
     */
    double x1, x2; 
    /**
     * Calculate positive and negative values in using formula.
     */
    x1 = (-b + disc) / (2 * a); 
    x2 = (-b - disc) / (2 * a); 
    /**
     * Display values of x1 and x2
     */
    cout << "x1 = " << x1 << endl; 
    cout << "x2 = " << x2 << endl;

    return 0;
}
