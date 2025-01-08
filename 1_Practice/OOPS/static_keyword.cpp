// static keyword in C++
// The static keyword is used to declare static variables and static member functions in C++. A static variable is a variable that is shared by all instances of a class. It is declared using the keyword static. A static member function is a member function that is called using the class name rather than an object of the class. It is declared using the keyword static. The static keyword can be used with variables, functions, and classes.
// basic syntax of static keyword:
// static int x;
// static void func();
// static class MyClass;
// static int x = 10;

#include <iostream>
using namespace std;

class Student
{
public:
    static int count;
    static void displayCount()
    {
        cout << "Total Students: " << count++ << endl;
    }

    // constructor
    Student()
    {
        cout << "Constructor called" << endl;
    }
    // destructor
    ~Student()
    {
        cout << "Destructor called" << endl;
    }
};

int Student::count = 0;

int main()
{
    Student s1, s2, s3;
    // here count is same for all objects and pointing to the same memory location
    s1.displayCount();
    s2.displayCount();
    s3.displayCount();

    cout << endl;
    int i = 3;

    if (i == 3)
    {
        Student s4;
        cout << "Inside if block Created object S4 without static and it will be deleted after if block" << endl;
    }

    cout << "object 4 deleted :) " << endl;

    if (i == 3)
    {
        static Student s5;
        cout << "Inside if block" << endl;
    }
    cout << "End of main after this the destructor will be called" << endl;
    return 0;
}