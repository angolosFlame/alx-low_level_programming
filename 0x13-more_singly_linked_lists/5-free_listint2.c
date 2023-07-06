#include "lists.h"

/*
 * free_listint2 - A function that frees listint and set head to NULL
 * @head: pointer to the list structure
 * return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;
	temp = *head;
	while(*head)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	*head = NULL;
}
