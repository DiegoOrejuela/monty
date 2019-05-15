#include "monty.h"
/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: double linked list dlistint_t.
 *
 * Return: amount of elements in linked list.
 */
void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *node_ref;

	if (stack == NULL || *stack == NULL)
	{
		dprintf(2, "L%d: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}

	node_ref = *stack;

	if ((*node_ref).next != NULL)
	{
		(*(*node_ref).next).prev = NULL;
	}
	*stack = (*node_ref).next;
	free(node_ref);
}
