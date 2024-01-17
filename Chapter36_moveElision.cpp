#include <iostream>

// Move elision is a concept similar to copy elision, but it involves the optimization of move operations. 
// Move elision aims to eliminate unnecessary moves of objects, often in scenarios where temporary objects are created and then moved.

class MyResource {
public:
    MyResource() {
        std::cout << "Resource created" << std::endl;
    }

    // Move Constructor
    MyResource(MyResource&& other) noexcept {
        std::cout << "Move Constructor called" << std::endl;
    }

    ~MyResource() {
        std::cout << "Resource destroyed" << std::endl;
    }
};

MyResource createResource() {
    std::cout << "Creating a resource in the function" << std::endl;
    return MyResource();
}

int main() {
    std::cout << "Calling the function to create a resource" << std::endl;
    MyResource resource = createResource();
    std::cout << "Resource creation in the main function complete" << std::endl;
    return 0;
}
