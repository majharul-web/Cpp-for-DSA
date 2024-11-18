#include <iostream>
using namespace std;

int main()
{

    int age = 24;
    string name;
    string institute;
    char group;
    float cgpa;

    cout << "Enter your name";
    cin >> name;

    cout << "Enter your age";
    cin >> age;

    cout << "Enter your institute";
    cin >> institute;

    cout << "Enter your group";
    cin >> group;

    cout << "Enter your cgpa";
    cin >> cgpa;

    cout << "My name is:" << name << endl
         << "Age:" << age << '\n'
         << "Institute:" << institute << '\n'
         << "Group:" << group << endl
         << "cgpa:" << cgpa;

    return 0;
}