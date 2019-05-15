#include "monty.h"
/**
 * pop - removes the top element of the stack.
 * @stack: double linked list dlistint_t.
 * @line_number: line number of command instruction.
 *
 * Return: nothing.
 */
void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *node_ref;

	if (stack == NULL || *stack == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
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
