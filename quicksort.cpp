/**
 * quicksort.cpp
 *
 * Daniel Takayama
 * October 24, 2015
 */

#include "quicksort.h"
using namespace std;


void quicksort(vector<int> &vec) {
    if (!vec.empty()) {
        quicksort(vec, 0, vec.size() - 1);
    }
}


void quicksort(vector<int> &vec, int left, int right) {
    //partition
    int pivot = vec[(left + right)/2];
    int i = left, j = right;
    while (i <= j) {
        while(vec[i] < pivot) ++i;
        while(vec[j] > pivot) --j;
        if (i <= j) {
            swap(vec[i], vec[j]);
            ++i, --j;
        }
    }

    //recursion
    if (i < right) quicksort(vec, i, right);
    if (j > left) quicksort(vec, left, j);
}