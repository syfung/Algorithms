/**
 * Version 1 of the merge_sort.h
 *
 * Joshua Fung <joshua.fung@mail.utoronto.ca>
 *
 * This the a improved version compare to the test verson. It changes
 * the merge_sort to work on size, to unified all array sort
 * function. To make sure all the sort function can be used in the
 * same context.
 *
 * Note:
 *   The function starting with '_' should be a static function, but
 *   when static it make them hard to test, so some are dropped for
 *   now. 
 */


#ifndef MERGE_SORT_V1_H
#define MERGE_SORT_V1_H

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


#endif /* MERGE_SORT__V1_H */
