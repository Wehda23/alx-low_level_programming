# C - Search Algorithms

We are going to different types of search including linear search, binary search in this project, Also explain what is the best search algorithm to use depending on your needs.

### Search Algorithms

1. Linear Search
2. Binary Search
3. Jump Search
4. Interpolation Search
5. Exponential Search
6. Advanced Binary Search
7. Jump Search in a single linked list
8. Linear Search in a skip list

## Linear Search

### Introduction

![Linear Search](https://sushrutkuchik.files.wordpress.com/2020/05/linear_search.gif?w=438)

A linear search sequentially checks each element of the list until it finds an element that matches the target value. If the algorithm reaches the end of the list, the search terminates unsuccessfully.

### Procedure

Given a list `L` of `n` elements with values or records `L_0, L_1, ..., L_{n-1}`, and target value `T`, the following subroutine uses linear search to find the index of the target `T` in `L`.

1. Set `i` to `0`.
2. If `L_i = T`, the search terminates successfully; return `i`.
3. Increase `i` by `1`.
4. If `i < n`, go to step 2. Otherwise, the search terminates unsuccessfully.

### Implementation

File of implementation is `0-linear.c`

Compile:
```bash
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 0-main.c 0-linear.c -o 0-linear
```

Run:
```bash
./0-linear
```

## Binary Search

### Introduction

![Binary Search](https://upload.wikimedia.org/wikipedia/commons/thumb/c/c1/Binary-search-work.gif/220px-Binary-search-work.gif)

Binary search works on sorted arrays. Binary search begins by comparing an element in the middle of the array with the target value. If the target value matches the element, its position in the array is returned. If the target value is less than the element, the search continues in the lower half of the array. If the target value is greater than the element, the search continues in the upper half of the array. By doing this, the algorithm eliminates the half in which the target value cannot lie in each iteration.

### Procedure

Given an array `A` of `n` elements with values or records `A_0, A_1, A_2, ..., A_{n-1}` sorted such that `A_0 <= A_1 <= A_2 <= ... <= A_{n-1}`, and target value `T`, the following subroutine uses binary search to find the index of `T` in `A`.

1. Set `L` to `0` and `R` to `n - 1`.
2. If `L > R`, the search terminates as unsuccessful.
3. Set `m` (the position of the middle element) to the floor of `(L + R) / 2`.
4. If `A_m < T`, set `L` to `m + 1` and go to step 2.
5. If `A_m > T`, set `R` to `m - 1` and go to step 2.
6. If `A_m = T`, the search is done; return `m`.

```
function binary_search(A, n, T) is
    L := 0
    R := n − 1
    while L ≤ R do
        m := floor((L + R) / 2)
        if A[m] < T then
            L := m + 1
        else if A[m] > T then
            R := m − 1
        else:
            return m
    return unsuccessful
```

### Implementation

File of implementation is `1-binary.c`

Compile:
```bash
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 1-main.c 1-binary.c -o 1-binary
```

Run:
```bash
./1-binary
```