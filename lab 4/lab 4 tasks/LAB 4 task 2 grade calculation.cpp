#include <iostream> // This library is used for input and output operations (cout and cin)
using namespace std; // This allows us to use standard C++ names without writing std:: before them

int main() { // The main function is the starting point where program execution begins

char grade; // Declare a character variable named 'grade' to store the user's grade

cout << "Enter your grade (A, B, C, D, F): "; // Display a message asking the user to enter a grade
cin >> grade; // Take the grade input from the user and store it in variable 'grade'

switch(grade) { // Start switch statement to check which grade the user entered

case 'A': // This case runs if the user enters uppercase 'A'
case 'a': // This case runs if the user enters lowercase 'a'
cout << "Excellent"; // Display the message "Excellent"
break; // Break stops the switch and prevents execution of the next cases

case 'B': // This case runs if the user enters uppercase 'B'
case 'b': // This case runs if the user enters lowercase 'b'
cout << "Very Good"; // Display the message "Very Good"
break; // Exit the switch statement after executing this case

case 'C': // This case runs if the user enters uppercase 'C'
case 'c': // This case runs if the user enters lowercase 'c'
cout << "Good"; // Display the message "Good"
break; // Exit the switch statement

case 'D': // This case runs if the user enters uppercase 'D'
case 'd': // This case runs if the user enters lowercase 'd'
cout << "Pass"; // Display the message "Pass"
break; // Exit the switch statement

case 'F': // This case runs if the user enters uppercase 'F'
case 'f': // This case runs if the user enters lowercase 'f'
cout << "Fail"; // Display the message "Fail"
break; // Exit the switch statement

default: // Default case runs if the user enters a grade other than A, B, C, D, or F
cout << "Invalid grade"; // Display an error message for invalid input

} // End of switch statement

return 0; // End the program and return control to the operating system
}