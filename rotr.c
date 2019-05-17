#include "monty.h"

/**
 * rort - rotates the stack to the bottom.
 * @stack: double linked list stack_t.
 * @line_number: line number of command instruction.
 *
 * Return: nothing.
 */
void rort(stack_t **stack, unsigned int line_number)
{
	stack_t *rigth, *left;
	int i, n_temp;

	rigth = *stack;

	for (left = *stack, i = 0; (*left).next != NULL; left = (*left).next, i++)
	{}

	for (; j < i / 2; j++, rigth = (*rigth).next, rigth = (*rigth).prev)
	{
		n_temp = (*left).n;

		(*left).n = (*rigth).n;
		(*rigth).n = n_temp;
	}
}
