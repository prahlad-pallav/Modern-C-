#include <iostream>
#include <string>
using namespace std;

class Person {
private:
    string name;
    int age;

public:
    // Delegating constructor with default values
    // Delegating constructors allow a constructor to call another constructor within the same class. 
    Person() : Person("Unknown", 0) {
        cout << "Delegating Constructor with default values" << endl;
    }

    // Parameterized constructor
    Person(string n, int a) : name(n), age(a) {
        cout << "Parameterized Constructor called" << endl;
    }

    // Copy constructor
    Person(const Person& other) : Person(other.name, other.age) {
        cout << "Copy Constructor called" << endl;
    }

    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    Person person1;

    Person person2("John Doe", 25);

    // Using the copy constructor (delegating to the parameterized constructor)
    Person person3 = person2;

    cout << "\nPerson 1:" << endl;
    person1.display();

    cout << "\nPerson 2:" << endl;
    person2.display();

    cout << "\nPerson 3 (copied from Person 2):" << endl;
    person3.display();

    return 0;
}
