#include <iostream>
#include "L401_128.h"
using namespace std;

int main() {
    int a = 1000;
    int b = 500;
    int* p = &a;
    int* v = &b;

    cout << comp(p, v) << endl;
    return 0;
}