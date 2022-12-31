#include <iostream>
using namespace std;
void print();
void aggregate(string student_one, int marks_one, int ecat_marks_one);
void aggregate2(string student_two, int marks_two, int ecat_marks_two);
int main()
{

    print();
    string student_one, student_two;
    int marks_one, marks_two;
    int ecat_marks_one, ecat_marks_two;

    int choice;
    cout << "Press one to enter the details of first student " << endl;
    cout << "Press two to enter the details of second student " << endl;
    cout << "Press three to calculate the aggregate of first student " << endl;
    cout << "Press four to calculate the aggregate of second student " << endl;
    cout << "Press five to see the details of first student" << endl;
    cin >> choice;

    if (choice == 1)
    {
        cout << "Enter your name ";
        cin >> student_one;
        cout << "Enter your fsc marks ";
        cin >> marks_one;
        cout << "Enter your ecat marks ";
        cin >> ecat_marks_one;
    }
    cout << "Press one to enter the details of first student " << endl;
    cout << "Press two to enter the details of second student " << endl;
    cout << "Press three to calculate the aggregate of first student " << endl;
    cout << "Press four to calculate the aggregate of second student " << endl;
    cout << "Press five to see the details of first student" << endl;
    cin >> choice;
    if (choice == 2)
    {
        cout << "Enter your name ";
        cin >> student_two;
        cout << "Enter your fsc marks ";
        cin >> marks_two;
        cout << "Enter your ecat marks ";
        cin >> ecat_marks_two;
    }
    cout << "Press one to enter the details of first student " << endl;
    cout << "Press two to enter the details of second student " << endl;
    cout << "Press three to calculate the aggregate of first student " << endl;
    cout << "Press four to calculate the aggregate of second student " << endl;
    cout << "Press five to see the details of first student" << endl;
    cin >> choice;
    if (choice == 3)
    {
        aggregate(student_one, marks_one, ecat_marks_one);
    }
    cout << "Press one to enter the details of first student " << endl;
    cout << "Press two to enter the details of second student " << endl;
    cout << "Press three to calculate the aggregate of first student " << endl;
    cout << "Press four to calculate the aggregate of second student " << endl;
    cout << "Press five to see the details of first student" << endl;
    cin >> choice;
    if (choice == 4)
    {
        aggregate2(student_two, marks_two, ecat_marks_two);
    }

    return 0;
}
void print()
{
    cout << "************************************************" << endl;
    cout << "*                                              *" << endl;
    cout << "*                                              *" << endl;
    cout << "*                                              *" << endl;
    cout << "*            U.E.T Lahore                      *" << endl;
    cout << "*                                              *" << endl;
    cout << "*                                              *" << endl;
    cout << "*                                              *" << endl;
    cout << "************************************************" << endl;
    cout << endl
         << endl
         << endl;
    cout << "Welcome to Uet admission managment system" << endl;
    cout << endl
         << endl
         << endl;
}
void aggregate(string student_one, int marks_one, int ecat_marks_one)

{
    float calculation = ((marks_one / 1100.0) * 70) + ((ecat_marks_one / 400.0) * 30);
    cout << student_one << " aggregate is" << calculation;
}
void aggregate2(string student_two, int marks_two, int ecat_marks_two)
{
    float calculation2 = ((marks_two / 1100.0) * 70) + ((ecat_marks_two / 400.0) * 30);
    cout << student_two << " aggregate is" << calculation2;
}