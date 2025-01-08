// polymorphism: poly means many and morphism means forms. It is a feature that allows one interface to be used for a general class of actions. The specific action is determined by the exact nature of the situation. In C++, polymorphism is mainly divided into two types:
// types of polymorphism
// Compile-time polymorphism: It is also known as static polymorphism. It is achieved by function overloading and operator overloading. Function overloading is a feature that allows creating multiple functions with the same name but with different parameters. Operator overloading is a feature that allows redefining the meaning of operators for user-defined data types. For example, the + operator can be redefined to add two objects of a class.
// Run-time polymorphism: It is also known as dynamic polymorphism. It is achieved by function overriding and virtual functions. Function overriding is a feature that allows creating a function in a derived class with the same name and signature as a function in the base class. Virtual functions are functions that are declared in the base class and can be redefined in the derived class. The function to be called is decided at runtime based on the type of object pointed to by the base class pointer.
// function vs virtual function: A function is a block of code that performs a specific task. A virtual function is a member function of a class that is declared as virtual in the base class and redefined in the derived class. The virtual keyword is used to specify that the function can be overridden in the derived class. The function to be called is decided at runtime based on the type of object pointed to by the base class pointer.
// abstraction: Abstraction is a concept of hiding the implementation details and showing only the essential features of an object. It is achieved by using abstract classes and interfaces. An abstract class is a class that cannot be instantiated and can have abstract methods. An abstract method is a method that is declared in the abstract class but does not have a body. An interface is a class that contains only abstract methods and cannot have data members. It is used to achieve multiple inheritance in C++.
// syntax of abstract class or pure virtual function:
// class AbstractClass {
//     public:
//         virtual void abstractMethod() = 0;
// };

// syntax of interface:
// class Interface {
//     public:
//         virtual void method1() = 0;
//         virtual void method2() = 0;
// };

#include <iostream>
#include <string>
using namespace std;

// Abstract class
class Draw
{
public:
    virtual void draw() = 0;
};

class Circle : public Draw
{
public:
    void draw()
    {
        cout << "Drawing Circle" << endl;
    }
};

class Rectangle : public Draw
{
public:
    void draw()
    {
        cout << "Drawing Rectangle" << endl;
    }
};

// polymorphism
class Person
{
public:
    void display()
    {
        cout << "Person" << endl;
    }
    void display(int age)
    {
        cout << "Person's age is " << age << endl;
    }
};

int main()
{
    Circle c;
    Rectangle r;
    c.draw();
    r.draw();
    cout << endl;
    Person p;
    p.display();
    p.display(20);
    return 0;
}