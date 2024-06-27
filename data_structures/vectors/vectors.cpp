#include <iostream>
#include <vector>
#include <algorithm>


void printVector(std::vector<int> &vec){
    for (const int num : vec){
        std::cout << num << " ";
    }
    std::cout << std::endl;
}

void deleteElement(std::vector<int> &vec, const int indx){
    if (!vec.empty()){
        vec.erase(vec.begin() + indx); //element at index 1
    }
}

int findElement(std::vector<int> vec, const int key){
    auto i = std::find(vec.begin(), vec.end(), key);
    return std::distance(vec.begin(), i);
}

int main(){

    std::vector<int> vect = {10, 20};

    //Insert elements
    vect.push_back(30);
    vect.push_back(40);

    //Another way
    //int arr[] = {1, 2, 3,4, 5};
    //std::vector<int> vec(arr, arr + 5) // Creates a vector with elements {1, 2, 3, 4, 5}


    //Traversing and printing
    std::cout << "Vector of integers: ";
    printVector(vect);

    //Indexing
    std::cout << "Element at index 2: " << vect[2] << std::endl;

    //Modify elements
    vect[2] = -30;
    std::cout << "Modified vector of integers: ";
    printVector(vect);

    //Sorted vector, from <algorithm>
    std::sort(vect.begin(), vect.end());
    std::cout << "Sorted vector: ";
    printVector(vect);

    //Delete elements
    std::cout << "Vector after deleting element at index 0: ";
    deleteElement(vect, 0);
    printVector(vect);

    //Find element
    int key = 40;
    int idx = findElement(vect, key);
    std::cout << "Element " << key << " found at index " << idx << std::endl;

    //vec.clear() to clean the vector
    vect.clear();
    std::cout << "Cleared vector: ";
    printVector(vect);

    //vec.resize() to resize vector
    vect.resize(7, 10);
    std::cout << "New and resized vector: ";
    printVector(vect);


    return 0;
}