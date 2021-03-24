#include <iostream>
using namespace std;

/*
    function prototyping:- Is the process of providing function name to the compiler before the 
        actual function is called. It helps to work program if the function is called before 
        creating the function.

    syntax:-
        type function_name(arguments)
        int sum(int a, int b)

    formal parameters:- Parameters that us used in the function itself
    actual parameters:- Parameters that are passed to the functions as an arguments
*/

// int sum(int a, int b)
// {
//     int s = a + b;
//     return s;
// };

int sum(int a, int b);
int main()
{
    int num1, num2;
    cout << "Enter first number ";
    cin >> num1;
    cout << "Enter second number ";
    cin >> num2;
    cout << "The sum of " << num1 << " and " << num2 << " is " << sum(num1, num2) << endl;
    return 0;
}

int sum(int a, int b)
{
    int s = a + b;
    return s;
};