#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    long long A[N];

    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    sort(A, A + N);

    for (int i = 0; i < N; i++)
    {
        cout << A[i] << " ";
    }

    cout << endl;
    for (int i = N - 1; i >= 0; i--)
    {
        cout << A[i] << " ";
    }

    return 0;
}