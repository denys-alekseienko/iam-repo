#include <iostream>
#include <vector>
#include <sorting_engine.h>
using namespace std;

int SelectionSortEngine::findMinElementAndIndex(vector<int>& keys, int start) {
    int min_num = INT_MAX;
    int min_idx = 0;
    if (keys.empty()) {
        return -1;
    }

    for (int i = start; i < keys.size(); i++) {

        if (keys[i] < min_num) {
            min_num = keys[i];
            min_idx = i;
        }
    }
    return min_idx;
}