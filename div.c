#include "monty.h"
/**
 * _div - div the top two elements of the stack.
 * @stack: double linked list stack_t.
 * @line_number: line of opcode in the file.m.
 *
 * Return: nothing.
 */
void _div(stack_t **stack, unsigned int line_number)
{
	stack_t *node_ref;

	if (stack_len(*stack) < 2)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	if ((*stack)->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_number);
		exit(EXIT_FAILURE);
	}
	(*(*(*stack)).next).n /= (*(*stack)).n;

	node_ref = *stack;
	*stack = (*node_ref).next;
	(*(*stack)).prev = NULL;
	free(node_ref);
}
