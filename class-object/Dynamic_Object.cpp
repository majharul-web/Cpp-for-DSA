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

        // alter native of arrow sign,dereference this pointer

        /*
        strcpy((*this).name, name);
        (*this).roll = roll;
        (*this).cgpa = cgpa;
        (*this).group = group;
        */
    }
};

int main()
{
    // create object
    Student robin("Robin Ahmed", 1, 3.92, "A");

    // create dynamic object
    Student *karim = new Student("Karim Ahmed", 2, 3.56, "V");

    cout << robin.name << " " << robin.roll << " " << robin.cgpa << " " << robin.group << endl;

    cout << karim->name << " " << karim->roll << " " << karim->cgpa << " " << karim->group << endl;

    return 0;
}