#include "sort.h"
/**
 * selection_sort -stand at one point till its done
 * @array: int array
 * @size: size of array
*/
void selection_sort(int *array, size_t size)
{
	unsigned int i, j, min;
	int temp;

	if (size < 2)
		return;
	for (i = 0; i < size; i++)
	{
		temp = array[i];
		min = i;
		for (j = i; j < size; j++)
		{
			if (temp > array[j])
			{
				min = j;
				temp = array[j];
			}
		}
		if (temp == array[i] && min == i)
			continue;
		array[min] = array[i];
		array[i] = temp;
		print_array(array, size);
	}
}
