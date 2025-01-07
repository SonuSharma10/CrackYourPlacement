#include <iostream>
#include <string>
using namespace std;

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