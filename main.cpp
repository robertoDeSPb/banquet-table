#include <iostream>

int main() {
    int cutlery[6][2];
    int dishes[6][2];
    int chairs[6][2];
    for (int i = 0; i < 6; ++i) {
        for (int j = 0; j < 2; ++j) {
            if (j == 0 && i == 0 || j == 1 && i == 0) {
                cutlery[i][j] = 4;
                dishes[i][j] = 3;
            } else {
                cutlery[i][j] = 3;
                dishes[i][j] = 2;
            }
            chairs[i][j] = 1;
        }
    }
    chairs[4][0] += 1;
    cutlery[2][1] -= 1;
    cutlery[0][0] -= 1;
    dishes[0][0] -= 1;
    std::cout << "Cutlery count: " << std::endl;
    for (int i = 0; i < 6; ++i) {
        for (int j = 0; j < 2; ++j) {
            std::cout << cutlery[i][j] << " ";
        }
        std::cout << std::endl;
    }
    std::cout << "dishes count: " << std::endl;
    for (int i = 0; i < 6; ++i) {
        for (int j = 0; j < 2; ++j) {
            std::cout << dishes[i][j] << " ";
        }
        std::cout << std::endl;
    }
    std::cout << "Chairs count: " << std::endl;
    for (int i = 0; i < 6; ++i) {
        for (int j = 0; j < 2; ++j) {
            std::cout << chairs[i][j] << " ";
        }
        std::cout << std::endl;
    }
}