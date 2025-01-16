#include "L401_128.h"

int comp(int* i, int* j) {
    if (*i > *j) return 1;
    if (*i < *j) return -1;
    return 0;
}