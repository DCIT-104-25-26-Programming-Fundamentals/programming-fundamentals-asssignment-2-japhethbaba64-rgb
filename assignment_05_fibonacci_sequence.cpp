#include <iostream>
using namespace std;

// Function to print the first N Fibonacci terms
void printFibonacci(int n)
{
    int first = 0;
    int second = 1;
    int next;

    cout << "Fibonacci sequence: ";

    for (int i = 0; i < n; i++)
    {
        cout << first << " ";

        next = first + second;
        first = second;
        second = next;
    }

    cout << endl;
}

// Function to check if a number is a Fibonacci number
bool isFibonacci(int number)
{
    int first = 0;
    int second = 1;
    int next = 0;

    // Handle 0 and 1
    if (number == 0 || number == 1)
    {
        return true;
    }

    // Generate Fibonacci sequence using a loop
    while (next <= number)
    {
        next = first + second;
        first = second;
        second = next;

        if (next == number)
        {
            return true;
        }
    }

    return false;
}

int main()
{
    int n;
    int number;

    // Part A: Generate Fibonacci sequence
    cout << "How many terms? ";
    cin >> n;

    if (n <= 0)
    {
        cout << "Error: Number of terms must be a positive integer." << endl;
    }
    else
    {
        printFibonacci(n);
    }

    // Part B: Check Fibonacci number
    cout << "\nEnter a number to check: ";
    cin >> number;

    if (isFibonacci(number))
    {
        cout << number << " is a Fibonacci number." << endl;
    }
    else
    {
        cout << number << " is NOT a Fibonacci number." << endl;
    }

    return 0;
}
