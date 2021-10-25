#include "sort.h"
/**
 * selection_sort -stand at one point till its done
 * array: int array
 * size: size of array
*/
void selection_sort(int *array, size_t size)
{
	unsigned int i, j;
	int temp;

	if (size < 2)
		return;
	for (i = 0; i < size - 1; i++)
	{ 
		for(j = 0; j < size; j++)
		{
			if (array[i] < array[j])
			{
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
				print_array(array, size);
			}
		}
	}
}
