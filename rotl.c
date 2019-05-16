#include "monty.h"

/**
 * rotl - rotates the stack to the top.
 * @stack: double linked list stack_t.
 * @line_number: line number of command instruction.
 *
 * Return: nothing.
 */
void rotl(stack_t **stack, unsigned int line_number)
{
	int n;

	if (*stack == NULL || stack == NULL)
		return;

	n = (*(*stack)).n;
	pop(stack, line_number);
	add_end(stack, n);
}
