#include <iostream>  // Include library for input and output
using namespace std; // Use standard namespace so we can write cout and cin easily or to avoid std :: before every cout

int main() // Main function where program execution starts
{
	int a; // Declare a variable 'a' to store the user's age
	
	cout << "Dear user kindly enter your age: "; // Display a message asking the user to enter age
	cin >> a; // Take the age entered by the user and store it in variable 'a'
	
	cout << a; // Display the age entered by the user on the screen
		
	return 0; // End the program
}