#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int A[N];
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    bool isPalindrome = true;
    for (int left = 0, right = N - 1; left < right; left++, right--)
    {
        if (A[left] != A[right])
        {
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
