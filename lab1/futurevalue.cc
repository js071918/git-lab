/**
 *   @file: futurevalue.cc
 * @author: Jacob Sheaffer
 *   @date: 5/20/2025
 *  @brief: Write a C++ program that calculates the future value of an investment using
compound interest. The program should ask the user for the investment amount, the
annual interest rate as a percentage, and the time period in years.
 * 
 */

 #include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() 
{
    /** 
     * Find the future value using the following formula: 𝐹𝑢𝑡𝑢𝑟𝑒 𝑉𝑎𝑙𝑢𝑒 = 𝑎𝑚𝑜𝑢𝑛𝑡 𝑥 (1 + 𝑖𝑛𝑡𝑒𝑟𝑒𝑠𝑡)^number of years
    */
    cout << "Enter the investment amount, the interest, and number of years:";
    double FV, amt, interest, years;
    cin >> amt >> interest >> years;
    double percent; //define percent

/**
 * If user enters negative value end program. Else user doesn't enter a negative value continue
*/
    if (amt < 0 || interest < 0 || years < 0) { 
        cout << "All values must be positive." << endl; 
}
else 

{
       /** 
       * change interest into a decimal for calculation
       */
       percent = interest/100; 
       /** 
       * Use function given to calculate future value with given variables.
       */
       FV = amt * pow(1 + percent,years); 
       
       /** 
       * Print each value with precision 2.
       */
       cout << fixed << setprecision(2);
       cout << "Investment Amount: $" << amt << endl;
       cout << "Interest: " << interest << "%" << endl;
       cout << "Number of years: " << years << endl;
       cout << "Future Value: " << FV << endl;
}
    return 0;
}
