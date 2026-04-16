#include <iostream>
#include <vector>
#include <math_engine.h>
#include <cmath>
using namespace std;

double MathEngine::calculateDotProduct(
    const Matrix& matrix_memory1, 
    int rowIndex1, 
    const Matrix& matrix_memory2, 
    int rowIndex2) {
        int start_index1 = rowIndex1 * matrix_memory1.getColumns();
        int start_index2 = rowIndex2 * matrix_memory2.getColumns();
        double sum = 0;

        if (matrix_memory1.getColumns() != matrix_memory2.getColumns()) throw invalid_argument("Matrix columns must match for dot product.");

        for (int i = 0; i < matrix_memory1.getColumns(); i++) {
            sum += matrix_memory1.getData()[start_index1 + i] * matrix_memory2.getData()[start_index2 + i];
        }
        return sum;
}