#include <iostream>
using namespace std;

// function to calculate sum
int calculateSum(int arr[], int size) {
    int sum = 0;
    for(int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int arr[10];

    cout << "Enter 10 integers:\n";
    for(int i = 0; i < 10; i++) {
        cin >> arr[i];
    }

    int total = calculateSum(arr, 10);

    double average = total / 10.0;

    cout << "Sum = " << total << endl;
    cout << "Average = " << average << endl;

    return 0;
}