#include <iostream>
using namespace std;

class Employee
{
private:
    int a, b, c;

public:
    int d, e;
    void setData(int a1, int b1, int c1); // Decleration of the setData function
    void getData()
    {
        cout << "The value of a is: " << a << endl;
        cout << "The value of b is: " << b << endl;
        cout << "The value of c is: " << c << endl;
        cout << "The value of d is: " << d << endl;
        cout << "The value of e is: " << e << endl;
    };
};

void Employee ::setData(int a1, int b1, int c1)
{
    a = a1;
    b = b1;
    c = c1;
};

int main()
{
    Employee amit;
    amit.d = 33;
    amit.e = 44;
    amit.setData(4, 9, 8);
    amit.getData();
    return 0;
}