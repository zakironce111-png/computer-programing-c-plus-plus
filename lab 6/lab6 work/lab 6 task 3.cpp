#include <iostream>
using namespace std;

int main() {

    int n, sum = 0;

    // input from user
    cout << "Enter a positive integer: ";
    cin >> n;

    // for loop only (as required)
    for (int i = 1; i <= n; i++) {
        sum = sum + i;
    }

    // display result
    cout << "Sum from 1 to " << n << " is: " << sum << endl;

    return 0;
}