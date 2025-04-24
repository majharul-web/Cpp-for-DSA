#include <bits/stdc++.h>
using namespace std;

int main()
{
    string S;
    getline(cin, S);

    stringstream strm(S);
    string word;

    bool isJessica = false;

    while (strm >> word)
    {
        if (word == "Jessica")
        {
            isJessica = true;
            break;
        }
    }

    cout << (isJessica ? "YES" : "NO") << endl;
}