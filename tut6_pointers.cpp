#include <iostream>
using namespace std;

int main()
{
    // Pointer is the data type that holds the address of other data types
    int a = 10;
    int *b = &a;
    // & is the address of the operator.
    // * deference operator, while printing it gives the value stored at the address.
    cout << *b << endl;
    int **c = &b;
    // Pointer to pointer variable. Here a pointer is storing the value of another pointer using **
    return 0;
}