#include "Arrsum.h"
#include <iostream>
void Arrsum::rahCharact(int* arr, int size) {
    int sum = 0;
    int dob = 1;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
        dob *= arr[i];
    }
    std::cout << "Sum: " << sum << std::endl;
    std::cout << "Dobytok: " << dob << std::endl;
}
void Arrsum::rahCharact(int** arr, int rows, int cols) {
    int sum = 0;
    int dob = 1;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum += arr[i][j];
            dob *= arr[i][j];
        }
    }
    std::cout << "Sum2: " << sum << std::endl;
    std::cout << "Dobytok2: " << dob << std::endl;
}