#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class SortingEngineInterface {
    public:
        virtual void selectionSort(vector<int>& keys, vector<vector<double>>& matrix_memory) = 0;
        virtual int findMinElementAndIndex(vector<int>& keys, int start);
        virtual ~SortingEngineInterface() {}
};

class SelectionSortEngine {
    public:
        void selectionSort(vector<int>& keys, vector<vector<double>>& matrix_memory);
        int findMinElementAndIndex(vector<int>& keys, int start);
};