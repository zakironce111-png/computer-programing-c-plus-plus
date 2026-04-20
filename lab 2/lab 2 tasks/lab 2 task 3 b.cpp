#include <iostream>  // input and output library  
using namespace std; //Use the standard namespace to avoid std :: before  every cout

int main() // the program execution starts from here 
{
    int a = 3.14;      // trying to assign a decimal to an integer
    cout << a;         // prints 3 (decimal part is ignored by the compiler b/c int only use for whole number not decimal)

    return 0;       // return 0 is used that program end successfully   
}