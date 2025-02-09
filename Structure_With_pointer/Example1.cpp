#include<iostream>
#include<string>
using namespace std;
struct  students
{
    string name;
    int age;
    float marks;

};

int main(){
    students *stdpt = new students;

    cout << "Enter student name: ";
    cin >> stdpt->name;
    

    cout << "Enter student age: ";
    cin >> stdpt->age;

    cout << "Enter student marks: ";
    cin >> stdpt->marks;

    cout << "NAME: " << stdpt->name << endl;
    cout <<"Age: " << stdpt->age << endl;
    cout<< "MARKS: " << stdpt->marks << endl;

    return 0;
}
