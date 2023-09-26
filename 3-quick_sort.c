#include "sort.h"

/**
 * quick_sort - function that mimicks quick sort algorithm
 * @array: array to be sorted
 * @size: size of array
 */

void quick_sort(int *array, size_t size)
{
	_quick_sort(array, 0, size - 1, size);
}

/**
 * _quick_sort - function that mimicks quick sort algorithm
 * @array: array to be sorted
 * @a: lower limit
 * @b: upper limit
 * @size: size of array
 */

void _quick_sort(int *array, int a, int b, size_t size)
{
	int p, w, i;
	int temp;

	if (a < b)
	{
		p = b;
		w = a;
		for (i = a; i < b; i++)
		{
			if (array[i] < array[p])
			{
				if (i != w)
				{
					temp = array[i];
					array[i] = array[w];
					array[w] = temp;
					print_array(array, size);
				}
				w++;
			}
		}
		if (w != p && array[w] != array[p])
		{
			temp = array[w];
			array[w] = array[p];
			array[p] = temp;
			print_array(array, size);
		}
		_quick_sort(array, a, w - 1, size);
		_quick_sort(array, w + 1, b, size);
	}
}
