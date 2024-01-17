#include <iostream>
#include <utility>

// The primary purpose of std::move is to convert an lvalue (an object with a name, usually a variable) into an rvalue reference, enabling the use of move semantics.

class MyString {
public:
    // Constructor
    MyString(const char* str) {
        std::cout << "Constructor called" << std::endl;
        size = strlen(str);
        data = new char[size + 1];
        strcpy_s(data, size+1, str);
    }

    // Move Constructor
    MyString(MyString&& other) noexcept {
        std::cout << "Move Constructor called" << std::endl;
        size = other.size;
        data = other.data;

        // Reset the source object
        other.size = 0;
        other.data = nullptr;
    }

    // Destructor
    ~MyString() {
        std::cout << "Destructor called" << std::endl;
        delete[] data;
    }

private:
    size_t size;
    char* data;
};

int main() {
    // Create a MyString object using the constructor
    MyString source("Hello, World!");

    // Use the Move Constructor with std::move to transfer resources
    MyString destination1 = std::move(source);

    return 0;
}
