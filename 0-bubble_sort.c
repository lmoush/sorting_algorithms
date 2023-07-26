#include "sort.h"
/**
 *bubble_sort - Function that sorts an array of ints
 *using bubble sort algorithm
 *
 *@array: array of ints
 *@size: size of array
 *
 */
void bubble_sort(int *array, size_t size)
{
	int lmoush;
	size_t i, f;

	if (!array || !size)
		return;

	i = 0;
	while (i < size)
	{
		for (f = 0; f < size - 1; f++)
		{
			if (array[f] > array[f + 1])
			{
				lmoush = array[f];
				array[f] = array[f + 1];
				array[f + 1] = lmoush;
				print_array(array, size);
			}
		}
		i++;
	}
}
