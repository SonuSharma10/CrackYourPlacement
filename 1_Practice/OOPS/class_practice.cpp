#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
    string name;
    int age;
};

class Student : public Person
{
public:
    string studentID;
    void displayStudentInfo()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Student ID: " << studentID << endl;
    }

    // constructor
    Student(string name, int age, string studentID)
    {
        this->name = name;
        this->age = age;
        this->studentID = studentID;
    }
};

int main()
{
    Student student("Alice", 20, "S12345"); // Creating an object of the class Student
    student.displayStudentInfo();           // Calling the method displayStudentInfo
}