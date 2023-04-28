#include "sort.h"
/**
 * bubble_sort - sorts an array of integers in ascending
 * order using the Bubble sort algorithm
 * @array: array
 * @size: size of array
 * Return: Nothing
 */

void bubble_sort(int *array, size_t size)
{
size_t m, n, cnt;
if (size <= 1)
	return;
else
{
for (m = 0; m < size; m++)
{
for (n = 0; n < size - 1; n++)
{
if (array[n] > array[n + 1])
{
cnt = array[n];
array[n] = array[n + 1];
array[n + 1] = cnt;
print_array(array, size);
}
}
}
}
