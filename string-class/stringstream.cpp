#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    getline(cin, str);
    cout << str << endl;

    stringstream ss(str);

    string word;
    // ss >> word;
    // cout << word << endl;

    int count;
    while (ss >> word)
    {
        cout << word << endl;
        count += 1;
    }

    cout << "Total Char : " << count;

    return 0;
}