#include "ArrCount.h"
#include <iostream>

void ArrCount::rahCharact(int* arr, int size) {
    int positive = 0;
    int negative = 0;
    int zero = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] > 0) {
            positive++;
        }
        else if (arr[i] < 0) {
            negative++;
        }
        else {
            zero++;
        }
    }
    std::cout << "Positive Count: " << positive << std::endl;
    std::cout << "Negative Count: " << negative << std::endl;
    std::cout << "Zero Count: " << zero << std::endl;
}

void ArrCount::rahCharact(int** arr, int rows, int cols) {
    int count = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (arr[i][j] % 2 == 0) {
                count++;
            }
        }
    }
    std::cout << "Count of even numbers: " << count << std::endl;
}