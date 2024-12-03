#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int role;
    int marks;
};

int main()
{
    int n;
    cin >> n;

    Student student[n];

    for (int i = 0; i < n; i++)

    {
        cin.ignore();
        getline(cin, student[i].name);
        cin >> student[i].role >> student[i].marks;
    }

    for (int i = 0; i < n; i++)
    {
        cout << student[i].name << " " << student[i].role << " " << student[i].marks << " " << endl;
    }

    return 0;
}