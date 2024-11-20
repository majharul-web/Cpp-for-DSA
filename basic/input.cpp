#include <iostream>
using namespace std;

int main()
{

    int age;
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

    int ascii = group;

    cout << "My name is:" << name << endl
         << "Age:" << age << '\n'
         << "Institute:" << institute << '\n'
         << "Group:" << group << endl
         << "cgpa:" << cgpa << endl;

    cout << "Ascii of Group:" << ascii << endl;
    cout << "Type Casting of Group:" << (int)group;

    return 0;
}