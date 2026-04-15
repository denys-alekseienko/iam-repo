#include <iostream>
#include <vector>
#include <iam/sorting_engine/sorting_engine.h>
using namespace std;

void MergeSort::mergeSort(vector<int>& nums, int left, int right) {
    if (left >= right) return;

    int mid = left + (right - left) / 2;

    mergeSort(nums, left, mid);
    mergeSort(nums, mid + 1, right);

    merge(nums, left, mid, right);
}

void MergeSort::merge(vector<int>& nums, int left, int mid, int right) {
    vector<int> temp_buffer;

    int i = left;
    int j = mid + 1;

    while (i <= mid && j <= right) {
        if (nums[i] > nums[j]) {
            temp_buffer.push_back(nums[j]);
            j++;
        } else {
            temp_buffer.push_back(nums[i]);
            i++;
        }
    }

    while (i <= mid) {
        temp_buffer.push_back(nums[i]);
        i++;
    }

    while (j <= right) {
        temp_buffer.push_back(nums[j]);
        j++;
    }

    for (int k = 0; k < temp_buffer.size(); k++) {
        nums[left + k] = temp_buffer[k];
    }
}
