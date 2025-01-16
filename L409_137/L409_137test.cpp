#include "L409_137.h"
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int A[] = {5, 2, 9, 1, 5, 6}; // Пример массива для сортировки
    int n = sizeof(A) / sizeof(A[0]);

    cout << "Default: ";
    for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }
    cout << endl;

    insertionSort(A, n);

    cout << "Sorted: ";
    for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }
    cout << endl;

    return 0;
}