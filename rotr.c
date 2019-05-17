#include "monty.h"

/**
 * rotr - rotates the stack to the bottom.
 * @stack: double linked list stack_t.
 * @line_number: line number of command instruction.
 *
 * Return: nothing.
 */
void rotr(stack_t **stack, unsigned int line_number)
{
	stack_t *rigth, *left;
	int i, j, n_temp;
	(void)line_number;

	rigth = *stack;

	for (left = *stack, i = 0; (*left).next != NULL; left = (*left).next, i++)
	{}

	for (j = -1; j < i / 2; j++, rigth = (*rigth).next, left = (*left).prev)
	{
		n_temp = (*left).n;

		(*left).n = (*rigth).n;
		(*rigth).n = n_temp;
	}
}
