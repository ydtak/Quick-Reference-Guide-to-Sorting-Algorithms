/**
 * main.cpp
 *
 * This program contains the main function used
 * for testing sample sort algorithm implementations
 *
 * Daniel Takayama, Akshay Chiwhane
 * October 24, 2015
 */

#include "quicksort.h"
#include "mergesort.h"
#include "heapsort.h"
using namespace std;

/**
 * Prints intro followed by elements of vec (separated by spaces) on the same line
 *
 * @param vec: vector containing elements to be printed
 * @param intro: string to be printed before elements of vec
 */
void printList(vector<int> &vec, string intro);


/**
 * Main Function
 */
int main() {
    //create test lists
    vector<int> test = {0, -3, 7, 6, 6, 5, 10};
    vector<int> test1 = test, test2 = test;

    //display unsorted list
    printList(test, "Original: ");

    //merge sort
    mergesort(test);
    printList(test, "Mergesort: ");

    //quick sort
    quicksort(test1);
    printList(test1, "Quicksort: ");

    //heap sort
    heapsort(test2);
    printList(test2, "Heapsort: ");

    return 0;
}


void printList(vector<int> &vec, string intro) {
    cout << intro;
    for (int i : vec) {
        cout << i << ' ';
    }
    cout << endl;
}