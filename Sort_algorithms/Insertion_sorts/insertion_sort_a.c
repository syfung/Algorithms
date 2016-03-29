#include <stdio.h>

int *insertion_sort(int *a, int size)
{
  int i, j, key;
  for(i = 1; i < size; i++) {
    key = a[i];

    for(j = i - 1; j >= 0 && a[j] > key; j--) {
      a[j + 1] = a[j];
    }
    a[j + 1] = key;
  }    
  
  return a;
}
