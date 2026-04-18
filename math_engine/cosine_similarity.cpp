#include <iostream>
#include <vector>
#include <math_engine.h>
#include <cmath>
#include <stdexcept>

double MathEngine::calculateCosineSimilarity(
    const Matrix& matrix_memory1, int rowIndex1,
    const Matrix& matrix_memory2, int rowIndex2) {
    
        double mag1 = calculateMagnitude(matrix_memory1, rowIndex1);
        double mag2 = calculateMagnitude(matrix_memory2, rowIndex2);

        double denominator = mag1 * mag2;

        if (denominator == 0) throw std::domain_error("Cosine similarity is undefined for zero-length vectors.");

        return calculateDotProduct(matrix_memory1, rowIndex1, matrix_memory2, rowIndex2) / denominator;

}