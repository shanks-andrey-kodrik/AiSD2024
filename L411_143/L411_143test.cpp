#include <iostream>
#include <vector>
#include "L411_143.h"
using namespace std;

int main() {
\\предварительно отсортированный массив для слияния
    std::vector<int> s = {1, 3, 5, 7, 2, 4, 6, 8};

    int low = 0;
    int middle = 3; 
    int high = 7;  

    merge(s, low, middle, high);
\\результат должен быть 1 2 3 4 5 6 7 8
    std::cout << "Result ";
    for (int num : s) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}