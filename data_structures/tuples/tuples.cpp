#include <iostream>
#include <tuple>
#include <type_traits> // for std::tuple_size, std::get

// Function to print elements of a tuple using structured bindings and fold expression
template<typename... Args>
void printTuple(const std::tuple<Args...>& tup) {
    std::apply([](auto&&... args) {
        ((std::cout << args << " "), ...);
    }, tup);
    std::cout << std::endl;
}

int main(){

    std::tuple<int, double, std::string, float> tuple1(10, 3.14, "Hello", 0.5);

    // Accessing elements of a tuple
    std::cout << "First element: " << std::get<0>(tuple1) << std::endl;
    std::cout << "Second element: " << std::get<1>(tuple1) << std::endl;
    std::cout << "Third element: " << std::get<2>(tuple1) << std::endl;
    std::cout << "Fourth element: " << std::get<3>(tuple1) << std::endl;


    // Print the size of the tuple
    constexpr auto tupleSize = std::tuple_size<decltype(tuple1)>::value;
    std::cout << "Size of the tuple: " << tupleSize << std::endl;
    
    //Print tuple with function
    std::cout << "Tuple elements: ";
    printTuple(tuple1);
    
    return 0;
}