#include"lists.h"
#include <string.h>

/* A function that prints nodes until node= NULL
 * return the node data
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *next_node;

	next_node = *head;

	*head = malloc(sizeof(listint_t));
	if (!*head)
	{
		return (NULL);
	}
	(*head)->n = n;
	(*head)->next = next_node;
	return (*head);
}
