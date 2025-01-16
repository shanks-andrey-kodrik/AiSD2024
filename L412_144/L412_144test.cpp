#include <iostream>
#include <vector>
#include "L412_144.h"
#include "L413_145.h"
using namespace std;

int main() {
    vector<int> s = {10, 7, 8, 9, 1, 5};

    cout << "Input: ";
    for (int i : s) {
        cout << i << " ";
    }
    cout << endl;

    quickSort(s, 0, s.size() - 1);

    cout << "Sorted: ";
    for (int i : s) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}