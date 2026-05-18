#include <iostream>
#include <string>

using namespace std;

// Declaring structure Person
struct Person
{
    string name;
    int age;
    string address;
};

int main()
{
    // Declaring and initializing structure variable
    Person person1;

    person1.name = "Ali";
    person1.age = 20;
    person1.address = "Lahore";

    // Displaying structure members using dot notation
    cout << "Person Details" << endl;
    cout << "Name: " << person1.name << endl;
    cout << "Age: " << person1.age << endl;
    cout << "Address: " << person1.address << endl;

    return 0;
}