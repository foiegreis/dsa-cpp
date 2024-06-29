#include <iostream>
#include <set>

void printMultiset(std::multiset<int> &myMultiset){
    for (int num : myMultiset){
        std::cout << num << " ";
    }
    std::cout << std::endl;
}

void findElement(std::multiset<int> &myMultiset, const int element){
    auto it = myMultiset.find(element);
    if (it != myMultiset.end()){
        std::cout << "Element found: " << *it << std::endl;
    } else {
        std::cout << "Element not found" << std::endl;
    }
}

int main() {
    std::multiset<int> ms1 = {1, 2, 2, 3, 4, 5};
    ms1.insert(3); //allows duplicates

    std::cout << "Multiset 1: ";
    printMultiset(ms1);

    std::multiset<int> ms2(ms1);

    // Insertion
    ms2.insert(6);
    ms2.insert(2); 

    // Erasure
    ms1.erase(2); // Erases all occurrences of 2
    ms1.erase(ms1.find(3)); // Erases one occurrence of 3

    // Finding an element
    findElement(ms1, 5);

    // Checking if a multiset is empty
    bool empty = ms1.empty();
    std::cout << "The multiset is empty: " << (empty? "true" : "false") << std::endl;

    // Size of the multiset
    size_t size = ms1.size();
    std::cout << "Multiset size is: " << size << std::endl;

    //Access elements
    for (auto it = ms1.begin(); it != ms1.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    return 0;
}