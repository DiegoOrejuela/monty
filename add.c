#include "monty.h"
/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: double linked list dlistint_t.
 *
 * Return: amount of elements in linked list.
 */
void add(stack_t **stack, unsigned int line_number)
{
	stack_t *node_ref;

	if (stack_len(*stack) < 2)
	{
		dprintf(2, "L%lu: can't add, stack too short", line_number);
		exit(EXIT_FAILURE);
	}

	(*(*(*stack)).next).n += (*(*stack)).n;

	node_ref = *stack;
	*stack = (*node_ref).next;
	(*(*stack)).prev = NULL;
	free(node_ref);
}
