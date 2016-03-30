#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#include "merge_sort.h"


int main(void) {
  int a[10] = {1,3,5,7,INT_MAX,2,4,6,8,10};

  int i;
  for(i = 0; i < 10; i++) {
    printf("%d ", a[i]);
  }
  printf("\n");

  merge(a, 0, 4, 9);
  
  for(i = 0; i < 10; i++) {
    printf("%d ", a[i]);
  }
  printf("\n");
  
  return EXIT_SUCCESS;
}
