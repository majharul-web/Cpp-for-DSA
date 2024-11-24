#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str = "Hello World";

    // manual iteration

    // for (int i = 0; i < str.size(); i++)
    // {
    //     cout << "char " << i << " : " << str[i] << endl;
    // }

    // use string iterator

    // for old version(11/12)
    //  for (string::iterator it = str.begin(); it < str.end(); it++)

    for (auto it = str.begin(); it < str.end(); it++)
    {
        cout << "char : " << *it << endl;
    }

    return 0;
}