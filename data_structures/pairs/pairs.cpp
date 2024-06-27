#include <iostream>
#include <utility> //for std::pair and std::make_pair




int main(){


    std::pair<int, double> pair1(5, 6.5);

    auto pair2 = std::make_pair(30, 40.5);

    //Access elements
    std::cout << "First pair" << std::endl;
    std::cout << "Firts element: " << pair1.first << std::endl;
    std::cout << "Second element: " << pair1.second << std::endl;

    std::cout << "Second pair" << std::endl;
    std::cout << "Firts element: " << pair2.first << std::endl;
    std::cout << "Second element: " << pair2.second << std::endl;

    //Swap pairs
    pair1.swap(pair2);

    //Access using structured binding (c++ 17)
    auto [first_el, second_el] = pair1;
    std::cout << "After swap" << std::endl;
    std::cout << "First pair" << std::endl;
    std::cout << "Firts element: " << first_el << std::endl;
    std::cout << "Second element: " << second_el << std::endl;

    std::cout << "Second pair" << std::endl;
    std::cout << "Firts element: " << pair2.first << std::endl;
    std::cout << "Second element: " << pair2.second << std::endl;

    return 0;
}