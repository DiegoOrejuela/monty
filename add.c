#include "monty.h"
/**
 * add - adds the top two elements of the stack.
 * @stack: double linked list stack_t.
 * @line_number: line of opcode in the file.m.
 *
 * Return: nothing.
 */
void add(stack_t **stack, unsigned int line_number)
{
	stack_t *node_ref;

	if (stack_len(*stack) < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	(*(*(*stack)).next).n += (*(*stack)).n;

	node_ref = *stack;
	*stack = (*node_ref).next;
	(*(*stack)).prev = NULL;
	free(node_ref);
}
