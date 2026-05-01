#include <iostream>
using namespace std;

int main() {

    int rows;

    // input from user
    cout << "Enter number of rows: ";
    cin >> rows;

    // outer loop for rows
    for (int i = 1; i <m= rows; i++) {

        // inner loop for printing stars
        for (int j = 1; j >= i; j++) {
            cout << "*";
        }

        cout << endl; // move to next line
    }

    return 0;
}