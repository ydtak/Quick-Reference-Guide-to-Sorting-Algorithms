#ifndef EECS281_SORTINGALGORITHMS_HEAPSORT_H
#define EECS281_SORTINGALGORITHMS_HEAPSORT_H


#include <iostream>
#include <vector>
using namespace std;

void heapsort(vector<int> &vec);
void siftDown(vector<int> &vec, size_t k);
void heapify(vector<int> &vec);
int popMax(vector<int> &vec);


#endif //EECS281_SORTINGALGORITHMS_HEAPSORT_H
