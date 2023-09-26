#include "sort.h"

/**
 * selection_sort - function mimicks selection sort algorithm
 * @array: array of integers to be sorted
 * @size: size of array
 */

void selection_sort(int *array, size_t size)
{
	int min, temp, swp;
	size_t i, j;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min = array[i];
		swp = 0;
		for (j = i + 1; j < size; j++)
			if (array[j] < min)
			{
				min = array[j];
				temp = j;
				swp += 1;
			}
		if (swp > 0)
		{
			array[temp] = array[i];
			array[i] = min;
			print_array(array, size);
		}
	}
}
