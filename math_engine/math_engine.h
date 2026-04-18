#include <iostream>
#include <vector>
#include <matrix.h>
using namespace std;

class MathEngineInterface {
    public:
        virtual double calculateMagnitude(const Matrix& matrix_memory, int rowIndex) = 0;
        virtual double calculateDotProduct(
            const Matrix& matrix_memory1, 
            int rowIndex1, 
            const Matrix& matrix_memory2, 
            int rowIndex2) = 0;
        virtual double calculateCosineSimilarity(
            const Matrix& matrix_memory1, int rowIndex1,
            const Matrix& matrix_memory2, int rowIndex2) = 0;
        virtual ~MathEngineInterface() {}
};

class MathEngine : public MathEngineInterface {
    public:
        double calculateMagnitude(const Matrix& matrix_memory, int rowIndex);
        double calculateDotProduct(
            const Matrix& matrix_memory1, 
            int rowIndex1, 
            const Matrix& matrix_memory2, 
            int rowIndex2
        );
        double calculateCosineSimilarity(
            const Matrix& matrix_memory1, int rowIndex1,
            const Matrix& matrix_memory2, int rowIndex2);
};

