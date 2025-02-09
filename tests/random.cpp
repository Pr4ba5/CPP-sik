#include <iostream>
#include <string>
using namespace std;

class students
{
private:
    string name;
    int rollNumber;
    float marks[3];

public:
    void Store_data()
    {

        cout << "Enter the name of the student: ";
        getline(cin, name);

        cout << "Enter the roll number of the student: ";
        cin >> rollNumber;

        cout << "Enter the marks of the student(math,science, english): ";
        for (int i = 0; i < 3; i++)
        {

            cin >> marks[i];
        }
        cin.ignore();
    }

    void display_data()
    {
        cout << "NAME: " << name << endl;
        cout << "ROll NUMBER : " << rollNumber << endl;
        cout << "MARKS ON: " << endl;
        cout << "     MATH: " << marks[0]<< endl;
        cout << "     SCIENCE: " << marks[1]<< endl;
        cout << "     ENGLISH: " << marks[2]<< endl;
    }

    float avg_marks() const
    {
        float sum = 0;
        for (int a = 0; a < 3; a++)
        {
            sum += marks[a];
        }
        return sum / 3;
    }

};

int main()
{
    int n;

    cout << "Enter the number of student: ";
    cin >> n;
    cin.ignore();

    students student[n];

    // storing students data
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the datails for student no " << i + 1 << ":\n";
        student[i].Store_data();
    }

    // displaying stored data
    for (int p = 0; p < n; p++)
    {
        cout << "Details of student number " << p + 1 << ":\n";
        student[p].display_data();
        cout << "Avegae marks: " << student[p].avg_marks() << endl;
    }
}