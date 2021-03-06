#ifndef SORT_H
#define SORT_H

#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * struct listint_s - Doublylinked list
 * @n: data
 * @prev: prev node
 * @next: next node
*/

typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;
void print_array(const int *array, size_t size);
void bubble_sort(int *array, size_t size);
void print_list(const listint_t *list);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void realqs(int *array, int start, int end, size_t size);
int partition(int *array, size_t start, size_t end, size_t size);
#endif
