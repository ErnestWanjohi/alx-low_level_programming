#include "lists.h"
/**
 * listint_len - returns number of elements in linked list
 * @h: linked lit to reverse
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t numb = 0;

	while (h)
	{
		numb++;
		h = h->next;
	}
	return (numb);
}
