#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a list
 * @head: pointer to first node
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}

	free(head);
}
