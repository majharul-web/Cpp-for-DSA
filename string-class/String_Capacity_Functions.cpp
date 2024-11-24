#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "Hello Bangladesh";

    cout << "retrun size of string : " << s.size() << endl;
    cout << "returns the maximum size that string can hold : " << s.max_size() << endl;
    cout << "returns current available capacity of the string : " << s.capacity() << endl;
    cout << "return true/false if the string is empty : " << s.empty() << endl;

    s.resize(3);
    s.resize(32, 'X');
    cout << "change the size of the string : " << 3 << endl;
    s.clear();
    cout << "clear the string : " << s << endl;

    return 0;
}