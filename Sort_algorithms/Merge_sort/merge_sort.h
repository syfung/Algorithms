#ifndef MERGE_SORT_H
#define MERGE_SORT_H

/**
 * A sort function implementing the merge sort algorithm. This
 * function will modify the original array.
 *
 * @Param
 *   - in_array the input array
 *   - i_start start index to sort
 *   - i_end end index to sort
 *
 * @Return
 *   - Also return the pointer to the input array
 */
int *merge_sort(int *in_array, int i_start, int i_end);

int *merge(int *in_array, int i_start, int i_middle, int i_end);

int *merge_sort_b(int *in_array, int size);

int *split_merge(int *in_array, int *temp, int i_start, int i_end);

int *merge_b(int *in_array, int i_start, int i_middle, int i_end\
	     , int *working_array);

int *copy_array(int *target, int *source, int i_start, int i_end);
		
#endif /* MERGE_SORT_H */
