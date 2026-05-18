#include <iostream>   // For input-output
using namespace std;

int main() {
    char message[] = "HELLO"; // Character array (string)

    // Loop to access each character
    for(int i = 0; message[i] != '\0'; i++) { // '\0' marks end of string
        cout << message[i] << endl; // Print each character on new line
    }

    return 0; // End program
}