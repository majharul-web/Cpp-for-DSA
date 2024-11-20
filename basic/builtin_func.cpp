#include <iostream>
#include <algorithm>
using namespace std;

int main()
{

    int a;
    int b;
    int c;

    cout << "Enter your a";
    cin >> a;

    cout << "Enter your b";
    cin >> b;
    cout << "Enter your c";
    cin >> c;

    if (a && b && c)
    {
        cout << "Min value is : " << min({a, b, c}) << endl;
        cout << "Max value is : " << max({a, b, c}) << endl;
    }
    else
    {
        cout << "Min value is : " << min(a, b) << endl;
        cout << "Max value is : " << max(a, b) << endl;

        swap(a, b);
        cout << "Swaped value is : " << a << ","
             << b << endl;
    }

    return 0;
}