#include "lists.h"

/**
 * listint_len - returns the number of elements
 *
 * @h: linked list of type listint_t to print
 *
 * Return: Number of elements in linked list.
 */

size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}
