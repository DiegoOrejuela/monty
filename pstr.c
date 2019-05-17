#include "monty.h"
/**
 * pstr - print the string conformed my the integers of the stack
 * @stack: double linked list stack_t.
 * @line_number: line of opcode in the file.m
 *
 * Return: nothing.
 */
void pstr(stack_t **stack, unsigned int line_number)
{
	int val;
	stack_t *aux;
	(void)line_number;

	aux = (*stack);
	if (aux == NULL)
	{
		printf("\n");
		return;
	}
	val = (aux)->n;
	if (val == 0)
		return;
	while (aux != NULL && val > 0 && val < 128)
	{
		printf("%c", (aux)->n);
		aux = aux->next;
		val = (aux)->n;
	}
	printf("\n");
}
