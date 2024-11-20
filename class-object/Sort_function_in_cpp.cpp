#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cout << "Enter Your array length \n";
    cin >> N;

    int arr[N];
    cout << "Enter Your array element \n";
    for (int i = 0; i < N; i++)
    {

        cin >> arr[i];
    }

    // ascending
    // sort(arr, arr + N);

    // descending
    sort(arr, arr + N, greater<int>());

    cout << "Your sorted array is \n";

    for (int i = 0; i < N; i++)

    {
        cout << arr[i] << " ";
        }

    return 0;
}