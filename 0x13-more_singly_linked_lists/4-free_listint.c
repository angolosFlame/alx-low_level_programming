#include "lists.h"

/*
 * free listint - A function that frees a liked lists
 * @head: A pointer to listint_t structive
 * return: nothing
 * */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
