#include <stdio.h>

int main() {
  int bil = 5;
  int *bil_ptr = &bil;

  printf("%p\n", bil_ptr);
  printf("%p\n", &bil);
  printf("%d\n", *bil_ptr);
  printf("%p\n", &bil_ptr);

  return 0;
}