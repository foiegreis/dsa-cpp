#include <iostream>
#include <utility> //for std::pair and std::make_pair



int main(){


    // Initialize a pair of pairs
    std::pair<int, int> pair1 = std::make_pair(10, 20);
    std::pair<int, int> pair2 = std::make_pair(30, 40);
    std::pair<std::pair<int, int>, std::pair<int, int>> pairOfPairs(pair1, pair2);

    // Access and print elements of pairOfPairs
    std::cout << "First pair: (" << pairOfPairs.first.first << ", " << pairOfPairs.first.second << ")" << std::endl;
    std::cout << "Second pair: (" << pairOfPairs.second.first << ", " << pairOfPairs.second.second << ")" << std::endl;

    return 0;
}