#include <bits/stdc++.h>
using namespace std;

int *sort_it(int N)
{
    int *arr = new int[N];
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + N, greater<int>());
    return arr;
}

int main()
{
    int N;
    cin >> N;

    int *A = sort_it(N);

    for (int i = 0; i < N; i++)
    {
        cout << A[i] << " ";
    }

    delete[] A;

    return 0;
}