#ifndef TERNARY
#define TERNARY
#include <vector>
#include <bits/stdc++.h>

int ternary_search(const std::vector<int>& vec, int l, int r, int key)
{
    if (r >= l) {
 
        int mid1 = l + (r - l) / 3;
        int mid2 = r - (r - l) / 3;
 
        if (vec[mid1] == key) {
            return mid1;
        }
        if (vec[mid2] == key) {
            return mid2;
        }
 
        if (key < vec[mid1]) {
 
            return ternary_search(vec, l, mid1 - 1, key);
        }
        else if (key > vec[mid2]) {
 
            return ternary_search(vec, mid2 + 1, r, key);
        }
        else {
            return ternary_search(vec, mid1 + 1, mid2 - 1, key);
        }
    }
 
    return -1;
}

#endif
