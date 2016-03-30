#ifndef MERGE_SORT_H
#define MERGE_SORT_H

/**
 * A sort function implementing the merge sort algorithm. This
 * function will modify the original array.
 *
 * @Param
 *   - in_array the input array
 *   - size size of the array
 *
 * @Return
 *   - Also return the pointer to the input array
 */
int *merge_sort(int *in_array, int size);

int *merge(int *a, int i_start, int i_middle, int i_end);

#endif /* MERGE_SORT_H */
