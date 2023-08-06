#include <iostream>
#include <vector>
#include "linear_search.hpp"
#include "binary_search.hpp"
#include "jump_search.hpp"
#include "ternary_search.hpp"

int main() {
    std::vector<int> data = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    
    int key_linear = 11;
    int result_linear = linear_search(data, key_linear);
    if (result_linear != -1) {
        std::cout << "Linear Search: Key found at index " << result_linear << std::endl;
    } else {
        std::cout << "Linear Search: Key not found." << std::endl;
    }

    int key_binary = 7;
    int result_binary_recursive = binary_search_recursive(data, 0, data.size() - 1, key_binary);
    int result_binary_iterative = binary_search_iterative(data, 0, data.size() - 1, key_binary);
    if (result_binary_recursive != -1) {
        std::cout << "Binary Search (Recursive): Key found at index " << result_binary_recursive << std::endl;
    } else {
        std::cout << "Binary Search (Recursive): Key not found." << std::endl;
    }
    if (result_binary_iterative != -1) {
        std::cout << "Binary Search (Iterative): Key found at index " << result_binary_iterative << std::endl;
    } else {
        std::cout << "Binary Search (Iterative): Key not found." << std::endl;
    }

    int key_jump = 15;
    int result_jump = jump_search(data, key_jump);
    if (result_jump != -1) {
        std::cout << "Jump Search: Key found at index " << result_jump << std::endl;
    } else {
        std::cout << "Jump Search: Key not found." << std::endl;
    }

    int key_ternary = 9;
    int result_ternary = ternary_search(data, 0, data.size() - 1, key_ternary);
    if (result_ternary != -1) {
        std::cout << "Ternary Search: Key found at index " << result_ternary << std::endl;
    } else {
        std::cout << "Ternary Search: Key not found." << std::endl;
    }

    return 0;
}
