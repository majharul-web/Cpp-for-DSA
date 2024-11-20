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

    Student(const char n[100], int r, float c, string g)
    {
        strcpy(name, n);
        roll = r;
        cgpa = c;
        group = g;
    }
};

int main()
{
    // create object
    Student robin("Robin Ahmed", 1, 3.92, "A");
    Student karim("Karim Ahmed", 2, 3.56, "V");

    cout << robin.name << " " << robin.roll << " " << robin.cgpa << " " << robin.group << endl;
    cout << karim.name << " " << karim.roll << " " << karim.cgpa << " " << karim.group << endl;

    return 0;
}