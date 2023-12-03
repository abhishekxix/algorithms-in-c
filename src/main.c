#include <stdio.h>
#include <stdlib.h>

#include "./lib/sorting/sorting.h"
#include "./lib/utils/utils.h"

int main() {
  println("Size of your array?");
  size_t size = 0;

  scanf("%lu", &size);

  int* arr = (int*)calloc(size, sizeof(int));

  if (arr == NULL) return EXIT_FAILURE;

  println("Enter the numbers:");

  input_int_array(arr, size);

  println("Array before bubble sort:");

  print_int_array(arr, size);

  int* sorted_array = bubble_sort(arr, size);

  println("Array after bubble sort:");

  print_int_array(sorted_array == NULL ? arr : sorted_array, size);

  free(arr);

  if (sorted_array != NULL) free(sorted_array);

  return EXIT_SUCCESS;
}