#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int role;
    int marks;
};

// Comparison function
bool cmp(Student l, Student r)
{
    return (l.marks == r.marks) ? l.role < r.role : l.marks > r.marks;
}

int main()
{

    int n;
    cin >> n;

    Student student[n];

    for (int i = 0; i < n; i++)
    {
        cin >> student[i].name >> student[i].role >> student[i].marks;
    }

    sort(student, student + n, cmp);

    for (int i = 0; i < n; i++)
    {
        cout << student[i].name << " " << student[i].role << " " << student[i].marks << endl;
    }

    return 0;
}
