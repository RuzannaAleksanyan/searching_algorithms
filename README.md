# Searching Algorithms
This repository contains C++ header files implementing various searching algorithms. These algorithms help you find the position of a target value within a sorted array or list efficiently.
# Table of Contents
- [Linear](#Linear)
- [Binary](#Binary)
- [Jump](#Jump)
- [Ternary](#Ternary)
- [How_to_Use](#How_to_Use)
- [Contributions](#Contributions)
- [Test](#Test)
#Linear
linear_search.hpp implements the Linear Search algorithm. Linear Search sequentially searches through each element of the array to find a target value.
#Binary
binary_search.hpp implements both recursive and iterative Binary Search algorithms. Binary Search divides the array in half and checks if the target value is in the left or right subarray.
#Jump
jump_search.hpp implements the Jump Search algorithm. Jump Search divides the array into blocks and performs a linear search within the selected block.
#Ternary
ternary_search.hpp implements the Ternary Search algorithm. Ternary Search divides the search range into three parts and recursively narrows down the search interval.
How_to_Use
- Clone this repository or download the individual header files.
- Include the desired search algorithm header in your C++ code.
- Create a sorted std::vector of integers and populate it with the data you want to search in.
- Call the appropriate search function with the vector, search range (if required), and the target value.
#Test
The test file checks the correctness of all functions.
