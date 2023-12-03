#ifndef _ABHISHEK_ARRAY_SORTING_H_
#define _ABHISHEK_ARRAY_SORTING_H_

#include <stdio.h>

/**
 * @brief Sorts an array of integers using the bubble sort algorithm.
 *
 * This function takes an array of integers and sorts it in ascending order
 * using the bubble sort algorithm. The original array remains unchanged,
 * and a new dynamically allocated array containing the sorted elements is
 * returned. The caller is responsible for freeing the allocated memory.
 *
 * @param arr   Pointer to the array of integers to be sorted.
 * @param size  Size of the array.
 * @return int* Pointer to a dynamically allocated array of sorted integers.
 *         Returns NULL if memory allocation fails.
 *
 * @note The caller is responsible for freeing the memory allocated for the
 *       sorted array using the `free` function.
 */
int* bubble_sort(const int* arr, size_t size);

#endif