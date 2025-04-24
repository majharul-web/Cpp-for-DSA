#include <bits/stdc++.h>
using namespace std;

int main()
{
    char S[100000];
    while (cin.getline(S, 100000))
    {
        int len = strlen(S);

        sort(S, S + len);

        for (int i = 0; i < len; i++)
        {
            if (S[i] != ' ')
            {
                cout << S[i];
            }
        }

        cout << endl;
    }

    return 0;
}
