#include <iostream>

// a non-member function for operator overloading is essentially a global function. 
// When overloading operators as non-member functions, you create a function outside the class, and it takes two (or more) parameters explicitly. 
// The left operand is passed as the first parameter, and the right operand is passed as the second parameter.


class ComplexNumber {
private:
    double real;
    double imaginary;

public:
    ComplexNumber(double r, double i) : real(r), imaginary(i) {}

    // Display the complex number
    void display() const {
        std::cout << real << " + " << imaginary << "i";
    }

    // Declare the non-member function for operator overloading
    friend ComplexNumber operator+(const ComplexNumber& num1, const ComplexNumber& num2);
};

// Define the non-member function for operator overloading
ComplexNumber operator+(const ComplexNumber& num1, const ComplexNumber& num2) {
    return ComplexNumber(num1.real + num2.real, num1.imaginary + num2.imaginary);
}

int main() {
    ComplexNumber num1(2.0, 3.0);
    ComplexNumber num2(1.5, 2.5);

    // Using the overloaded '+' operator as a non-member function
    ComplexNumber sum = num1 + num2;

    // Display the result
    std::cout << "Sum: ";
    sum.display();
    std::cout << std::endl;

    return 0;
}
