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

// Constructor: A constructor is a special member function of a class that is automatically called when an object of the class is created. It is used to initialize the data members of the class. The constructor has the same name as the class and does not have a return type. The constructor is defined inside the class. For example, class Student { Student() { } }; defines a constructor Student() of the class Student. It does not have a return type.

// There are two types of constructors: Default constructor and Parameterized constructor.

// Default constructor: A constructor that does not take any arguments is called a default constructor. It is used to initialize the data members of the class to their default values. For example, class Student { Student() { name = ""; rollNo = 0; } }; defines a default constructor Student() of the class Student.

// Parameterized constructor: A constructor that takes arguments is called a parameterized constructor. It is used to initialize the data members of the class to the values passed as arguments. For example, class Student { Student(string studentName, int studentRollNo) { name = studentName; rollNo = studentRollNo; } }; defines a parameterized constructor Student(string studentName, int studentRollNo) of the class Student.
class User
{

private:
    int id;
    string password;

public:
    User()
    {
        cout << "Default constructor" << endl;
    }
    User(int id)
    {
        cout << "Parameterised constructor" << endl;
        this->id = id;
    }
    string usrename;

    void setPassword(string password)
    {
        this->password = password;
    }
    string getPassword()
    {
        return password;
    }
};

int main()
{
    // Student s1;
    // s1.setName("Sonu Sharma");
    // s1.rollNo = 101;
    // s1.setCGPA(9.5);
    // s1.details();
    // cout << "Percentage: " << s1.getPercentage() << endl;

    User user0;
    User user1(1);
    user1.setPassword("qwertyuiop1234567890");
    cout << user1.getPassword() << endl;
}