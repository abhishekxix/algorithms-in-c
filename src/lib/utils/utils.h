#ifndef _ABHISHEK_UTILS_H_
#define _ABHISHEK_UTILS_H_

#include <stdarg.h>
#include <stdio.h>
#include <string.h>

/**
 * @brief Prints an integer array in a human-readable format.
 *
 * This function prints the elements of the integer array in the format:
 * "[element1, element2, ..., elementN]\n"
 *
 * @param arr   Pointer to the integer array.
 * @param size  Size of the array.
 */
void print_int_array(const int *arr, size_t size);

/**
 * @brief Reads integer values from the user and populates an array.
 *
 * This function prompts the user to input integer values for each element
 * of the array. The input is read using scanf.
 *
 * @param arr   Pointer to the integer array to be populated.
 * @param size  Size of the array.
 */
void input_int_array(int *arr, size_t size);

/**
 * @brief Prints a formatted string followed by a newline character.
 *
 * This function is similar to the standard printf function but appends a
 * newline character at the end. It supports a variable number of arguments
 * using the format specifier in the style of printf.
 *
 * @param fmt_str The format string.
 * @param ...     Variable arguments list.
 * @return int    The return value of the vprintf function.
 */
int println(const char *__restrict__ fmt_str, ...);

/**
 * @brief Swaps the values of two integer variables.
 *
 * This function swaps the values of the two integer variables passed as
 * arguments using a temporary variable.
 *
 * @param a Pointer to the first integer.
 * @param b Pointer to the second integer.
 */
void swap_ints(int *a, int *b);

#endif