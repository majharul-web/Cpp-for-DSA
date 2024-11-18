#include <iostream>
using namespace std;

int main()
{
    // without space
    char str[100];
    cout << "Enter string without space" << endl;
    cin >> str;
    cout << "You Entered string without space: " << str << endl;

    // with space
    char str_2[100];

    cin.ignore(); // Clear the input buffer to avoid issues with leftover newline

    cout << "Enter string with space" << endl;
    cin.getline(str_2, 100);
    cout << "You Entered string with space: " << str_2 << endl;

    // using string
    string str3;
    cout << "Enter string using string" << endl;
    cin >> str3;
    cout << "You Entered string using string: " << str3 << endl;

    return 0;
}
