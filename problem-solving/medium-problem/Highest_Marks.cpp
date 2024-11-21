#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    char section;
    int math_marks;
    string cls;

    Student(const char *name,
            int roll,
            char section,
            int math_marks,
            const char *cls)
    {
        this->name = name;
        this->roll = roll;
        this->section = section;
        this->math_marks = math_marks;
        this->cls = cls;
    }
};

int main()
{

    // create object
    Student a = Student("rahim Ahmed", 1, 'A', 78, "six");
    Student b = Student("karim Ahmed", 2, 'A', 65, "six");
    Student c = Student("raju Ahmed", 3, 'A', 95, "six");

    cout << a.name << " " << a.roll << " " << a.section << " " << a.math_marks << " " << a.cls << endl;

    cout << b.name << " " << b.roll << " " << b.section << " " << b.math_marks << " " << b.cls << endl;

    cout << c.name << " " << c.roll << " " << c.section << " " << c.math_marks << " " << c.cls << endl;

    Student *top_student = &a;

    if (b.math_marks > top_student->math_marks)
    {
        top_student = &b;
    }
    if (c.math_marks > top_student->math_marks)
    {
        top_student = &c;
    }

    cout << "Top scorer in Math: " << top_student->name << endl;

    return 0;
}