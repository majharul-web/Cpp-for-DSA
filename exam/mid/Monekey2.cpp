#include <bits/stdc++.h>
using namespace std;

int main()
{
    char inputStr[1000];
    while (cin.getline(inputStr, 1000))
    {
        char withoutSpaceStr[1000];
        int j = 0;
        for (int i = 0; inputStr[i] != '\0'; ++i)
        {
            if (inputStr[i] != ' ')
            {
                withoutSpaceStr[j++] = inputStr[i];
            }
        }
        withoutSpaceStr[j] = '\0';
        sort(withoutSpaceStr, withoutSpaceStr + j);
        cout << withoutSpaceStr << endl;
    }
    return 0;
}
