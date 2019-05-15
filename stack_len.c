#include "monty.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list.
 * @h: double linked list dlistint_t.
 *
 * Return: amount of elements in linked list.
 */
size_t stack_len(const stack_t *h)
{
	const stack_t *i;
	int j;

	for (j = 0, i = h; i != NULL; j++, i = (*i).next)
	{}
	return (j);
}
