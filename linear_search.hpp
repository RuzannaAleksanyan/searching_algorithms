#ifndef LINERAL
#define LINERAL

#include <vector>

int linear_serch(std::vector<int> vec, int key) {
    for(int i = 0; i < vec.size(); ++i) {
        if(vec[i] == key) {
            return i;
        }
    }
    return -1;
}

#endif
