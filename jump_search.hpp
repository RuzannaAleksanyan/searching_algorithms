#ifndef JUMP 
#define JUMP

#include <vector>
#include <bits/stdc++.h>

template <typename T>
int jump_search(const std::vector<T>& vec, int key) {
    int step = sqrt(vec.size());

    int prev = 0;
    while (vec[std::min(step, (int)vec.size())-1] < key)
    {
        prev = step;
        step += sqrt(vec.size());
        if (prev >= vec.size()) {
            return -1;
        }
    }
 
    while (vec[prev] < key)
    {
        prev++;
 
        if (prev == std::min(step, (int)vec.size())) {
            return -1;
        }
    }

    if (vec[prev] == key) {
        return prev;
    }
 
    return -1;
}

#endif
