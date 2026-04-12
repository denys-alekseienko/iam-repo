#include <iostream>
#include <vector>
#include <iam/search_engine/search_engine.h>
using namespace std;


Search_Engine::Search_Engine(vector<int> keys, vector<vector<double>> memory_matrix) {
    this->keys = move(keys);
        this->memory_matrix = move(memory_matrix);
    }

vector<double> Search_Engine::binarySearch(int target) {
    int left = 0;
    int right = keys.size() - 1;
    
    while(left <= right) {
        int mid = left + (right - left) / 2;
        
        if (keys[mid] == target) {
            return memory_matrix[mid];
        }
        if (keys[mid] < target) left = mid + 1;
        else right = mid - 1;
        
    }
    return {};
}