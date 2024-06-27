#include <iostream>
#include <vector>

using Matrix = std::vector<std::vector<int>>;

void printMatrix(std::vector<std::vector<int>> &matrix){
    for(const std::vector<int>& row : matrix){ //also const auto&row
        for(const int num : row){
            std::cout << num << " ";
        }
        std::cout << std::endl;
    }
}

Matrix multiplyMatrices(Matrix &matrix1, Matrix &matrix2){

    // Check if matrix multiplication is valid
    if (matrix1.empty() || matrix2.empty() || matrix1[0].size() != matrix2.size()) {
        std::cerr << "Invalid matrix dimensions for multiplication!" << std::endl;
        return {};
    }

    // Initialize the result matrix with appropriate dimensions and initialize all elements to 0
    Matrix result(matrix1.size(), std::vector<int>(matrix2[0].size(), 0));

    // Perform matrix multiplication
    for (size_t i = 0; i < matrix1.size(); ++i) {
        for (size_t j = 0; j < matrix2[0].size(); ++j) {
            for (size_t k = 0; k < matrix2.size(); ++k) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
    return result;
}

int main(){

    std::vector<std::vector<int>> matrix1 = {
        {1, 2},
        {3, 4},
        {5, 6}
    };

    std::vector<std::vector<int>> matrix2 = {
        {1, 2, 3},
        {4, 5, 6}
    };

    std::cout << "First matrix: " << std::endl;
    printMatrix(matrix1);

    std::cout << "Second matrix: " << std::endl;
    printMatrix(matrix2);

    std::cout << "Matrix multiplication: " << std::endl;
    Matrix result = multiplyMatrices(matrix1, matrix2);
    printMatrix(result);





}