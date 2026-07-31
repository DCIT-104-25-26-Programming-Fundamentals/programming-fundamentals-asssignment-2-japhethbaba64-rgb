#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
using namespace std;

// Struct to store student information
struct Student
{
    string name;
    int id;
    vector<double> scores;
};

// Function to calculate average score
double calculateAverage(const Student& student)
{
    double sum = 0;

    for (double score : student.scores)
    {
        sum += score;
    }

    return sum / student.scores.size();
}

// Function to add a student
void addStudent(vector<Student>& students)
{
    Student student;

    cout << "Student name: ";
    cin.ignore();
    getline(cin, student.name);

    cout << "Student ID: ";
    cin >> student.id;

    int numberOfScores;

    cout << "How many scores? ";
    cin >> numberOfScores;

    for (int i = 0; i < numberOfScores; i++)
    {
        double score;

        cout << "Enter score " << i + 1 << ": ";
        cin >> score;

        student.scores.push_back(score);
    }

    students.push_back(student);

    cout << "Student \"" << student.name << "\" added successfully." << endl;
}

// Function to display all students
void displayStudents(const vector<Student>& students)
{
    if (students.empty())
    {
        cout << "No student records available." << endl;
        return;
    }

    cout << "\nStudent Records:" << endl;
    cout << "------------------------------------------------" << endl;

    for (const Student& student : students)
    {
        cout << "Name: " << student.name << endl;
        cout << "ID: " << student.id << endl;

        cout << "Scores: ";

        for (double score : student.scores)
        {
            cout << score << " ";
        }

        cout << endl;

        cout << fixed << setprecision(2);
        cout << "Average Score: " << calculateAverage(student) << endl;

        cout << "------------------------------------------------" << endl;
    }
}

// Function to calculate average score for a specific student
void findStudentAverage(const vector<Student>& students)
{
    int id;

    cout << "Enter student ID: ";
    cin >> id;

    for (const Student& student : students)
    {
        if (student.id == id)
        {
            cout << fixed << setprecision(2);
            cout << student.name << "'s average score: "
                 << calculateAverage(student) << endl;
            return;
        }
    }

    cout << "Error: Student ID not found." << endl;
}

// Function to display menu
void displayMenu()
{
    cout << "\n================================" << endl;
    cout << "   STUDENT RECORD SYSTEM MENU" << endl;
    cout << "================================" << endl;
    cout << "1. Add student" << endl;
    cout << "2. Display all students" << endl;
    cout << "3. Calculate average score" << endl;
    cout << "4. Quit" << endl;
    cout << "Enter your choice (1-4): ";
}

int main()
{
    vector<Student> students;

    int choice;

    do
    {
        displayMenu();
        cin >> choice;

        switch (choice)
        {
            case 1:
                addStudent(students);
                break;

            case 2:
                displayStudents(students);
                break;

            case 3:
                findStudentAverage(students);
                break;

            case 4:
                cout << "Goodbye!" << endl;
                break;

            default:
                cout << "Error: Invalid choice. Please select between 1 and 4." << endl;
        }

    } while (choice != 4);

    return 0;
}
