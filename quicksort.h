#include <iostream>
#include <vector>
using namespace std;

void quicksort(vector<int> &vec);
void quicksort(vector<int> &vec, int left, int right);
void partition(vector<int> &vec, int pivot, int &i, int &j);