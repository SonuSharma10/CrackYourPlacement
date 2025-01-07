#include <iostream>
#include <string>
using namespace std;

// Inheritence: Inheritance is a mechanism in which one class acquires the properties and behavior of another class. The class that inherits the properties and behavior is called the derived class, and the class whose properties and behavior are inherited is called the base class. Inheritance is used to create a new class that is built upon an existing class. The new class can add new
// access modifiers: public, private, protected
// public: The public access specifier allows the members of the class to be accessed from outside the class. The public members of the class are accessible from outside the class using the object of the class
// private: The private access specifier allows the members of the class to be accessed only from within the class. The private members of the class are not accessible from outside the class using the object of the class. The private
// protected: The protected access specifier allows the members of the class to be accessed from the derived class. The protected members of the class are accessible from the derived class using the object of the derived class.

// Types of Inheritance:
// Single Inheritance: In single inheritance, a class inherits the properties and behavior of only one class. For example, class B inherits the properties and behavior of class A.
// Multiple Inheritance: In multiple inheritance, a class inherits the properties and behavior of more than one class. For example, class C inherits the properties and behavior of class A and class B at the same time.
// Multilevel Inheritance: In multilevel inheritance, a class inherits the properties and behavior of another class, and the derived class becomes the base class for another class. For example, class C inherits the properties and behavior of class B, and class D inherits the properties and behavior of class C.
// Hierarchical Inheritance: In hierarchical inheritance, more than one class inherits the properties and behavior of a single class. For example, class B and class C inherit the properties and behavior of class A.

class Animal
{
public:
    void eat()
    {
        cout << "Eating..." << endl;
    }
    void sleep()
    {
        cout << "Sleeping..." << endl;
    }
};
class Fish : virtual public Animal
{
public:
    void swim()
    {
        cout << "Fish Swimming..." << endl;
    }
};
class Bird : virtual public Animal
{
public:
    void fly()
    {
        cout << "Flying..." << endl;
    }
};
class Dog : virtual public Animal
{
public:
    void swim()
    {
        cout << "Dog Swimming..." << endl;
    }
    void walk()
    {
        cout << "Walking..." << endl;
    }
};

class Frog : public Fish, public Dog
{
public:
    void jump()
    {
        cout << "Jumping..." << endl;
    }
};

int main()
{
    cout << "Inheritence of Fish extends Animal" << endl;
    Fish f;
    f.eat();
    f.sleep();
    f.swim();
    cout << endl;
    cout << "Inheritence of Bird extends Animal" << endl;
    Bird b;
    b.eat();
    b.sleep();
    b.fly();
    cout << endl;
    cout << "Inheritence of Dog extends Animal" << endl;
    Dog d;
    d.eat();
    d.sleep();
    d.walk();

    cout << "multiple inheritance" << endl;
    Frog fr;
    fr.eat();
    fr.sleep();
    fr.Fish::swim();
    fr.Dog::swim();
    fr.walk();
    fr.jump();

    return 0;
}