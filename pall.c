#include "monty.h"
/**
 * pall - prints all the values on the stack, starting from the top
 * of the stack.
 * @stack: double linked list stack_t.
 * @line_number: line of opcode in the file.m
 *
 * Return: nothing.
 */
void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *i;
	int j;
	(void)line_number;

	for (j = 0, i = *stack; i != NULL; j++, i = (*i).next)
		printf("%d\n", (*i).n);
}
