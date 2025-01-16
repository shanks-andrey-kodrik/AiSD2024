#include <iostream>
#include <vector>
#include "L411_143.h"
#include "L410_143.h"
using namespace std;

int main() {
    vector<int> s = {12, 11, 13, 5, 6, 7}; 

    cout << "Input: ";
    for (int i : s) {
        cout << i << " ";
    }
    cout << endl;

    mergeSort(s, 0, s.size() - 1);

    cout << "Sorted: ";
    for (int i : s) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}