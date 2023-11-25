#include <iostream>
#include <ctime>
#include <cstdlib>

int main() {
    system("chcp 65001");

    int x;

    std::cout << "Виберіть задачу:\n1. 1 Задача\n2. 2 Задача";
    std::cin >> x;

    switch (x) {
        case 1: {
            const int r = 3, c = 3;

            int matrix[r][c] = {
                    {1,  -3, 3},
                    {5,  -5, -9},
                    {-1, 5,  6}
            };

            int number = 0;

            for (int i = 0; i < r; i++) {
                for (int j = 0; j < c; j++) {
                    if (matrix[i][j] > 0) {
                        number++;
                    }
                }
            }

            for (int i = 0; i < r; i++) {
                for (int j = 0; j < c; j++) {
                    std::cout << matrix[i][j] << " ";
                }
                std::cout << std::endl;
            }

            std::cout << "Кількість додатніх елементів у матриці = " << number << std::endl;
            break;
        }

        case 2: {
            const int r1 = 3, c1 = 3;

            int matrix1[r1][c1] = {
                    {11, 3, 3},
                    {5,  5, -9},
                    {1,  5, 6}
            };

            for (int m = 0; m < c1; ++m) {
                for (int w = 0; w < r1; ++w) {
                    std::cout << matrix1[m][w] << " ";
                }
                std::cout << std::endl;
            }

            for (int m = 0; m < c1; ++m) {
                bool minus = false;
                int row = -1;

                for (int w = 0; w < r1; ++w) {
                    if (matrix1[w][m] < 0) {
                        minus = true;
                        row = w;
                        break;
                    }
                }

                std::cout << "Для стовпця " << m + 1 << ": ";
                if (minus) {
                    std::cout << "від'ємне число знаходиться в рядку " << row + 1 << std::endl;
                } else {
                    std::cout << "від'ємних чисел немає" << std::endl;
                }
            }
            break;
        }

        default:
            std::cout << "Невірний вибір" << std::endl;
            break;
    }

    return 0;
}