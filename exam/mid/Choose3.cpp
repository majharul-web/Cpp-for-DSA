#include <bits/stdc++.h>
using namespace std;

bool isSumPossible(int A[], int N, int S)
{
    sort(A, A + N);

    for (int i = 0; i < N - 2; i++)
    {
        int left = i + 1, right = N - 1;

        while (left < right)
        {
            int sum = A[i] + A[left] + A[right];

            if (sum == S)
            {
                return true;
            }

            if (sum < S)
            {
                left++;
            }

            else
            {
                right--;
            }
        }
    }
    return false;
}

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

        cout << (isSumPossible(A, N, S) ? "YES" : "NO") << endl;
    }

    return 0;
}