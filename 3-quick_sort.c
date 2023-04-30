#include "sort.h"
/**
 * sort - sort function recursively
 * @array: array to be sorted
 * @small: lower limit
 * @big: upper limit
 * @size: size of an array
 */

void sort(int *array, int small, int big, size_t size)
{
int pivot;
if (small < big)
{
pivot = partition(array, small, big, size);
sort(array, small, pivot - 1, size);
sort(array, pivot + 1, big, size);
}
}

/**
 * partition - separate and order the array
 * @array: array to be sorted
 * @small: lower limit
 * @big: upper limit
 * @size: size of array
 * Return: position of new pivot
 */

int partition(int *array, int small, int big, size_t size)
{
int pvt = array[big];
int m, n, tev;
m = small - 1;
n = small;
while (n < big)
{
if (array[n] <= pvt)
{
m++;
if (m != n)
{
tev = array[m];
array[m] = array[n];
array[n] = tev;
print_array(array, size);
}
}
n++;
}
m++;
if (m != n)
{
tev = array[m];
array[m] = array[big];
array[big] = tev;
print_array(array, size);
}
return (m);
}

/**
 * quick_sort - sorts integer array
 * using quick sort algorithm
 * @array: array to be sorted
 * @size: size of array
 * Return: Nothing
 */
void quick_sort(int *array, size_t size)
{
sort(array, 0, size - 1, size);
}
