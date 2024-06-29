#include <iostream>
#include <deque>

int main() {
    std::deque<int> myDeque;

    // Insert elements at back
    myDeque.push_back(1);
    myDeque.push_back(2);

    // Insert elements at front
    myDeque.push_front(3);
    myDeque.push_front(4);

    // Access elements
    std::cout << "Front element: " << myDeque.front() << std::endl;
    std::cout << "Back element: " << myDeque.back() << std::endl;

    // Remove elements from front
    myDeque.pop_front();

    // Remove elements from back
    myDeque.pop_back();

    return 0;
}
