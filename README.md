# algorithms_in_c
Implementations of classic algorithms and data structures in C, with tests and complexity analysis.

**Goals**
- Learn algorithm design
- Practice clean C programming
- Understand time and space complexity
- Write reusable and tested code

**Implemented algorithms**
- [x] Bubble Sort
- [x] Selection Sort
- [ ] Insertion Sort
- [ ] Merge Sort
- [ ] Quick Sort
- [ ] Heap Sort

**Current test cases**
- Normal array
- Organized array
- Reversed array
- Array with repetitions
- Array with negatives
- Array with all the same numbers
- Single value array
- NULL array

**Complexity**
| Algorithm | Best Case  | Average   | Worst      | Space      |
|-----------|------------|-----------|------------|------------|
| Bubble    | O(n)       | O(n²)     | O(n²)      | O(1)       |
| Selection | O(n)       | O(n²)     | O(n²)      | O(1)       | 

***Implementation note:*** *The Selection Sort implementation in this repository includes an early-termination optimization that detects when the active range is already sorted, reducing the best-case complexity from the classical* ***O(n²)*** *to* ***O(n)***.