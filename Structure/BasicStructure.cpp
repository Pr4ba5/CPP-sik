#include <iostream>
#include<string>
using namespace std;

struct  student
{
    string name;
    int age;
    float marks;

};

int main(){
    student Student;

    cout << "Enter the name, age, marks of student: ";
    cin >> Student.name >> Student.age >> Student.marks;

    cout << "==== STUDENT DETAILS ====" << endl;
    cout << "NAME:" << Student.name << endl;
    cout << "AGE:" << Student.age << endl;
    cout << "MARKS:" << Student.marks << endl;


    return 0;



}
