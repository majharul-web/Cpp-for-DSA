#include <iostream>
using namespace std;

int main()
{

    int value;
    cout << "Enter a value" << endl;
    cin >> value;

    if (value % 2 == 0)
    {
        cout << "Value is even using if-else \n";
    }
    else
    {
        cout << "Value is odd using if-else \n";
    }

    value % 2 == 0 ? cout << "Value is even using Ternery \n" : cout << "Value is even using Ternery \n";

    return 0;
}