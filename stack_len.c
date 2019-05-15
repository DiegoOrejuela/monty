#include "monty.h"

/**
 * stack_len - returns the number of elements in a linked stack list.
 * @h: double linked list stack_t.
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
