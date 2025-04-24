#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
    int ID;
    string Name;
    char Section;
    int TotalMarks;

    // Constructor to initialize the student information
    Student(int id, string name, char section, int totalMarks)
    {
        ID = id;
        Name = name;
        Section = section;
        TotalMarks = totalMarks;
    }

    // Function to print student details
    void print()
    {
        cout << ID << " " << Name << " " << Section << " " << TotalMarks << endl;
    }
};

int main()
{
    int T; // Number of test cases
    cin >> T;

    // Loop through each test case
    while (T--)
    {
        // Create 3 Student objects
        Student student1(0, "", ' ', 0);
        Student student2(0, "", ' ', 0);
        Student student3(0, "", ' ', 0);

        // Input details for student 1
        cin >> student1.ID >> student1.Name >> student1.Section >> student1.TotalMarks;
        // Input details for student 2
        cin >> student2.ID >> student2.Name >> student2.Section >> student2.TotalMarks;
        // Input details for student 3
        cin >> student3.ID >> student3.Name >> student3.Section >> student3.TotalMarks;

        // Assume student1 has the highest marks initially
        Student bestStudent = student1;

        // Compare student2 with the best student
        if (student2.TotalMarks > bestStudent.TotalMarks ||
            (student2.TotalMarks == bestStudent.TotalMarks && student2.ID < bestStudent.ID))
        {
            bestStudent = student2;
        }

        // Compare student3 with the best student
        if (student3.TotalMarks > bestStudent.TotalMarks ||
            (student3.TotalMarks == bestStudent.TotalMarks && student3.ID < bestStudent.ID))
        {
            bestStudent = student3;
        }

        // Print the details of the student with the highest marks or smallest ID in case of a tie
        bestStudent.print();
    }

    return 0;
}
