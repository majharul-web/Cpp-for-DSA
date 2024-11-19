#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A, B, C;
    cin >> A >> B >> C;

    int minValue = min({A, B, C});
    int maxValue = max({A, B, C});

    cout << minValue << " " << maxValue << endl;

    return 0;
}