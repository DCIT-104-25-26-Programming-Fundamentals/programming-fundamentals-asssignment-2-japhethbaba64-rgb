// =============================================================================
// PROGRAMMING FUNDAMENTALS — Assignment 1
// =============================================================================
//
// TASK: Prime Number Checker
//
// =============================================================================

#include <iostream>
using namespace std;

// Function to check whether a number is prime
bool isPrime(int number)
{
    // Numbers less than 2 are not prime
    if (number < 2)
    {
        return false;
    }

    // Check for divisors from 2 up to the number - 1
    for (int i = 2; i < number; i++)
    {
        if (number % i == 0)
        {
            return false; // Number has a divisor, so it is not prime
        }
    }

    return true; // No divisors found, so it is prime
}

int main()
{
    int number;

    cout << "Enter a number: ";
    cin >> number;

    if (isPrime(number))
    {
        cout << number << " is a prime number." << endl;
    }
    else
    {
        cout << number << " is NOT a prime number." << endl;
    }

    return 0;
}
