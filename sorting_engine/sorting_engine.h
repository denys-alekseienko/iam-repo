#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class SortingEngineInterface {
    public:
        virtual void selectionSort(vector<int>& keys, vector<vector<double>>& matrix_memory) = 0;
        virtual int findMinElementAndIndex(vector<int>& keys, int start);
        virtual void mergeSort(vector<int>& nums, int left, int right) = 0;
        virtual void merge(vector<int>& nums, int left, int mid, int right) = 0;
        virtual ~SortingEngineInterface() {}
};

class SelectionSortEngine {
    public:
        void selectionSort(vector<int>& keys, vector<vector<double>>& matrix_memory);
        int findMinElementAndIndex(vector<int>& keys, int start);
};

class MergeSort {
    public:
        void mergeSort(vector<int>& nums, int left, int right);
        void merge(vector<int>& nums, int left, int mid, int right);
};