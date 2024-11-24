#include <bits/stdc++.h>
using namespace std;

int main()
{

    string str1 = "Hello majhu";
    string str2 = "world";

    // str1[1] = 'u';

    // str1 += str2;
    // str1 += "B";

    // str1.append(str2);

    // add character to the last of the string.
    // str1.push_back('A');

    // remove the last character of the string
    // str1.pop_back();

    // str1 = "Gello";

    // str1.assign(str2);
    // str1.assign("Hi");

    // remove all from 5 index
    // str1.erase(5);
    // remove 3 el from 5 index
    // str1.erase(5, 3);

    // replace a portion of the string.
    // delete 5 char
    // str1.replace(6, 5, "Bangladesh");
    // delete 0 char
    // str1.replace(6, 0, "Bangladesh ");

    // insert a portion to a specific position.
    str1.insert(6, "sajid ");

    cout
        << "str : " << str1 << endl;

    return 0;
}