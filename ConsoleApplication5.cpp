#include "ArrCount.h"
#include "ArrMinMax.h"
#include "Arrsum.h"
#include "Arrcharact.h"
#include "ArrConverted.h"
#include <iostream>

int main() {
    const int size = 5;
    int arr[size] = { 7, 5, 9, 3, 2 };

    ArrConverted converter;
    int** twoDArray = converter.convertTo2D(arr, size);

    std::cout << "Two-Dimensional Array:" << std::endl;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            std::cout << twoDArray[i][j] << " ";
        }
        std::cout << std::endl;
    }

    Arrcharact* characteristics = new Arrsum();
    characteristics->rahCharact(arr, size);

    delete characteristics;

    characteristics = new Arrsum();
    characteristics->rahCharact(twoDArray, size, size);
    delete characteristics;

    characteristics = new ArrMinMax();
    characteristics->rahCharact(arr, size);

    delete characteristics;

    characteristics = new ArrCount();
    characteristics->rahCharact(arr, size);

    delete characteristics;

    converter.delete2DArray(twoDArray, size);

    return 0;
}
