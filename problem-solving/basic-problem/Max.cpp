#include <bits/stdc++.h>
using namespace std;

int main()
{

    int N;
    cin >> N;

    int maxValue = 0;

    for (int i = 0; i < N; i++)

    {
        int x;
        cin >> x;
        if (x > maxValue)
        {
            maxValue = x;
        }
    }

    cout << maxValue << endl;

    return 0;
}