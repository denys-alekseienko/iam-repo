#include <iostream>
#include <vector>
#include <math_engine.h>
#include <cmath>
using namespace std;

double MathEngine::calculateMagnitude(const Matrix& matrix_memory, int rowIndex) {
    int start_index = rowIndex * matrix_memory.getColumns();
    double sum = 0;

    for (int i = 0; i < matrix_memory.getColumns(); i++) {
        double vect_num = matrix_memory.getData()[start_index + i];
        sum += (vect_num * vect_num);
    }

    return sqrt(sum);
}

