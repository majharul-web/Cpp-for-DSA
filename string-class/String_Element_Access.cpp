#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    cout << "print using index : " << s[2] << endl;
    cout << "print using at() : " << s.at(3) << endl;
    cout << "print using front() : " << s.front() << endl;
    cout << "print using back() : " << s.back() << endl;

    return 0;
}