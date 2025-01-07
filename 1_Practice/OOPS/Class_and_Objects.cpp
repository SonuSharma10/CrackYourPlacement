#include <iostream>
#include <string>
using namespace std;

// OOPS: Object-Oriented Programming System

// Class: A class is a user-defined data type that can have data members and member functions. The data members are the attributes of the class, and the member functions are the methods of the class. The class is defined using the keyword class followed by the class name. The attributes and methods of the class are defined
// inside the class using the access specifiers public, private, or protected. The class definition is terminated by a semicolon. For example, class Student { }; defines a class Student.
// class is not a function, rather it becoes a data type

// Object : An object is an instance of a class. When a class is defined, no memory is allocated for the data members of the class. Memory is allocated only when an object of the class is created. An object is created using the class name followed by the object name and the semicolon. For example, Student s1; creates an object s1 of the class Student.
class Student
{
private:
    float cgpa = 0.0;

public:
    // Attributes or data members
    string name;
    int rollNo;
    // Methods or member functions or procedures
    void details()
    {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        if (cgpa != 0.0)
            cout << "CGPA: " << cgpa << endl;
    }
    // setters
    void setCGPA(float cgpa)
    {
        this->cgpa = cgpa;
    }
    void setName(string studentName)
    {
        name = studentName;
    }
    // getters
    int getPercentage()
    {
        if (cgpa == 0.0)
        {
            cout << "CGPA not set. Use setCGPA method" << endl;
            return 0;
        }
        else
            return cgpa * 10;
    }
};

int main()
{
    Student s1;
    s1.setName("Sonu Sharma");
    s1.rollNo = 101;
    s1.setCGPA(9.5);
    s1.details();
    cout << "Percentage: " << s1.getPercentage() << endl;
}