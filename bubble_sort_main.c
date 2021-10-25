#include "sort.h"


int main(void)
{
	int array[] = {109, 7};
	size_t size = sizeof(array) / sizeof(array[0]);

	printf("%ld\n", size);
	print_array(array, size);
	printf("\n");
	bubble_sort(array, size);
	printf("\n");
	print_array(array, size);
	return (0);
}
