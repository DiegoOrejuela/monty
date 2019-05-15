#include "monty.h"
/**
 * free_stack - free all the memory of a stack
 * @head: the pointer to the stack
 *
 */
void free_stack(stack_t *head)
{
	stack_t *temp;

	if (head != NULL)
	{
		temp = head;
		head = temp->next;
		free(temp);
		free_stack(head);
	}
}
