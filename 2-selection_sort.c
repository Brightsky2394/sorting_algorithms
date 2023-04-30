#include "sort.h"
/**
 * selection_sort - sorts an array of
 * integers in ascending order using
 * selection algorithm
 * @array: integer array to be sort
 * @size: array size
 * Return: Nothing
 */

void selection_sort(int *array, size_t size)
{
size_t m, n, pos;
int swp = 0, min;
if (size <= 1)
	return;
m = 0;
while (m < size)
{
min = array[m];
pos = m;
for (n = m + 1; n < size; n++)
{
if (array[n] < min)
{
min = array[n];
pos = n;
swp = 1;
}
}

array[pos] = array[m];
array[m] = min;
if (swp)
{
print_array(array, size);
swp = 0;
}
m++;
}
}
