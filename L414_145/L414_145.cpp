#include <iostream>
#include <vector>
using namespace std;

int binary_search(const vector<int>& s, int key, int low, int high) {
    if (low > high) return -1;
    int middle = (low + high) / 2; 
    if (s[middle] == key)
        return middle;
    else if (s[middle] > key)
        return binary_search(s, key, low, middle - 1); 
    else
        return binary_search(s, key, middle + 1, high); 
}