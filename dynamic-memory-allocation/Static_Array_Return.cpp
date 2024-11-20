#include <bits/stdc++.h>
using namespace std;

int *func()
{
    int a[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }

    return a;
}

int main()
{

    int *a = func();

    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}

// got err: "Segmentation fault"