#include <iostream>   // For input-output
using namespace std;

int main() {
    int source[5] = {1, 2, 3, 4, 5}; // Source array
    int destination[5];              // Destination array

    // Copy elements from source to destination
    for(int i = 0; i < 5; i++) {
        destination[i] = source[i]; // Copy each element
    }

    // Display source array
    cout << "Source Array:" << endl;
    for(int i = 0; i < 5; i++) {
        cout << source[i] << " "; // Print source elements
    }

    cout << endl;

    // Display destination array
    cout << "Destination Array:" << endl;
    for(int i = 0; i < 5; i++) {
        cout << destination[i] << " "; // Print copied elements
    }

    return 0; // End program
}