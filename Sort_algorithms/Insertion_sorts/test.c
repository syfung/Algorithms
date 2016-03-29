#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "insertion_sort.h"

int main(int argc, char **argv)
{
  if(argc <= 1) {
    fprintf(stderr, "Useage: sort_test ARRAY_SIZE");
    exit(EXIT_FAILURE);
  }

  int size;
  size = strtol(argv[1], NULL, 10);
  int a[size];

  int i;
  srand(time(NULL));
  for(i = 0; i < size; i++) {
    a[i] = rand() % 100 + 1;
    //printf("%d ", a[i]);
  }

  printf("\n");

  insertion_sort(a, size);

  for(i = 0; i < size; i++) {
    printf("%d %d\n", a[i], i);
  }

  printf("\n");
  
  return 0;
}
