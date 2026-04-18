#include <iostream>
#include <vector>
#include <sorting_engine.h>
using namespace std;

void SelectionSortEngine::selectionSort(vector<int>& keys, vector<vector<double>>& matrix_memory) {
    for (int j = 0; j < keys.size(); j++) {
        int m_idx = findMinElementAndIndex(keys, j);
        swap(keys[j], keys[m_idx]);
        swap(matrix_memory[j], matrix_memory[m_idx]);
    }

}