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
        cin >> student[i].name >> student[i].role >> student[i].marks;
    }

    Student mn;
    mn.marks = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (mn.marks > student[i].marks)
        {
            mn = student[i];
        }
    }

    cout << mn.name << " " << mn.role << " " << mn.marks << endl;

    return 0;
}
