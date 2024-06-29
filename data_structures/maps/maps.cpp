#include <iostream>
#include <map>
#include <string>

void printMap(std::map<int, std::string> &myMap){
    for (const auto& pair : myMap) {
    std::cout << pair.first << ": " << pair.second << std::endl;
}
}

int main(){

    //Initialization 
    std::map<int, std::string> map1 = {{1, "one"}, {2, "two"}, {3, "three"}};
    
    //Insertion
    map1.insert({4, "four"});

    //Print
    std::cout << "The map is: " << std::endl;
    printMap(map1);

    //Iteration through elements
    std::cout << "Iterating through the map: " << std::endl;
    for (auto it = map1.begin(); it != map1.end(); ++it) {
        std::cout << it->first << ": " << it->second << std::endl;
    }   

    //Remove element by key
    map1.erase(2);

    std::cout << "The map is: " << std::endl;
    printMap(map1);

    //Size of the map
    size_t size = map1.size();
    std::cout << "The size of the map is: " << size << std::endl;

    //Check if the map is empty
    bool is_empty = map1.empty();
    std::cout << "Is the map empty? " << (is_empty? "True" : "False") << std::endl;


    return 0;
}