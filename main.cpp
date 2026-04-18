#include <iostream>
#include <vector>
#include <iam/math_engine/math_engine.h>

int main() {
    MathEngine mathEngine;

    int rows = 10;
    int cols = 2;

    Matrix memory(rows, cols);
    Matrix query(1, cols);

    for(int i = 0; i < rows; ++i) {
        memory.setValue(i, 0, i * 0.1); 
        memory.setValue(i, 1, 1.0 - (i * 0.1));
    }

    query.setValue(0, 0, 0.5);
    query.setValue(0, 1, 0.5);

    std::cout << "Searching for best match..." << std::endl;

    for(int i = 0; i < rows; ++i) {
    try {
        double sim = mathEngine.calculateCosineSimilarity(query, 0, memory, i);
        std::cout << "Memory index [" << i << "] similarity: " << sim << std::endl;
    } catch (...) {
        }
    }
    return 0;
}