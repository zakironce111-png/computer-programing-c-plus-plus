#include <iostream>   // For input-output
using namespace std;

int main() {

    // Declare and initialize 3x3 matrix with random values
    int arr[3][3] = {
        {2, 4, 6},
        {1, 3, 5},
        {7, 8, 9}
    };

    int totalSum = 0; // Variable to store total sum

    // Calculate row sums
    cout << "Row Sums:" << endl;
    for(int i = 0; i < 3; i++) {   // Loop through rows
        int rowSum = 0;            // Reset row sum

        for(int j = 0; j < 3; j++) {
            rowSum += arr[i][j];   // Add each element of row
        }

        cout << "Row " << i << " = " << rowSum << endl; // Print row sum
        totalSum += rowSum; // Add to total sum
    }

    // Calculate column sums
    cout << "\nColumn Sums:" << endl;
    for(int j = 0; j < 3; j++) {   // Loop through columns
        int colSum = 0;            // Reset column sum

        for(int i = 0; i < 3; i++) {
            colSum += arr[i][j];   // Add each element of column
        }

        cout << "Column " << j << " = " << colSum << endl; // Print column sum
    }

    // Display total sum
    cout << "\nTotal Sum of all elements = " << totalSum << endl;

    return 0; // End program
}