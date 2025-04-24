#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N, S;
        cin >> N >> S;

        int A[N];
        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
        }

        bool found = false;

        for (int i = 0; i < N - 2 && !found; i++)
        {
            for (int j = i + 1; j < N - 1 && !found; j++)
            {
                for (int k = j + 1; k < N && !found; k++)
                {
                    if (A[i] + A[j] + A[k] == S)
                    {
                        found = true;
                    }
                }
            }
        }

        if (found)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}