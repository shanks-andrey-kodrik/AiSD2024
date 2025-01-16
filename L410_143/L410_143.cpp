#include <iostream>
#include <vector>
#include "L411_143.h"
using namespace std;

void mergeSort(vector<int>& s, int low, int high) {
    if (low < high) {
        int middle = low + (high - low) / 2;
        mergeSort(s, low, middle);
        mergeSort(s, middle + 1, high);
        merge(s, low, middle, high);
    }
}
