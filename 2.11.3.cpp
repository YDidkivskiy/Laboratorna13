#include <iostream>
#include <cstdlib>

const int columns = 4, rows = 4;

void randomnumbers(int kvmatrix[columns][rows]) {
    for (int column = 0; column < columns; ++column) {
        for (int row = 0; row < rows; ++row) {
            kvmatrix[column][row] = std::rand();
        }
    }
}

void printMatrix(int kvmatrix[columns][rows]) {
    for (int i = 0; i < columns; ++i) {
        for (int j = 0; j < rows; ++j) {
            std::cout << kvmatrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    system("chcp 65001");

    int kvmatrix[columns][rows] = {};

    randomnumbers(kvmatrix);

    std::cout << "Матриця:" << std::endl;
    printMatrix(kvmatrix);

    return 0;
}