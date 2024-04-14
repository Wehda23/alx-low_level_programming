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

### :book: Introduction

![Linear Search](https://sushrutkuchik.files.wordpress.com/2020/05/linear_search.gif?w=438)

A linear search sequentially checks each element of the list until it finds an element that matches the target value. If the algorithm reaches the end of the list, the search terminates unsuccessfully.

### 🛠️ Procedure

Given a list `L` of `n` elements with values or records `L_0, L_1, ..., L_{n-1}`, and target value `T`, the following subroutine uses linear search to find the index of the target `T` in `L`.

1. Set `i` to `0`.
2. If `L_i = T`, the search terminates successfully; return `i`.
3. Increase `i` by `1`.
4. If `i < n`, go to step 2. Otherwise, the search terminates unsuccessfully.

### 🔧 Implementation

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

### :book: Introduction

![Binary Search](https://upload.wikimedia.org/wikipedia/commons/thumb/c/c1/Binary-search-work.gif/220px-Binary-search-work.gif)

Binary search works on sorted arrays. Binary search begins by comparing an element in the middle of the array with the target value. If the target value matches the element, its position in the array is returned. If the target value is less than the element, the search continues in the lower half of the array. If the target value is greater than the element, the search continues in the upper half of the array. By doing this, the algorithm eliminates the half in which the target value cannot lie in each iteration.

### 🛠️ Procedure

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

### 🔧 Implementation

File of implementation is `1-binary.c`

Compile:
```bash
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 1-main.c 1-binary.c -o 1-binary
```

Run:
```bash
./1-binary
```

## Jump search

### :book: Introduction

![Jump Search](https://harkishen-singh.github.io/jump-search-visualisation/this.gif)

Jump search, also known as block search, is a search algorithm commonly used for finding elements in ordered lists. It combines elements of linear search and binary search techniques, offering a compromise between their respective efficiencies.

## Basic Jump Search Algorithm

The basic jump search algorithm operates as follows:

1. Determine the block size \( m \) as the square root of the length of the list, \( n \), i.e., \( m = \sqrt{n} \).
2. Iterate over blocks of size \( m \) until finding a block whose last element is greater than the search key.
3. Perform a linear search within the identified block to find the exact position of the search key.

This algorithm runs in \( O(\sqrt{n}) \) time complexity, which is better than linear search but not as efficient as binary search.

## Modified Jump Search Algorithm

The basic jump search algorithm can be enhanced by performing multiple levels of jump search on sublists before resorting to a linear search. This modified algorithm, known as k-level jump search, operates as follows:

1. Divide the list into sublists and perform jump search on each sublist recursively.
2. Determine the optimum block size \( m_l \) for each level \( l \) based on the length of the sublist and the desired number of levels \( k \).
3. Perform backward jumps at each level until reaching the appropriate sublist.
4. Finally, perform a linear search within the identified sublist to find the exact position of the search key.

The time complexity of the k-level jump search algorithm is \( O(k \cdot n^{1/(k+1)}) \), which provides a balance between efficiency and performance.

## Usage

To use the jump search algorithm:

1. Implement the basic or modified version of the algorithm based on your requirements.
2. Provide an ordered list and the search key as input to the algorithm.
3. Execute the algorithm to find the position of the search key within the list.

```
algorithm JumpSearch is
    input: An ordered list L, its length n and a search key s.
    output: The position of s in L, or nothing if s is not in L.

    a ← 0
    b ← ⌊√n⌋

    while Lmin(b,n)-1 < s do
        a ← b
        b ← b + ⌊√n⌋
        if a ≥ n then
            return nothing

    while La < s do
        a ← a + 1
        if a = min(b, n)
            return nothing

    if La = s then
        return a
    else
        return nothing
```

### 🔧 Implementation

File of implementation is `./100-jump`

Compile:
```bash
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 100-main.c 100-jump.c -lm -o 100-jump
```

Run:
```bash
./100-jump
```