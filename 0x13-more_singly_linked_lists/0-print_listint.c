#include "lists.h"
/**
 * print_listint - prints elements if linked list
 * @h: list to print
 * Return: node count
 */
size_t print_listint(const listint_t *h)
{
	size_t numb = 0;

	while (h)
	{
		printf("%d\n", h->n);
		numb++;
		h = h->next;
	}
	return (numb);
}
