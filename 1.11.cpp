#include <iostream>

int main() {
    system("chcp 65001");

    const int r = 4, c = 4;
    int matricya[r][c] = {};

    int number = 1;

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            matricya[i][j] = number++;
        }
    }

    for (int i = 1; i < r; i++) {
        for (int j = 0; j < i; j++) {
            matricya[i][j] = matricya[j][i];
        }
    }

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            std::cout << matricya[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}