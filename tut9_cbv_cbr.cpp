#include <iostream>
using namespace std;

//This is the example of call by reference using pointer.
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a = 5, b = 6;
    cout << "The value of a is: " << a << endl;
    cout << "The value of b is: " << b << endl;

    cout << "The values after swapping." << endl;
    swap(&a, &b);
    cout << "The value of a is: " << a << endl;
    cout << "The value of b is: " << b << endl;
    return 0;
}