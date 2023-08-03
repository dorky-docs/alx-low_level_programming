#include "lists.h"

/**
 * sum_listint - this calculates the sum of all the data in a listint_t list
 * @head: the first node in the linked list
 * Return: sum of all the data in the list
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *tempo = head;

	while (tempo)
	{
		sum += tempo->n;
		tempo = tempo->next;
	}

	return (sum);
}
