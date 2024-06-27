#include <iostream>
#include <tuple>

int main() {
    // Define a nested tuple
    std::tuple<int, std::tuple<double, char>, std::string> nestedTuple(
        10,
        std::make_tuple(3.14, 'A'),
        "Nested Tuple Example"
    );

    // Access elements of the nested tuple
    int firstElement = std::get<0>(nestedTuple); // Accessing the first element
    auto secondTuple = std::get<1>(nestedTuple); // Accessing the second tuple
    std::string thirdElement = std::get<2>(nestedTuple); // Accessing the third element

    // Access elements of the inner tuple
    double innerFirst = std::get<0>(secondTuple); // Accessing the double in the second tuple
    char innerSecond = std::get<1>(secondTuple); // Accessing the char in the second tuple

    // Print elements
    std::cout << "First element: " << firstElement << std::endl;
    std::cout << "Second tuple: (" << innerFirst << ", " << innerSecond << ")" << std::endl;
    std::cout << "Third element: " << thirdElement << std::endl;

    return 0;
}
