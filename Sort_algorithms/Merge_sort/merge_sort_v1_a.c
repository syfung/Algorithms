#include "merge_sort_v1.h"


int *merge_sort(int *in_array, int size)
{
  int temp[size];
  _split_merge(in_array, temp, 0, size);
  return in_array;
}

/**
 * Note:
 *   end index is exclusive
 */
static int *_split_merge(int *a, int *temp, int start, int end)
{
  if((end - start) < 2) {
    return a;
  }

  int middle;
  middle = (start + end) / 2;

  _split_merge(a, temp, start, middle);
  _split_merge(a, temp, middle, end);

  _merge_temp_array(a, temp, start, middle, end);
  _copy_array(a, temp, start, end);
  
  return a;
}

static int *_merge_temp_array(int *a, int *temp\
			      , int start, int middle, int end)
{
  int i, j;
  i = start;
  j = middle;

  int k;
  for(k = start; k < end; k++) {
    if(i < middle && (j >= end || a[i] <= a[j])) {
      temp[k] = a[i];
      i++;
    } else{
      temp[k] = a[j];
      j++;
    }
  }
    
  return a;
}

static int *_copy_array(int *a, int *temp, int start, int end)
{
  int i;
  for(i = start; i < end; i++) {
    a[i] = temp[i];
  }
  return a;
}
