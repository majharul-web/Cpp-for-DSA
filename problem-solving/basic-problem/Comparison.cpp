#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A, B;
    char S;
    cin >> A >> S >> B;

    bool result = (S == '<' && A < B) ||
                  (S == '>' && A > B) ||
                  (S == '=' && A == B);

    cout << (result ? "Right" : "Wrong") << endl;

    return 0;
}