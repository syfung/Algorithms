#include <limits.h>

#include "merge_sort.h"


int *merge_sort(int *a, int i_start, int i_end)
{
  if(i_start < i_end) {
    int i_middle = ((i_start + i_end) / 2);
    merge_sort(a, i_start, i_middle);
    merge_sort(a, i_middle + 1, i_end);
    merge(a, i_start, i_middle, i_end);
  }
  return a;
}

int *merge(int *a, int i_start, int i_middle, int i_end)
{
  int left_size, right_size;
  left_size = i_middle - i_start + 1;
  right_size = i_end - i_middle;

  int l[left_size + 1], r[right_size + 1];

  int i;
  for(i = 0; i < left_size; i++) {
    l[i] = a[i_start + i];    
  }

  int j;
  for(j = 0; j < right_size; j++) {
    r[j] = a[i_middle + j + 1];
  }

  l[left_size] = INT_MAX;
  r[right_size] = INT_MAX;

  i = j = 0;

  int k;
  for(k = i_start; k < i_end + 1; k++) {
    if(l[i] <= r[j]) {
      a[k] = l[i];
      i += 1;
    } else {
      a[k] = r[j];
      j += 1;
    }
  }
  
  return a;
}
