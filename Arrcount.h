
#pragma once
#include "Arrcharact.h"

class ArrCount : public Arrcharact {
public:
    void rahCharact(int* arr, int size) override;
    void rahCharact(int** arr, int rows, int cols) override;
};