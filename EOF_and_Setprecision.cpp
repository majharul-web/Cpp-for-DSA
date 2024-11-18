#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // End of function start
    int condition;
    while (cin >> condition)
    {
        cout << "condition is :" << condition << endl;
    }
    // End of function end

    double setPValue = 3.5689;
    cout << "Print setprecision :" << fixed << setprecision(2) << setPValue << endl;

    return 0;
}