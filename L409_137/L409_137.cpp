#include <iostream>
#include "L409_137.h"
using namespace std;

void insertionSort(int A[], int n) {
    for (int i = 1; i < n; i++) {
        int j = i;
        while (j > 0 && A[j] < A[j - 1]) {
            swap(A[j], A[j - 1]);
            j = j - 1;
        }
    }
}
