#include <iostream>

// When you overload an operator as a member function, the left operand is implicitly the object for which the function is called.

class ComplexNumber {
private:
    double real;
    double imaginary;

public:
    ComplexNumber(double r, double i) : real(r), imaginary(i) {}

    // Overload the '+' operator as a member function
    ComplexNumber operator+(const ComplexNumber& other) const {
        return ComplexNumber(real + other.real, imaginary + other.imaginary);
    }

    // Display the complex number
    void display() const {
        std::cout << real << " + " << imaginary << "i" << std::endl;
    }
};

int main() {
    ComplexNumber num1(2.0, 3.0);
    ComplexNumber num2(1.5, 2.5);

    // Using the overloaded '+' operator
    ComplexNumber sum = num1 + num2;

    // Display the result
    std::cout << "Sum: ";
    sum.display();

    return 0;
}
