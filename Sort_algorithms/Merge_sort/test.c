#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "merge_sort.h"

int main(int argc, char **argv)
{
  if(argc <= 1) {
    fprintf(stderr, "Useage: sort_test ARRAY_SIZE");
    exit(EXIT_FAILURE);
  }

  printf("Test sort function:\n");
  
  int size;
  size = strtol(argv[1], NULL, 10);
  int a[size];

  printf("Original array: ");
  int i;
  srand(time(NULL));
  for(i = 0; i < size; i++) {
    a[i] = rand() % 100 + 1;
    printf("%d ", a[i]);
  }

  printf("\n");

  merge_sort(a, 0, size - 1);

  printf("Sorted array: ");
  for(i = 0; i < size; i++) {
    printf("%d ", a[i]);
  }
  printf("\n");

  printf("Computing average time of the function with 1000 trial.\n");
  struct timespec tstart={0,0}, tend={0,0};
  double time_passed = 0.0f;

  int j;
  for(j = 0; j < 1000; j++) {
    for(i = 0; i < size; i++) {
      a[i] = rand() % 100 + 1;
    }
    
    clock_gettime(CLOCK_MONOTONIC, &tstart);
    
    merge_sort(a, 0, size - 1);
    
    clock_gettime(CLOCK_MONOTONIC, &tend);
    
    time_passed += (((double)tend.tv_sec + 1.0e-9*tend.tv_nsec)		\
		    - ((double)tstart.tv_sec + 1.0e-9*tstart.tv_nsec));
  }

  printf("Average time: %.5lf\n", time_passed / 1000);
  
  return EXIT_SUCCESS;
}
