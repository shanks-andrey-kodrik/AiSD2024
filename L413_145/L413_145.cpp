#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int>& s, int l, int h) {
    int pivot = s[h]; 
    int i = l - 1; 

    for (int j = l; j <= h - 1; j++) {
        if (s[j] <= pivot) {
            i++;
            swap(s[i], s[j]);
        }
    }
    swap(s[i + 1], s[h]);
    return (i + 1);
}