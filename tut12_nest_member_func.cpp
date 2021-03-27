/*
 class and objects in Object oriented programming.
 c++ also knows as c with classes
 class -> extension of structures
 structures have limitations (members are public, no methods) in C programming
 classes = structures + additional features
 classes can have methods and properties (can make private members as well as public)
 structures in C++ are typedef
 we can declare objects along with the class declertion but it is not a good practice, for example:
     class Student{
        class definition
    } amit, sagar;

*/

#include <iostream>
#include <string>
using namespace std;

class binary
{
    string s;

public:
    void read(void);
    void chk_bin(void);
    void ones(void);
};

void binary ::read(void)
{
    cout << "Enter a binary number: ";
    cin >> s;
    cout << s << endl;
    ;
};

void binary ::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "The input is incorrect binary format" << endl;
            exit(0);
        }
        // else
        // {
        //     cout << "The input is correct binary format" << endl;
        // }
    }
}

void binary ::ones(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
    cout << "The ones conversion output is: " << s << endl;
}

int main()
{
    // Nesting of the member functions
    binary b;
    b.read();
    b.chk_bin();
    b.ones();
    return 0;
}