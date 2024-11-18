#include <iostream>
#include <string>
using namespace std;

int main()
{

    int inner, outer;

    cout << "Enter inner loop length" << endl;
    cin >> inner;

    cout << "Enter outer loop length" << endl;
    cin >> outer;

    for (int i = 1; i <= inner; i++)
    {
        if (i == 2)
        {
            break;
        }

        cout << "Inner " << i << endl;

        for (int j = 1; j <= outer; j++)
        {
            if (j == 3)
            {
                continue;
            }

            cout << "Outer " << j << endl;
        }
    }

    return 0;
}