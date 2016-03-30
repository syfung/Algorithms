int *insertion_sort(int *a, int size)
{
  int i, j, key;
  for(i = 1; i < size; i++) {
    for(j = i; j > 0 && a[j - 1] > a[j]; j--) {
      key = a[j - 1];
      a[j - 1] = a[j];
      a[j] = key;
    }
  }    
  
  return a;
}
