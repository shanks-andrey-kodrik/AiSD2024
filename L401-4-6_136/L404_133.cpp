#include <iostream>
#include "L404_133.h"
using namespace std;

int n; // Глобальная переменная для количества элементов

void pq_init() {
    n = 0;
}

void pq_insert(int item) {
    n++;
    // Заглушка: здесь могла бы быть логика кучи
}

void make_heap(int s[], int size) {
    pq_init();
    for (int i = 0; i < size; i++) {
        pq_insert(s[i]);
    }
}
