
#include "ArrMinMax.h"
#include <iostream>

void ArrMinMax::rahCharact(int* arr, int size) {
    int min = arr[0];
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    std::cout << "Minimum: " << min << std::endl;
    std::cout << "Maximum: " << max << std::endl;
}
void ArrMinMax::rahCharact(int** arr, int rows, int cols) {
    int min = arr[0][0];
    int max = arr[0][0];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (arr[i][j] < min) {
                min = arr[i][j];
            }
            if (arr[i][j] > max) {
                max = arr[i][j];
            }
        }
    }
    std::cout << "Minimum: " << min << std::endl;
    std::cout << "Maximum: " << max << std::endl;
}

