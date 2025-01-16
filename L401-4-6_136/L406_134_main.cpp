#include <iostream>
#include "L406_134.h"
using namespace std;

int main() {
    int s[] = {12, 11, 13, 5, 6, 7};
    int n = sizeof(s) / sizeof(s[0]);

    cout << "Исходный массив: ";
    for (int i = 0; i < n; i++) {
        cout << s[i] << " ";
    }
    cout << endl;

    heapsort(s, n);

    cout << "Отсортированный массив: ";
    for (int i = 0; i < n; i++) {
        cout << s[i] << " ";
    }
    cout << endl;

    return 0;
}