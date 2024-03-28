#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    string studentClass;
    int rollNumber;
    int marks;

public:
    Student(string n, string cls, int roll, int m) {
        name = n;
        studentClass = cls;
        rollNumber = roll;
        marks = m;
    }

    char calculateGrade() const {
        if (marks >= 90)
            return 'A';
        else if (marks >= 80)
            return 'B';
        else if (marks >= 70)
            return 'C';
        else if (marks >= 60)
            return 'D';
        else
            return 'F';
    }

    void displayInfo() const {
        cout << "Name: " << name << endl;
        cout << "Class: " << studentClass << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks: " << marks << endl;
        cout << "Grade: " << calculateGrade() << endl;
    }
};

int main() {
    string name, studentClass;
    int rollNumber, marks;

    cout << "Enter student name: ";
    getline(cin, name);

    cout << "Enter student class: ";
    getline(cin, studentClass);

    cout << "Enter student roll number: ";
    cin >> rollNumber;

    cout << "Enter student marks: ";
    cin >> marks;

    Student student(name, studentClass, rollNumber, marks);

    student.displayInfo();

    return 0;
}
