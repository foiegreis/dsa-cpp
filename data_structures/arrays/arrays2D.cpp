#include <iostream>

void print2DArray(const int arr[][4], const int rows){
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < 4; j++){
            std::cout <<arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

void printRowSums(const int arr[3][4], int rows, int cols){
    for(int i = 0; i < rows; i++){
        int rowSum = 0;
        for(int j = 0; j < cols; j++){
            rowSum += arr[i][j];
        }
        std::cout << "Sum of row " << i << " = " << rowSum << std::endl;
    }
}

void printColSums(const int arr[3][4], int rows, int cols){
    for(int j = 0; j < cols; j++){
        int colSum = 0;
        for(int i = 0; i < rows; i++){
            colSum += arr[i][j];
        }
        std::cout << "Sum of col " << j << " = " << colSum << std::endl;
    }
}




int main(){

    int arr[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    std::cout <<"2D array of elements: " << std::endl;
    print2DArray(arr, 3);

    std::cout <<"Sum of rows: " <<  std::endl;
    printRowSums(arr, 3, 4);

    std::cout <<"Sum of cols: " <<  std::endl;
    printColSums(arr, 3, 4);

    return 0;
}