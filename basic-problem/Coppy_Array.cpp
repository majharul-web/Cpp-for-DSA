#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, M;

    cout << "Enter value for N" << endl;
    cin >> N;
    int *A = new int[N];

    cout << "Enter value for A array" << endl;
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    cout << "Enter value for M" << endl;
    cin >> M;

    int *B = new int[M];

    for (int i = 0; i < N; i++)
    {
        B[i] = A[i];
    }

    delete[] A;

    cout << "Enter value for B array" << endl;
    for (int i = N; i < M; i++)
    {
        cin >> B[i];
    }

    for (int i = 0; i < M; i++)
    {
        cout << B[i] << " ";
    }

    delete[] B;

    return 0;
}