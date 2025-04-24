#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string S;

    // Read input until EOF
    while (getline(cin, S))
    {
        // Remove spaces from the string
        S.erase(remove(S.begin(), S.end(), ' '), S.end());

        // Sort the string
        sort(S.begin(), S.end());

        // Output the sorted string
        cout << S << endl;
    }

    return 0;
}