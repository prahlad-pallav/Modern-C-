#include <iostream>
#include <string>

class MyString {
public:
    // Constructor
    MyString(const char* str) {
        std::cout << "Constructor called" << std::endl;
        size = strlen(str);
        data = new char[size + 1];
        strcpy_s(data, size + 1, str);
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

    // Move Assignment Operator
    MyString& operator=(MyString&& other) noexcept {
        std::cout << "Move Assignment Operator called" << std::endl;
        if (this != &other) {
            // Release the resources of the current object
            delete[] data;

            // Move resources from the source object
            size = other.size;
            data = other.data;

            // Reset the source object
            other.size = 0;
            other.data = nullptr;
        }
        return *this;
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

    // Use the Move Constructor to transfer resources
    MyString destination1 = std::move(source);

    // Use the Move Assignment Operator to transfer resources
    MyString destination2 = std::move(destination1);

    return 0;
}
