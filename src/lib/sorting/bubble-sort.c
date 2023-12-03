#include <stdlib.h>

#include "../utils/utils.h"
#include "sorting.h"

int* bubble_sort(const int* const arr, size_t size) {
  int* sorted_array = (int*)calloc(size, sizeof(int));

  if (sorted_array == NULL) return sorted_array;

  memcpy(sorted_array, arr, size * sizeof(int));

  for (int i = 0; i < size; ++i) {
    for (int j = 1; j < size - i; ++j) {
      if (*(sorted_array + j - 1) > *(sorted_array + j)) {
        swap_ints(sorted_array + j - 1, sorted_array + j);
      }
    }
  }

  return sorted_array;
}