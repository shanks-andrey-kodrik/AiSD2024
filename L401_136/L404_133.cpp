#include <iostream>
#include "L404_133.h"
using namespace std;

int n; // ���������� ���������� ��� ���������� ���������

void pq_init() {
    n = 0;
}

void pq_insert(int item) {
    n++;
    // ��������: ����� ����� �� ���� ������ ����
}

void make_heap(int s[], int size) {
    pq_init();
    for (int i = 0; i < size; i++) {
        pq_insert(s[i]);
    }
}
