#include <bits/stdc++.h>
using namespace std;

int main()
{
    int myAge;
    string myName;

    cout << "Enter your age : " << endl;
    cin >> myAge;

    cout << "Enter your name : " << endl;

    // use cin.ignore() for enter issue;
    cin.ignore();
    getline(cin, myName);

    cout << "Your Age : " << myAge << endl;
    cout << "Your Name : " << myName << endl;

    return 0;
}