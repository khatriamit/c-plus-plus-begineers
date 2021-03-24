#include <iostream>
using namespace std;

int main()
{
    for (int i = 0; i < 4; i++)
    {
        cout << i << endl;
        if (i == 2)
        {
            break;
        }
    }
    cout << "The next iteration" << endl;
    for (int i = 0; i < 4; i++)
    {
        if (i == 2)
        {
            continue;
        }
        cout << i << endl; // Code below the continue statement is escaped.
    }

    return 0;
}