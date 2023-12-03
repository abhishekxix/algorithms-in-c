#include "utils.h"

void print_int_array(const int *arr, size_t size) {
  printf("[");
  for (size_t i = 0; i < size; i++) {
    printf("%d", *(arr + i));

    if (i != size - 1) {
      printf(", ");
    }
  }
  printf("]\n");
}

void input_int_array(int *arr, size_t size) {
  for (size_t i = 0; i < size; i++) {
    scanf("%d", arr + i);
  }
}

int println(const char *__restrict__ fmt_str, ...) {
  va_list args_list;

  va_start(args_list, fmt_str);

  size_t fmt_str_len = strlen(fmt_str);

  const size_t new_fmt_str_len = fmt_str_len + 2;

  char new_fmt_str[new_fmt_str_len];
  sprintf(new_fmt_str, "%s\n", fmt_str);

  int printf_return_value = vprintf(new_fmt_str, args_list);

  va_end(args_list);

  return printf_return_value;
}

void swap_ints(int *a, int *b) {
  *a = *a + *b;
  *b = *a - *b;
  *a = *a - *b;
}