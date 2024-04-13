#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

/* Includes */
#include <stdio.h>

/* 0-linear.c */
int linear_search(int *array, size_t size, int value);
/* 1-binary.c */
int binary_search(int *array, size_t size, int value);
void print_array(int *array, int start, int end);

#endif /* End of search algorithms header */
