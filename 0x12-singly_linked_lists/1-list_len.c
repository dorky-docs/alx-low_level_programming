#include "lists.h"
#include <stdlib.h>

/**
 * list_len - a function that returns the number of elements
 * in a linked list
 * @h: the pointer to list_t list
 * Return: number of elements in h
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
