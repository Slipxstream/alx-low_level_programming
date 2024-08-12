#include "lists.h"

/**
 * sum_listint -  calculates sum of all the data (n) of a listint_t linked list.
 * @head: first node
 *
 * Return: data summation
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
