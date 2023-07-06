#include "lists.h"
#include <stdio.h>

/*listint_len - A funtion that returns the number of elements in the linked lists
 * @ pointer to the list node
 * @node - the node structure
 * returns the node
 */

size_t listint_len(const listint_t *h)
{
	size_t node = 0;

	while(h)
	{
		h = h->next;
		node++;
	}
	return (0);
}


