#include <iostream>
#include <string>
using namespace std;

int main()
{
    int T;
    cin >> T;
    cin.ignore();

    while (T--)
    {
        string S, X;
        getline(cin, S, ' ');
        getline(cin, X);

        int position = S.find(X);
        cout << "outside loop : " << position << endl;

        while (position != string::npos)
        {
            S.replace(position, X.length(), "#");
            position = S.find(X, position + 1);

            cout << "inside loop : " << position << endl;
        }

        cout << S << endl;
    }

    return 0;
}
