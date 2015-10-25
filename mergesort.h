#include <iostream>
#include <vector>
using namespace std;

// MARK: Method declerations
void mergesort(vector<int>& vec);
void mergesort(vector<int>& vec, vector<int>& helper, int low, int high);
void merge(vector<int>& array, vector<int>& helper, int low, int mid, int high);