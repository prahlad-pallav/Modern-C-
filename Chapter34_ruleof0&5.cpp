#include <iostream>
#include <cstring>

class MyString {
public:
    // Constructor
    MyString(const char* str) {
        std::cout << "Constructor called" << std::endl;
        size = strlen(str);
        data = new char[size + 1];
        strcpy_s(data, size+1, str);
    }

    // Rule of 5: Destructor
    ~MyString() {
        std::cout << "Destructor called" << std::endl;
        delete[] data;
    }

    // Rule of 5: Copy Constructor
    MyString(const MyString& other) {
        std::cout << "Copy Constructor called" << std::endl;
        size = other.size;
        data = new char[size + 1];
        strcpy_s(data, size + 1, other.data);
    }

    // Rule of 5: Copy Assignment Operator
    MyString& operator=(const MyString& other) {
        std::cout << "Copy Assignment Operator called" << std::endl;
        if (this != &other) {
            delete[] data;
            size = other.size;
            data = new char[size + 1];
            strcpy_s(data, size + 1, other.data);
        }
        return *this;
    }

    // Rule of 5: Move Constructor
    MyString(MyString&& other) noexcept {
        std::cout << "Move Constructor called" << std::endl;
        size = other.size;
        data = other.data;
        other.size = 0;
        other.data = nullptr;
    }

    // Rule of 5: Move Assignment Operator
    MyString& operator=(MyString&& other) noexcept {
        std::cout << "Move Assignment Operator called" << std::endl;
        if (this != &other) {
            delete[] data;
            size = other.size;
            data = other.data;
            other.size = 0;
            other.data = nullptr;
        }
        return *this;
    }

private:
    size_t size;
    char* data;
};

int main() {
    // Rule of 0: Let the compiler handle special member functions
    MyString source("Hello, World!");
    MyString destination1 = source;  // Copy Constructor
    MyString destination2 = source;  // Copy Assignment Operator

    MyString destination3 = std::move(source);  // Move Constructor
    MyString destination4 = std::move(destination3);  // Move Assignment Operator

    return 0;
}
