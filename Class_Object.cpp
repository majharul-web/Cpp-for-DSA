#include <bits/stdc++.h>
using namespace std;

// declare class
class Student
{

public:
    char name[100];
    int role;
    float cgpa;
    string group;
};

int main()
{
    // create object

    Student robin;
    robin.group = "A";
    robin.role = 1;
    robin.cgpa = 3.92;
    char temp[100] = "robin";
    strcpy(robin.name, temp);

    cout << robin.name << " " << robin.role << " " << robin.cgpa << " " << robin.group << " ";

    return 0;
}