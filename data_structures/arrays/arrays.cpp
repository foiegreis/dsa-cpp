#include <iostream>

void printArray(const int arr[], const int size){

    for(int i = 0; i < size; i++){
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int sumArray(const int arr[], const int size){
    int sum = 0;
    for(int i = 0; i < size; i++){
        sum += arr[i];
    }
    return sum;
}

int findMin(const int arr[], const int size){
    int minVal = arr[0];
    for(int i = 0; i < size; i++){
        if(arr[i] < minVal)
            minVal = arr[i];
    }
    return minVal;
}

int findMax(const int arr[], const int size){
    int maxVal = arr[0];
    for(int i = 0; i < size; i++){
        if(arr[i] > maxVal)
            maxVal = arr[i];
    }
    return maxVal;
}




int main(){

    int size = 10;
    int arr[size] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    std::cout << "Array of elements: ";
    printArray(arr, size);

    std::cout << "Sum of elements: " << sumArray(arr, size) << std::endl;
    std::cout << "Min val in array: " << findMin(arr, size) << std::endl;
    std::cout << "Max val in array: " << findMax(arr, size) << std::endl;



    return 0;

}