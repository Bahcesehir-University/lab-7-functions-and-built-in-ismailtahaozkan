// ============================================================
//  Lab Title   : Introduction to Functions & Built-in Functions
//  Course      : CMP1001 – Introduction to Programming (C++)
//  Duration    : 40 Minutes
//  Description : In this lab you will write your own functions
//                and use common C++ built-in functions from
//                <cmath> and <cstdlib>.
//
//  *** TEACHER VERSION – FULL SOLUTIONS ***
// ============================================================

#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

// ============================================================
//  FUNCTIONS  (defined above main so no forward declarations needed)
// ============================================================

// Section 3-A: converts Celsius to Fahrenheit
double celsiusToFahrenheit(double c)
{
    return (c * 9.0 / 5.0) + 32.0;
}

// Section 3-B: returns true if n is a prime number
bool isPrime(int n)
{
    if (n <= 1) return false;           // 0 and 1 are not prime
    for (int i = 2; i <= sqrt((double)n); i++)
    {
        if (n % i == 0) return false;   // found a divisor → not prime
    }
    return true;
}

// Section 3-C: returns the largest of three integers
int maxOfThree(int a, int b, int c)
{
    int maxVal = a;
    if (b > maxVal) maxVal = b;
    if (c > maxVal) maxVal = c;
    return maxVal;
}

// Challenge: returns the average of an array of doubles
double average(double arr[], int size)
{
    double sum = 0.0;
    for (int i = 0; i < size; i++)
        sum += arr[i];
    return sum / size;
}

// ============================================================
//  MAIN
// ============================================================

int main()
{
    // ----------------------------------------------------------
    // SECTION 1 – WARM-UP
    // ----------------------------------------------------------

    double radius;
    const double PI = 3.14159;

    cout << "=== Warm-up: Circle Area ===" << endl;
    cout << "Enter the radius: ";
    cin  >> radius;
    double area = PI * radius * radius;
    cout << "Area = " << area << endl;

    // ----------------------------------------------------------
    // SECTION 2 – Built-in Functions Demo
    // ----------------------------------------------------------

    double val = 17.5;
    cout << "\n=== Built-in Functions ===" << endl;
    cout << "sqrt(17.5)  = " << sqrt(val)  << endl;
    cout << "ceil(17.5)  = " << ceil(val)  << endl;
    cout << "floor(17.5) = " << floor(val) << endl;
    cout << "round(17.5) = " << round(val) << endl;

    // ----------------------------------------------------------
    // SECTION 3 – Guided Exercises
    // ----------------------------------------------------------

    // 3-A: Temperature converter
    double celsius;
    cout << "\n=== Temperature Converter ===" << endl;
    cout << "Enter temperature in Celsius: ";
    cin  >> celsius;
    cout << celsius << " C = " << celsiusToFahrenheit(celsius) << " F" << endl;

    // 3-B: Prime checker
    int number;
    cout << "\n=== Prime Checker ===" << endl;
    cout << "Enter an integer: ";
    cin  >> number;
    if (isPrime(number))
        cout << number << " is prime." << endl;
    else
        cout << number << " is not prime." << endl;

    // 3-C: Max of three
    int x, y, z;
    cout << "\n=== Max of Three ===" << endl;
    cout << "Enter three integers: ";
    cin  >> x >> y >> z;
    cout << "Maximum = " << maxOfThree(x, y, z) << endl;

    // ----------------------------------------------------------
    // SECTION 4 – Challenge: Statistics
    // ----------------------------------------------------------

    const int SIZE = 5;
    double grades[SIZE];

    cout << "\n=== Challenge: Statistics ===" << endl;
    cout << "Enter " << SIZE << " numbers:" << endl;
    for (int i = 0; i < SIZE; i++)
    {
        cout << "  [" << i + 1 << "]: ";
        cin  >> grades[i];
    }

    double avg = average(grades, SIZE);
    cout << "Average              = " << avg                          << endl;
    cout << "sqrt(average)        = " << sqrt(avg)                    << endl;
    cout << "Rounded (2 decimals) = " << round(avg * 100.0) / 100.0  << endl;

    cout << "\n=== Lab Complete! ===" << endl;
    return 0;
}
