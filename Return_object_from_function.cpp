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

Student func()
{
    /*
        in this case karim behave as a variable thats why
        we get static object still function return
     */
    Student karim("Karim Ahmed", 2, 3.56, "V");
    return karim;
}

int main()
{
    // create object
    Student robin("Robin Ahmed", 1, 3.92, "A");

    Student karim = func();

    cout << robin.name << " " << robin.roll << " " << robin.cgpa << " " << robin.group << endl;
    cout << karim.name << " " << karim.roll << " " << karim.cgpa << " " << karim.group << endl;

    return 0;
}