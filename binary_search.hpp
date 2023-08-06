#ifndef BINARY
#define BINARY
#include <vector>

template <typename T>
int binary_search_recursive(const std::vector<T>& vec, int last, int end, int key) {
    if(last <= end) {
        int mid = (last + end) / 2;
        if(vec[mid] == key) {
            return mid;
        } else if(vec[mid] > key) {
            return binary_search_recursive(vec, last, mid - 1, key);
        } else {
            return binary_search_recursive(vec, mid + 1, end, key);
        }
    }
    return -1;
}

template <typename T>
int binary_search_iterative(const std::vector<T>& vec, int last, int end, int key) {
    while(last <= end) {
        int mid = (last + end) / 2;
        if(vec[mid] == key) {
            return mid;
        } else if(vec[mid] > key) {
            end = mid - 1;
        } else {
            last = mid + 1;
        }
    }
    return -1;
}

#endif
