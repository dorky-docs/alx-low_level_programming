#include "lists.h"

/**
 * add_nodeint_end - this function adds a node at the end of a linked list
 * @head: the pointer to the first element in the list
 * @n: the data to insert in the new element
 * Return:the  pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode;
	listint_t *tempo = *head;

	newNode = malloc(sizeof(listint_t));
	if (!newNode)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}

	while (tempo->next)
		tempo = tempo->next;

	tempo->next = newNode;

	return (newNode);
}
