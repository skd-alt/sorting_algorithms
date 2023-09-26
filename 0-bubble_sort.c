#include "sort.h"

/**
 * bubble_sort - function that micks the bubble sort
 * @array: set of values to be sorted
 * @size: size of array
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, n;
	int temp, swap;

	for (n = size; n > 0; n--)
	{
		swap = 0;
		for (i = 0; i + 1 < n; i++)
			if (array[i] > array[i + 1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				print_array(array, size);
				swap += 1;
			}

		if (swap == 0)
			return;
	}
}
