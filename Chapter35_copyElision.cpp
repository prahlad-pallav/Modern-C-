#include <iostream>

// Copy elision is an optimization technique in C++ that allows the compiler to avoid unnecessary copying or moving of objects. 
// It typically occurs during the process of initializing variables or returning values from functions.

class MyClass {
public:
    // Constructor
    MyClass() {
        std::cout << "Constructor called" << std::endl;
    }

    // Copy Constructor
    MyClass(const MyClass& other) {
        std::cout << "Copy Constructor called" << std::endl;
    }
};

MyClass createObject() {
    return MyClass();
}

int main() {
    MyClass obj = createObject();
    return 0;
}


