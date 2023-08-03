#include "lists.h"

/**
 * get_nodeint_at_index - a function that returns the node at a certain index
 * in a linked list
 * @head: the first node in the linked list
 * @index: index of the node to return
 * Return: a pointer to the node we seek, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int j = 0;
	listint_t *tempo = head;

	while (tempo && j < index)
	{
		tempo = tempo->next;
		j++;
	}

	return (tempo ? tempo : NULL);
}
