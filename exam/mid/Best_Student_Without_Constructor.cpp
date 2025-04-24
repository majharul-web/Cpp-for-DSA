#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int ID;
    string Name;
    char Section;
    int TotalMarks;
};

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        Student students[3];

        for (int i = 0; i < 3; i++)
        {
            cin >> students[i].ID >> students[i].Name >> students[i].Section >> students[i].TotalMarks;
        }

        Student bestStudent = students[0];
        for (int i = 0; i < 3; i++)
        {
            if (students[i].TotalMarks > bestStudent.TotalMarks ||
                (students[i].TotalMarks == bestStudent.TotalMarks && students[i].ID < bestStudent.ID))
            {
                bestStudent = students[i];
            }
        }

        cout << bestStudent.ID << " "
             << bestStudent.Name << " "
             << bestStudent.Section << " "
             << bestStudent.TotalMarks << endl;
    }

    return 0;
}
