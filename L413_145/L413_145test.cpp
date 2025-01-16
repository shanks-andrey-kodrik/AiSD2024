#include <iostream>
#include <vector>
#include <algorithm>
#include "L413_145.h"
using namespace std;

int main() {

    // вектор с неотсортированными данными
    std::vector<int> s = {10, 80, 30, 90, 40, 50, 70};

    // Определяем границы для разделения
    int low = 0;
    int high = s.size() - 1;

    int pivotIndex = partition(s, low, high);

    std::cout << "Result: ";
    for (int num : s) {
        std::cout << num << " ";
    }
    std::cout << "\nReference element index: " << pivotIndex << std::endl;

    return 0;
}