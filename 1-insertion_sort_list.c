#include "sort.h"
/**
 * insertion_sort_list - sort the list one by one by moving 
 * list: doubly linked list
*/
void insertion_sort_list(listint_t **list)
{
	listint_t *temp, *current, *h;

	h = *list;


