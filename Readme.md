# Standard Template Library (STL) Implementation in C++

This repository contains implementations of various components of the C++ Standard Template Library (STL). The STL is a powerful library that provides a collection of template classes and functions to implement common data structures and algorithms.

## Table of Contents
- [Containers](#containers)
- [Algorithms](#algorithms)
- [Iterators](#iterators)
- [Function Objects](#function-objects)
- [Smart Pointers](#smart-pointers)
- [Utilities](#utilities)

## Containers

### Sequence Containers
- [x] `vector` - Dynamic array implementation
- [ ] `array` - Fixed-size array
- [x] `deque` - Double-ended queue
- [x] `forward_list` - Singly-linked list
- [x] `list` - Doubly-linked list

### Associative Containers
- [ ] `set` - Collection of unique keys
- [ ] `map` - Collection of key-value pairs
- [ ] `multiset` - Collection of keys, allowing duplicates
- [ ] `multimap` - Collection of key-value pairs, allowing duplicate keys

### Unordered Associative Containers
- [ ] `unordered_set` - Collection of unique keys, hashed
- [ ] `unordered_map` - Collection of key-value pairs, hashed
- [ ] `unordered_multiset` - Collection of keys, hashed, allowing duplicates
- [ ] `unordered_multimap` - Collection of key-value pairs, hashed, allowing duplicate keys

### Container Adaptors
- [x] `stack` - LIFO (Last In First Out) data structure
- [x] `queue` - FIFO (First In First Out) data structure
- [ ] `priority_queue` - Priority queue implementation

## Algorithms

### Non-modifying Sequence Operations
- [ ] `all_of` - Check if all elements satisfy a condition
- [ ] `any_of` - Check if any element satisfies a condition
- [ ] `none_of` - Check if no elements satisfy a condition
- [ ] `for_each` - Apply function to range
- [ ] `count` - Count appearances of value in range
- [ ] `count_if` - Count elements satisfying condition
- [ ] `mismatch` - Return first position where two ranges differ
- [ ] `equal` - Test whether ranges are equal
- [ ] `find` - Find value in range
- [ ] `find_if` - Find element in range
- [ ] `find_if_not` - Find element in range (negative condition)
- [ ] `find_end` - Find last subsequence in range
- [ ] `find_first_of` - Find element from set in range
- [ ] `adjacent_find` - Find equal adjacent elements
- [ ] `search` - Search range for subsequence
- [ ] `search_n` - Search range for elements

### Modifying Sequence Operations
- [ ] `copy` - Copy range of elements
- [ ] `copy_if` - Copy certain elements of range
- [ ] `copy_n` - Copy elements
- [ ] `copy_backward` - Copy range of elements backward
- [ ] `move` - Move range of elements
- [ ] `move_backward` - Move range of elements backward
- [ ] `swap` - Exchange values of two objects
- [ ] `swap_ranges` - Exchange values of two ranges
- [ ] `iter_swap` - Exchange values of objects pointed to by two iterators
- [ ] `transform` - Transform range
- [ ] `replace` - Replace value in range
- [ ] `replace_if` - Replace values in range
- [ ] `replace_copy` - Copy range replacing value
- [ ] `replace_copy_if` - Copy range replacing value
- [ ] `fill` - Fill range with value
- [ ] `fill_n` - Fill sequence with value
- [ ] `generate` - Generate values for range with function
- [ ] `generate_n` - Generate values for sequence with function
- [ ] `remove` - Remove value from range
- [ ] `remove_if` - Remove elements from range
- [ ] `remove_copy` - Copy range removing value
- [ ] `remove_copy_if` - Copy range removing values
- [ ] `unique` - Remove consecutive duplicates in range
- [ ] `unique_copy` - Copy range removing duplicates
- [ ] `reverse` - Reverse range
- [ ] `reverse_copy` - Copy range reversed
- [ ] `rotate` - Rotate left the elements in range
- [ ] `rotate_copy` - Copy range rotated left
- [ ] `random_shuffle` - Randomly rearrange elements in range
- [ ] `shuffle` - Randomly rearrange elements in range using generator

### Sorting Operations
- [x] `sort` - Sort elements in range
- [ ] `stable_sort` - Sort elements preserving order of equivalents
- [ ] `partial_sort` - Partially sort elements in range
- [ ] `partial_sort_copy` - Copy and partially sort range
- [ ] `is_sorted` - Check whether range is sorted
- [ ] `is_sorted_until` - Find first unsorted element in range
- [ ] `nth_element` - Sort element in range

### Binary Search Operations
- [ ] `lower_bound` - Return iterator to lower bound
- [ ] `upper_bound` - Return iterator to upper bound
- [ ] `equal_range` - Get subrange of equal elements
- [ ] `binary_search` - Test if value exists in sorted sequence

### Merge Operations
- [ ] `merge` - Merge sorted ranges
- [ ] `inplace_merge` - Merge consecutive sorted ranges
- [ ] `includes` - Test whether sorted range includes another sorted range
- [ ] `set_union` - Union of two sorted ranges
- [ ] `set_intersection` - Intersection of two sorted ranges
- [ ] `set_difference` - Difference of two sorted ranges
- [ ] `set_symmetric_difference` - Symmetric difference of two sorted ranges

### Heap Operations
- [ ] `push_heap` - Push element into heap range
- [ ] `pop_heap` - Pop element from heap range
- [ ] `make_heap` - Make heap from range
- [ ] `sort_heap` - Sort elements of heap
- [ ] `is_heap` - Test if range is heap
- [ ] `is_heap_until` - Find first element not in heap order

### Min/Max Operations
- [ ] `min` - Return the smallest
- [ ] `max` - Return the largest
- [ ] `minmax` - Return smallest and largest elements
- [ ] `min_element` - Return smallest element in range
- [ ] `max_element` - Return largest element in range
- [ ] `minmax_element` - Return smallest and largest elements in range

### Numeric Operations
- [ ] `accumulate` - Accumulate values in range
- [ ] `inner_product` - Compute inner product of range
- [ ] `adjacent_difference` - Compute adjacent difference of range
- [ ] `partial_sum` - Compute partial sums of range
- [ ] `iota` - Store increasing sequence

## Iterators
- [ ] Input Iterators
- [ ] Output Iterators
- [ ] Forward Iterators
- [ ] Bidirectional Iterators
- [ ] Random Access Iterators

## Function Objects
- [ ] Arithmetic Operations
- [ ] Comparison Operations
- [ ] Logical Operations
- [ ] Bitwise Operations

## Smart Pointers
- [ ] `unique_ptr` - Smart pointer with unique object ownership
- [ ] `shared_ptr` - Smart pointer with shared object ownership
- [ ] `weak_ptr` - Smart pointer that holds a non-owning reference

## Utilities
- [ ] `pair` - Two heterogeneous values as a single unit
- [ ] `tuple` - Heterogeneous fixed-size collection of values
- [ ] `optional` - Wrapper for optional values
- [ ] `variant` - Type-safe union
- [ ] `any` - Type-safe container for single values of any type

## Building and Testing
To build and test the implementations:

```bash
mkdir build
cd build
cmake ..
make
./tests
```

## Contributing
Contributions are welcome! Please feel free to submit a Pull Request.

## License
This project is licensed under the MIT License - see the LICENSE file for details.
