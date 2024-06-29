#include <iostream>
#include <map>

void printMultimap(std::multimap<int, std::string> &myMultimap){
    for (const auto& pair : myMultimap) {
        std::cout << "Key: " << pair.first << ", Value: " << pair.second << std::endl;
    }
}


int main(){

    std::multimap<int, std::string> numbers = {{1, "one"}, {2, "two"}, {2, "another two"}, {3, "three"}};

    // Inserting elements
    numbers.insert({4, "four"});
    numbers.insert({2, "yet another two"});

    // Accessing elements
    for (const auto& pair : numbers) {
        std::cout << "Key: " << pair.first << ", Value: " << pair.second << std::endl;
    }
    
    // Finding all values associated with key
    std::cout << "Finding all values associated with a key" << std::endl;
    int key = 2;

    auto range = numbers.equal_range(key);
    for (auto it = range.first; it != range.second; ++it) {
        std::cout << "Key: " << it->first << ", Value: " << it->second << std::endl;
    }

    //Check if empty
    bool is_empty = numbers.empty();
    std::cout << "Is the multimap empty? " << (is_empty ? "True" : "False") << std::endl;

    //Size of the multimap
    size_t size = numbers.size();
    std::cout << "The size of the multimap is: " << size << std::endl;

    return 0;
}