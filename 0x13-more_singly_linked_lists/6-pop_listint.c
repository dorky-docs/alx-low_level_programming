#include "lists.h"

/**
 * pop_listint - a function that deletes the head node of a linked list
 * @head: a pointer to the first element in the linked list
 * Return: the data inside the elements deleted
 * 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *tempo;
	int count;

	if (!head || !*head)
		return (0);

	count = (*head)->n;
	tempo = (*head)->next;
	free(*head);
	*head = tempo;

	return (count);
}
