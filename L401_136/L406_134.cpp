#include <iostream>
#include "L406_134.h"
using namespace std;

void heapify(int s[], int n, int i) {
    int largest = i;          // Инициализируем корень как наибольший
    int left = 2 * i + 1;      // Левый потомок
    int right = 2 * i + 2;     // Правый потомок

    if (left < n && s[left] > s[largest]) largest = left;
    if (right < n && s[right] > s[largest]) largest = right;

    if (largest != i) {
        swap(s[i], s[largest]);
        heapify(s, n, largest);
    }
}

void make_heap(int s[], int n) {
    for (int i = n / 2 - 1; i >= 0; i--) {
        heapify(s, n, i);
    }
}

void heapsort(int s[], int n) {
    make_heap(s, n);

    for (int i = n - 1; i >= 0; i--) {
        swap(s[0], s[i]);
        heapify(s, i, 0);
    }
}
