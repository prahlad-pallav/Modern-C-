#include <iostream>

// the friend keyword is used to grant non-member functions or other classes access to the private and protected members of a class. 
// When a function or class is declared as a friend of another class, it can access the private and protected members of that class as if it were a member of the class.

class MyClass {
private:
    int privateMember;

    // Declare a function as a friend
    friend void friendFunction(const MyClass& obj);

public:
    MyClass(int value) : privateMember(value) {}
};

// Definition of the friend function
void friendFunction(const MyClass& obj) {
    std::cout << "Accessing private member in friend function: " << obj.privateMember << std::endl;
}

int main() {
    MyClass myObject(42);

    // Call the friend function
    friendFunction(myObject);

    return 0;
}
