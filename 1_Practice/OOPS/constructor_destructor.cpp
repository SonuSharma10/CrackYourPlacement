#include <iostream>
#include <string>
using namespace std;

class Animal
{
public:
    string type;
    string color;
    // Constructor with no arguments Base Constructor
    Animal()
    {
        cout << "This object has atttribute like type and color" << endl;
    }

    // Constructor with arguments Parameterized Constructor
    Animal(string type, string color)
    {
        this->color = color;
        this->type = type;
    }

    // member function
    void display()
    {
        cout << "Animal Type: " << type << endl;
        cout << "Animal Color: " << color << endl;
    }

    // Destructor is called when object is destroyed
    ~Animal()
    {
        cout << "Object is destroyed" << endl;
    }
};

int main()
{
    Animal a1("Dog", "Black");
    a1.display();
    Animal a2;
    a2.type = "Cat";
    a2.color = "White";
    a2.display();
}