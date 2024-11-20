#include <bits/stdc++.h>
using namespace std;

// declare class
class Student
{
public:
    char name[100];
    int roll;
    float cgpa;
    string group;

    Student(const char name[100], int roll, float cgpa, string group)
    {
        // here this is a pointer
        strcpy(this->name, name);
        this->roll = roll;
        this->cgpa = cgpa;
        this->group = group;
    }
};

Student *func()
{
    /*
        in this case we get gurbase value for stack memory clear
     */
    Student karim("Karim Ahmed", 2, 3.56, "V");
    Student *p = &karim;
    return p;
}

int main()
{
    // create object

    Student *karim = func();

    cout << karim->name << " " << karim->roll << " " << karim->cgpa << " " << karim->group << endl;

    return 0;
}