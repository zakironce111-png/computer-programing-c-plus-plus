#include <iostream>
#include <string>

using namespace std;

// Declaring structure Student
struct Student
{
    string name;
    int age;
    char grade;
};

int main()
{
    // Declaring and initializing structure variable
    Student student1;

    student1.name = "Zakir";
    student1.age = 19;
    student1.grade = 'A';

    // Displaying structure members
    cout << "Student Details" << endl;
    cout << "Name: " << student1.name << endl;
    cout << "Age: " << student1.age << endl;
    cout << "Grade: " << student1.grade << endl;

    return 0;
}