#include <iostream>
using namespace std;

// Function to calculate the sum of numbers
int calculateSum(int arr[], int size)
{
    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }

    return sum;
}

// Function to calculate the average of numbers
double calculateAverage(int arr[], int size)
{
    int sum = calculateSum(arr, size);

    return (double)sum / size;
}

// Function to find the maximum value
int findMaximum(int arr[], int size)
{
    int maximum = arr[0];

    for (int i = 1; i < size; i++)
    {
        if (arr[i] > maximum)
        {
            maximum = arr[i];
        }
    }

    return maximum;
}

// Function to find the minimum value
int findMinimum(int arr[], int size)
{
    int minimum = arr[0];

    for (int i = 1; i < size; i++)
    {
        if (arr[i] < minimum)
        {
            minimum = arr[i];
        }
    }

    return minimum;
}

int main()
{
    int n;

    cout << "How many numbers? ";
    cin >> n;

    // Validate the number of inputs
    if (n <= 0)
    {
        cout << "Error: Number of values must be positive." << endl;
        return 0;
    }

    int numbers[n];

    // Read numbers from user
    for (int i = 0; i < n; i++)
    {
        cout << "Enter number " << i + 1 << ": ";
        cin >> numbers[i];
    }

    // Display results
    cout << "\nResults:" << endl;
    cout << "Sum:     " << calculateSum(numbers, n) << endl;
    cout << "Average: " << calculateAverage(numbers, n) << endl;
    cout << "Maximum: " << findMaximum(numbers, n) << endl;
    cout << "Minimum: " << findMinimum(numbers, n) << endl;

    return 0;
}
