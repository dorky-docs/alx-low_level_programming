#include "lists.h"

/**
 * insert_nodeint_at_index - this inserts a new node in a linked list,
 * at a given position
 * @head: the pointer to the first node in the list
 * @idx: the index where the new node is added
 * @n:the data to insert in the new node
 * Return:a pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *newNode;
	listint_t *tempo = *head;

	newNode = malloc(sizeof(listint_t));
	if (!newNode || !head)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}

	for (i = 0; tempo && i < idx; i++)
	{
		if (i == idx - 1)
		{
			newNode->next = tempo->next;
			tempo->next = newNode;
			return (newNode);
		}
		else
			tempo = tempo->next;
	}

	return (NULL);
}
