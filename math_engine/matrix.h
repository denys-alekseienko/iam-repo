#include <iostream>
#include <vector>
using namespace std;

class Matrix {
    private:
        int rows;
        int columns;
        vector<double> data;
    public:
        Matrix(int r, int c) : rows(r), columns(c), data(r * c) {};
        int getRows() const {
            return rows;
        }
        int getColumns() const {
            return columns;
        }
        const vector<double>& getData() const {
            return data;
        }
};