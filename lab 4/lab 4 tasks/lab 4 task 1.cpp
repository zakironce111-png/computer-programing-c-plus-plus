#include <iostream>// include the input/output stream library to use cout and cin
using namespace std;// use the standard namespace to avoid writing std :: cout and std ::cin

int main() {     // main function where program execution starts
    int day;

    cout << "Enter a number (1-7) for the day: "; // declare an integer variable to store the day number (1-7)
    cin >> day; // read the user input and store it in a day

    switch(day) { // switch statment to chech the value of the day(iswitch use for selection of one option from the multiple ones)
        case 1: // case is used as a condition here if day is one 
            cout << "Monday";// when case is one the compiler will dispay monday
            break;          // break is used for exit the switch block
        case 2:            // if day is 2
            cout << "Tuesday"; // print tuesday
            break;       // break is used for exit the switch block
        case 3:          // if day is 3 
            cout << "Wednesday"; // print wednesday
            break;      
        case 4:              // if day is 4
            cout << "Thursday"; //print thursday
            break;
        case 5:              // if day is 5
            cout << "Friday";// print friday
            break;
        case 6:             // if day is 6
            cout << "Saturday";// print saturday
            break;
        case 7:              // if day is 7
            cout << "Sunday";// print sunday
            break;
        default:      // if day is not between (1-7) 
            cout << "Invalid day number!";// invalid input will show by the compiler 
    }

    return 0; // program finished successfully
}