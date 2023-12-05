#pragma once
#include "Arrcharact.h"

class Arrsum : public Arrcharact {
public:
    void rahCharact(int* arr, int size) override;
    void rahCharact(int** arr, int rows, int cols);
};