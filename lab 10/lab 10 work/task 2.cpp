#include <iostream>
using namespace std;

// Function declaration
int getSquare(int number)
{
    int square = number * number;
    return square;
}

int main()
{
    int result;

    // Function call
    result = getSquare(6);

    cout << "Square = " << result << endl;

    return 0;
}