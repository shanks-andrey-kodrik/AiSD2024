#include <iostream>
#include <vector>
#include "L414_145.h"
using namespace std;

int main() {

    // Пример отсортированного массива
    std::vector<int> s = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; 
    int key = 5; 
    int result = binary_search(s, key, 0, s.size() - 1); 

    if (result != -1) {
        std::cout << "Found on index: " << result << std::endl;
    } else {
        std::cout << "Not found" << std::endl;
    }

    return 0;
}
