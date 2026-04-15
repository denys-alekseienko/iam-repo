#include <iostream>
#include <vector>
#include <iam\math_engine\matrix.h>
using namespace std;

class MathEngineInterface {
    public:
        virtual double calculateMagnitude(const Matrix& matrix_memory, int rowIndex) = 0;
        virtual double calculateDotProduct(
            const Matrix& matrix_memory1, 
            int rowIndex1, 
            const Matrix& matrix_memory2, 
            int rowIndex2) = 0;
        virtual ~MathEngineInterface() {}
};

class MathEngine {
    public:
        double calculateMagnitude(const Matrix& matrix_memory, int rowIndex);
        double calculateDotProduct(
            const Matrix& matrix_memory1, 
            int rowIndex1, 
            const Matrix& matrix_memory2, 
            int rowIndex2
        );
};

