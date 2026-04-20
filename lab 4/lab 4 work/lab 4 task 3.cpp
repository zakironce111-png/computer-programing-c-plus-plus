                     // Name : Zakirullah
                     //   ID :709/5120371
                       // section : A


#include <iostream> // This library is used for input and output operations like cout and cin
using namespace std; // This allows us to use standard C++ functions without writing std::

int main() { // The main function is the starting point of the program

    int choice; // Declare an integer variable to store the user's menu choice
    double value; // Declare a double variable to store numeric values entered by the user

    cout << "Choose an option from the menu:\n"; // Display the menu title to the user
    cout << "1. Convert km to m\n"; // Show option 1 for kilometer to meter conversion
    cout << "2. Convert m to cm\n"; // Show option 2 for meter to centimeter conversion
    cout << "3. Convert kg to g\n"; // Show option 3 for kilogram to gram conversion
    cout << "4. Convert Celsius to Fahrenheit\n"; // Show option 4 for temperature conversion
    cout << "Enter your choice: "; // Ask the user to select an option
    cin >> choice; // Take the user's choice as input from the keyboard

    switch(choice) { // Start switch statement to check which option the user selected

        case 1: // Case 1 will execute if the user enters 1
            cout << "Enter distance in kilometers: "; // Ask the user to enter distance in km
            cin >> value; // Store the entered value in the variable 'value'
            cout << value << " km = " << value * 1000 << " m"; // Convert kilometers to meters and display result
            break; // Break stops execution and exits the switch statement

        case 2: // Case 2 will execute if the user enters 2
            cout << "Enter distance in meters: "; // Ask the user to enter distance in meters
            cin >> value; // Store the entered value in variable 'value'
            cout << value << " m = " << value * 100 << " cm"; // Convert meters to centimeters and show result
            break; // Exit the switch statement after executing this case

        case 3: // Case 3 will execute if the user enters 3
            cout << "Enter weight in kilograms: "; // Ask the user to enter weight in kilograms
            cin >> value; // Read the weight value from the user
            cout << value << " kg = " << value * 1000 << " g"; // Convert kilograms to grams and display result
            break; // Exit the switch statement

        case 4: // Case 4 will execute if the user enters 4
            cout << "Enter temperature in Celsius: "; // Ask the user to enter temperature in Celsius
            cin >> value; // Read the Celsius value entered by the user
            cout << value << " C = " << (value * 9/5) + 32 << " F"; // Convert Celsius to Fahrenheit and display result
            break; // Exit the switch statement

        default: // Default case runs if the user enters an invalid choice
            cout << "Invalid choice!"; // Display message for incorrect menu selection

    } // End of switch statement

    return 0; // End the program and return control to the operating system
}