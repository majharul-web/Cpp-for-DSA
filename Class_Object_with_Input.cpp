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
};

int main()
{
    // create object

    Student robin, karim;
    cin.getline(robin.name, 100);
    cin >> robin.cgpa >> robin.group >> robin.roll;

    cin.ignore();

    cin.getline(karim.name, 100);
    cin >> karim.roll >> karim.cgpa >> karim.group;

    cout << robin.name << " " << robin.roll << " " << robin.cgpa << " " << robin.group << endl;

    cout << karim.name << " " << karim.roll << " " << karim.cgpa << " " << karim.group << " ";

    return 0;
}