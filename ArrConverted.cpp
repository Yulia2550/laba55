#include "ArrConverted.h"
#include <iostream>

int** ArrConverted::convertTo2D(int arr[], int size) {
    const int rows = 5;
    const int cols = 5;

    int** twoDArray = new int* [rows];

    for (int i = 0; i < rows; i++) {
        twoDArray[i] = new int[cols];
        for (int j = 0; j < cols; j++) {
            twoDArray[i][j] = arr[j];
        }
    }

    return twoDArray;
}

void ArrConverted::delete2DArray(int** arr, int size) {
    for (int i = 0; i < size; i++) {
        delete[] arr[i];
    }
    delete[] arr;
}