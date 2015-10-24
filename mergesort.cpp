#include <iostream>
#include <vector>
using namespace std;

// MARK: Method declerations
void mergesort(vector<int>& vec);
void mergesort(vector<int>& vec, vector<int>& helper, int low, int high);
void merge(vector<int>& array, vector<int>& helper, int low, int mid, int high);


// MARK: Method definitions

void mergesort(vector<int>& vec) {
    vector<int> helper(vec.size(), 0);
    mergesort(vec, helper, 0, vec.size() - 1);
}

void mergesort(vector<int>& vec, vector<int>& helper, int low, int high) {
    if (low < high) {
        int mid = (low + high) / 2;             // get midpoint
        mergesort(vec, helper, low, mid);       // sort left half
        mergesort(vec, helper, mid + 1, high);  // sort right half
        merge(vec, helper, low, mid, high);   // merge them
    }
}

void merge(vector<int>& array, vector<int>& helper, int low, int mid, int high) {
    // copy both halves into a helper array
    for (int i = low; i <= high; ++i) {
        helper[i] = array[i];
    }
    
    int helperLeft = low;
    int helperRight = mid + 1;
    int current = low;
    
    // iterate through helper array
    // compare left and right half
    // copy smaller element from the two halves into the original array
    while(helperLeft <= mid && helperRight <= high) {
        // if left < right
        if (helper[helperLeft] <= helper[helperRight]) {
            array[current] = helper[helperLeft];
            ++helperLeft;
        } else {
            // if right < left
            array[current] = helper[helperRight];
            ++helperRight;
        }
        ++current;
    }
    
    // copy the rest of the left side of the array into the target array
    int remaining = mid - helperLeft;
    for (int i = 0; i <= remaining; ++i) {
        array[current + i] = helper[helperLeft + i];
    }
}


int main() {
    vector<int> test = {0, -3, 7, 6, 6, 5, 10};
    
    mergesort(test);
    for (auto& i: test) {
        cout << i << endl;
    }
}
