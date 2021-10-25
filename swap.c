#include "sort.h"
/**
 * swap - swaps two numbers
 * @a: first
 * @b: second
*/
void swap(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}
