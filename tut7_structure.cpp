#include <iostream>
using namespace std;
// --------------- Structure Datatype --------------------- //
struct employee
{
    int eId;
    char favChar;
    float salary;
    string name;
};

// typedef struct employee
// {
//     int eId;
//     char favChar;
//     float salary;
//     string name;
// } ep;

/*
    we can use typedef to use shorthand name for the struct employee
    example: struct employee amit -> ep amit
*/

// ------------------------- Union Datatype ----------------------- //
union money
{
    int rice;
    char car;
    float pound;
};

int main()
{
    // consumption of structure
    struct employee amit;
    amit.name = "AMit";
    amit.eId = 1;
    amit.favChar = 'a';
    amit.salary = 12000;
    cout << amit.salary << endl;
    cout << amit.name << endl;
    cout << amit.favChar << endl;

    // consumption of union
    cout << endl;
    union money m1;
    m1.rice = 300;
    m1.car = 'c';
    m1.pound = 7.55;
    cout << m1.rice << endl;  // Union plays better role in the memory management cases
    cout << m1.car << endl;   // Garbage value is printed when previous data is accessed
    cout << m1.pound << endl; // Only one data can be accessed at a time as memory is shared

    return 0;
}