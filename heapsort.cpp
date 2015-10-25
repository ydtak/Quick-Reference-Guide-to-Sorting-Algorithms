/**
 * heapsort.cpp
 *
 * Daniel Takayama
 * October 24, 2015
 */

#include "heapsort.h"
using namespace std;


void heapsort(vector<int> &vec) {
    //make vec into min heap
    vector<int> sorted;
    heapify(vec);

    //repeatedly pop max element off heap and push into sorted list
    while (vec.size() != 1) {
        sorted.push_back(popMax(vec));
    }

    //swap contents of vec with sorted
    vec.swap(sorted);
}


void siftDown(vector<int> &vec, size_t k) {
    int size = vec.size() - 1;
    while (2 * k <= size) {
        size_t j = 2 * size_t(k);
        if (j < size && vec[j] > vec[j + 1]) j++;
        if (vec[j] > vec[k]) break;
        swap(vec[k], vec[j]);
        k = j;
    }
}


void heapify(vector<int> &vec) {
    //push back filler element and swap with 0th position
    vec.push_back(0);
    swap(vec[0], vec[vec.size() - 1]);

    //fix down on each node
    for (size_t i = (vec.size() - 1)/2; i > 0; --i) {
        siftDown(vec, i);
    }
}


int popMax(vector<int> &vec) {
    int max = vec[1];
    swap(vec[1], vec[vec.size() - 1]);
    vec.pop_back();
    siftDown(vec, 1);
    return max;
}