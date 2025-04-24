#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int cls;
    char section;
    int id;
    int math_marks;
    int eng_marks;
};

bool compareStudents(Student l, Student r)
{
    if (l.eng_marks == r.eng_marks)
    {
        if (l.math_marks == r.math_marks)
        {
            return l.id < r.id;
        }
        else
        {
            return l.math_marks > r.math_marks;
        }
    }
    else
    {
        return l.eng_marks > r.eng_marks;
    }
}

int main()
{
    int N;
    cin >> N;

    Student students[N];

    for (int i = 0; i < N; ++i)
    {
        cin >> students[i].name >> students[i].cls >> students[i].section >> students[i].id >> students[i].math_marks >> students[i].eng_marks;
    }

    sort(students, students + N, compareStudents);

    for (int i = 0; i < N; ++i)
    {
        cout << students[i].name << " " << students[i].cls << " " << students[i].section << " " << students[i].id << " "
             << students[i].math_marks << " " << students[i].eng_marks << endl;
    }

    return 0;
}
