#include <iostream>
#include <vector>
#include "L413_145.h"
using namespace std;

void quickSort(vector<int>& s, int l, int h) {
    if (l < h) {
        int p = partition(s, l, h); // Индекс элемента-разделителя

        // Рекурсивно сортируем элементы до и после разделителя
        quickSort(s, l, p - 1);
        quickSort(s, p + 1, h);
    }
}