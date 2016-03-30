int *merge_sort_b(int *a, int size)
{
  int temp[size];
  split_merge(a, temp, 0, size);
  return a;
}

int *split_merge(int *a, int *temp, int i_start, int i_end)
{
  // i_end is exclusive
  if((i_end - i_start) < 2) {
    return a;
  }

  int i_middle = (i_start + i_end) / 2;
  split_merge(a, temp, i_start, i_middle);
  split_merge(a, temp, i_middle, i_end);
  merge_b(a, i_start, i_middle, i_end, temp);
  copy_array(a, temp, i_start, i_end);
  return a;
}

int *merge_b(int *a, int i_start, int i_middle, int i_end\
	     , int *temp)
{
  i = i_start, j = i_middle;
    
  // While there are elements in the left or right runs...
  int k;
  for (k = i_start; k < i_end; k++) {
    // If left run head exists and is <= existing right run head.
    if (i < i_middle && (j >= i_end || a[i] <= a[j])) {
      temp[k] = a[i];
      i = i + 1;
    } else {
      temp[k] = a[j];
      j = j + 1;    
    }
  } 
  return a;
}

int *copy_array(int *target, int *source, int i_start, int i_end)
{
  int i;
  for(i = 0; i < i_end - i_start; i++) {
    target[i] = source[i];
  }
  return target;
}
