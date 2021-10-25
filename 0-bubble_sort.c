#include "sort.h"
/**
 * bubble_sort - sort the array traversingly
 * @array: array of numbers
 * @size: size of array
*/
void bubble_sort(int *array, size_t size)
{
	unsigned int i, j;
	int temp;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
	}
}
