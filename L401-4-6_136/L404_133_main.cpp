#include <iostream>
#include "L404_133.h"
using namespace std;

int main() {
    int s[] = {3, 1, 4, 1, 5, 9};
    int size = sizeof(s) / sizeof(s[0]);

    make_heap(s, size);

    cout << "Количество элементов в очереди: " << n << endl;

    return 0;
}