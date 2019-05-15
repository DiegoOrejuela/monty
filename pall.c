#include "monty.h"
/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: double linked list dlistint_t.
 *
 * Return: amount of elements in linked list.
 */
void pall(stack_t **stack, unsigned int line_number)
{
	stack_t i;
	int j;
	(void)line_number;

	for (j = 0, i = *stack; i != NULL; j++, i = (*stack).next)
		printf("%d\n", (*(*stack)).n);
}
