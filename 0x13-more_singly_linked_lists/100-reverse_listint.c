#include "lists.h"

/**
 * reverse_listint - a function to reverse a linked list
 * @head: the pointer to the first node in the list
 * Return: a pointer to the first node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prevNode = NULL;
	listint_t *nextNode = NULL;

	while (*head)
	{
		nextNode = (*head)->nextNode;
		(*head)->nextNode = prevNode;
		prevNode = *head;
		*head = nextNode;
	}

	*head = prevNode;

	return (*head);
}
