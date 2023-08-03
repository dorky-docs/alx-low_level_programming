#include "lists.h"

/**
 * free_listint - a function that frees a linked list
 * @head: the listint_t list to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *tempo;

	while (head)
	{
		tempo = head->next;
		free(head);
		head = tempo;
	}
}
