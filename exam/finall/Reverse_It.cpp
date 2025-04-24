#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int student_class;
    char section;
    int id;

    void print()
    {
        cout << name << " " << student_class << " " << section << " " << id << endl;
    }
};

int main()
{
    int N;
    cin >> N;

    Student students[N];

    for (int i = 0; i < N; i++)
    {
        cin >> students[i].name >> students[i].student_class >> students[i].section >> students[i].id;
    }

    for (int i = 0; i < N / 2; i++)
    {
        swap(students[i].section, students[N - i - 1].section);
    }

    for (int i = 0; i < N; i++)
    {
        students[i].print();
    }

    return 0;
}
