#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int>& s, int low, int middle, int high) {
    int leftSize = middle - low + 1;
    int rightSize = high - middle;

    vector<int> left(leftSize);
    vector<int> right(rightSize);

    for (int i = 0; i < leftSize; ++i)
        left[i] = s[low + i];
    for (int j = 0; j < rightSize; ++j)
        right[j] = s[middle + 1 + j];

    int i = 0, j = 0, k = low;
    while (i < leftSize && j < rightSize) {
        if (left[i] <= right[j]) {
            s[k] = left[i];
            i++;
        } else {
            s[k] = right[j];
            j++;
        }
        k++;
    }

    while (i < leftSize) {
        s[k] = left[i];
        i++;
        k++;
    }

    while (j < rightSize) {
        s[k] = right[j];
        j++;
        k++;
    }
}
