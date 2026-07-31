#include <iostream>
using namespace std;

// Function for Part A: Generate a single multiplication table
void singleTable(int number)
{
    cout << "Multiplication Table for " << number << ":" << endl;

    for (int i = 1; i <= 12; i++)
    {
        cout << number << "  x  " << i << "  =  " << number * i << endl;
    }
}

// Function for Part B: Generate multiplication tables from 1 to N
void tablesFromOneToN(int n)
{
    for (int number = 1; number <= n; number++)
    {
        cout << "\nMultiplication Table for " << number << ":" << endl;

        for (int i = 1; i <= 12; i++)
        {
            cout << number << "  x  " << i << "  =  " << number * i << endl;
        }

        cout << "---------------------------" << endl;
    }
}

int main()
{
    int number;
    int n;

    // Part A: Single multiplication table
    cout << "Enter a number for multiplication table: ";
    cin >> number;

    if (number <= 0)
    {
        cout << "Error: Number must be a positive integer." << endl;
        return 0;
    }

    singleTable(number);


    // Part B: Tables from 1 to N
    cout << "\nEnter N to generate tables from 1 to N: ";
    cin >> n;

    if (n <= 0)
    {
        cout << "Error: N must be a positive integer." << endl;
        return 0;
    }

    tablesFromOneToN(n);

    return 0;
}
