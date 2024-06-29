#include <iostream>
#include <memory> // Include the <memory> header to use smart pointers

int main() {
    // Example of using std::unique_ptr
    std::unique_ptr<int> uniquePtr = std::make_unique<int>(10);

    // Example of using std::shared_ptr
    std::shared_ptr<int> sharedPtr = std::make_shared<int>(20);

    // Example of using std::weak_ptr
    std::shared_ptr<int> sharedPtr2 = std::make_shared<int>(30);
    std::weak_ptr<int> weakPtr = sharedPtr2;

    // Accessing the object through smart pointers
    std::cout << "Value from uniquePtr: " << *uniquePtr << std::endl;
    std::cout << "Value from sharedPtr: " << *sharedPtr << std::endl;
    if (auto shared = weakPtr.lock()) {
        std::cout << "Value from weakPtr: " << *shared << std::endl;
    } else {
        std::cout << "Weak pointer expired" << std::endl;
    }

    return 0;
}

