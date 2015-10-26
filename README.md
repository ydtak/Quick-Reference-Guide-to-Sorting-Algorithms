#Sorting Algorithms Quick Reference

##Overview
This is a quick reference guide for common sorting algorithms. The repository also contains sample implementations for the various sorting algorithms.

<strong>
Elementary Sorting Algorithms:
- Bubble Sort
- Selection Sort
- Insertion Sort
- Bucket Sort

High Performance Algorithms:
- Quick Sort
- Merge Sort
- Heap Sort
- Radix Sort... coming soon
</strong>

####Important Terms
- **Stable:** Maintains relative order of items with equal values.
- **Adaptive:** Takes advantage of presortedness and limited disorder.
- **Time complexity:** Amount of time required by algorithm.
- **Space complexity:** Amount of working storage required by algorithm at any **point** in time.
- **Big-O:** The limiting behavior of a function as the argument approaches infinity or an *upper-bound*.

##Quick Lookup Table

| Algorithm  |     Best Time    |     Ave Time     | Worst Time       | Space     | Characteristics  |
|------------|:----------------:|:----------------:|------------------|-----------|------------------|
| Bubble     |       O(n)       | O(n<sup>2</sup>) | O(n<sup>2</sup>) |    O(1)   | stable, adaptive |
| Selection  | O(n<sup>2</sup>) | O(n<sup>2</sup>) | O(n<sup>2</sup>) |    O(1)   |        n/a       |
| Insertion  |       O(n)       | O(n<sup>2</sup>) | O(n<sup>2</sup>) |    O(1)   | stable, adaptive |
| Bucket     |     O(n + k)     |     O(n + k)     | O(n<sup>2</sup>) |    O(n)   |      stable      |
| Quick      |    O(n log(n))   |    O(n log(n))   | O(n<sup>2</sup>) | O(log(n)) |        n/a       |
| Merge      |    O(n log(n))   |    O(n log(n))   |    O(n log(n))   |    O(n)   |      stable      |
| Heap       |    O(n log(n))   |    O(n log(n))   |    O(n log(n))   |    O(1)   |        n/a       |
| Radix      |                  |                  |                  |           |                  |


##The Sorting Algorithms
Provided below is a list of the sorting algorithms mentioned above. Each algorithm section is accompanied by a **description** of how the algorithm works (using **<** comparison - sorting smallest to largest), the Big-O **time complexity** of the algorithm, and the Big-O **space complexity**.


####Bubble Sort
 Bubble sort is **stable** and **adaptive**. Bubble sort iterates through the list and swaps adjacent pairs of items that are out of order.
- **Best Time:** O(n)
- **Average Time:** O(n<sup>2</sup>)
- **Worst Time:** O(n<sup>2</sup>)
- **Space:** O(1)

---

####Selection Sort
Selection sort is **not stable** and **not adaptive**. Selection sort divides the list into two parts: *sorted* and *unsorted*. It repeatedly iterates through the unsorted section and finds the *smallest* element which gets inserted into the end of the sorted section. 
- **Best Time:** O(n<sup>2</sup>)
- **Average Time:** O(n<sup>2</sup>)
- **Worst Time:** O(n<sup>2</sup>)
- **Space:** O(1)

---

####Insertion Sort
Insertion sort is **stable** and **adaptive**. Insertion sort divides the list into two parts: *sorted* and *unsorted*. It repeatedly takes the next (left-most) element from the unsorted section and inserts into the appropriate place in the sorted section; the appropriate place is found by iterating through the sorted section from the end (greatest element) until an element is found that does not compare to greater than the elemnt to be inserted.
- **Best Time:** O(n)
- **Average Time:** O(n<sup>2</sup>)
- **Worst Time:** O(n<sup>2</sup>)
- **Space:** O(1)

---

####Bucket Sort
Bucket sort is **stable** (is it adaptive??). Bucket sort passes through the list and distributes elements of the list into *buckets*. The *buckets* are then sorted individually. Finally, the elements are put back into the list by passing over the *buckets* one more time.
- **Best Time:** O(n + k)
- **Average Time:** O(n + k)
- **Worst Time:** O(n<sup>2</sup>)
- **Space:** O(n)

---

####Quick Sort
Quick sort is **not stable** and **not adaptive**. Quick sorts partitions the list into two sections which are then sorted as follows: one (1) section will contain all elements less than an arbitrary *pivot* value; second (2) section will contain all elements greater than or equal to the same *pivot* value. This is repeated recursively on each partition until the list is ultimately sorted.
- **Best Time:** O(n\*log(n))
- **Average Time:** O(n\*log(n))
- **Worst Time:** O(n<sup>2</sup>)
- **Space:** O(log(n))

---

####Merge Sort
Merge sort is **stable** and **not adaptive**. Merge sort recursively partitions the list into halves until there are n *sorted* partitions, each partition *initially* containing one element. The sorted partitions are repeatedly merged together until there is only a single partition (which is the sorted list).
- **Best Time:** O(n\*log(n))
- **Average Time:** O(n\*log(n))
- **Worst Time:** O(n\*log(n))
- **Space:** O(n)

---

####Heap Sort
Heap sort is **not stable** and **not really adaptive**. Heap sort is accomplished using heap magic. First you heapify (O(n)) the list so the list becomes a heap (complete binary tree). Then you repeatedly pop (log(n)) the max of the heap and insert it into the sorted list.

**Quick rundown:** heapify (O(n)) + pop (O(log(n)) n elements into sorted list so total time complexity is O(n\*log(n)).
- **Best Time:** O(n\*log(n))
- **Average Time:** O(n\*log(n))
- **Worst Time:** O(n\*log(n))
- **Space:** O(1)

---

####Radix Sort
 - Soon
