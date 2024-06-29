#include <iostream>
#include <set>

void printSet(std::set<int> &mySet){
    for (int el : mySet){
        std::cout << el << " ";
    }
    std::cout << std::endl;
}

void findElement(std::set<int> &mySet, const int element){
    auto it = mySet.find(element);
    if (it!= mySet.end()){
        std::cout << "Element found : " << *it << std::endl; //*it returns element
    } else {
        std::cout << "Element not found in set" << std::endl;
    }
}

int main(){

    std::set<int> set1 = {1, 2, 3, 4, 5};

    //Insert
    set1.insert(6);
    //Delete element by value
    set1.erase(2);

    //Print
    printSet(set1);

    //Find element
    findElement(set1, 4);

    //Iterate through set and get elements
    for (auto it = set1.begin(); it != set1.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    return 0;
}