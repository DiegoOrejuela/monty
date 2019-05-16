#include "monty.h"

/**
 * add_end - adds a new node at the end of a dlistint_t list.
 * @head: double linked list stack_t.
 * @n: number to asiggn a new node.
 *
 * Return: the address of the new element, or NULL if it failed.
 */
stack_t *add_end(stack_t **head, const int n)
{
	stack_t *new, *nodei;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(stack_t));
	if (new == NULL)
		return (NULL);

	(*new).n = n;
	(*new).prev = NULL;
	(*new).next = NULL;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		for (nodei = *head; (*nodei).next != NULL; nodei = (*nodei).next)
		{}
		(*new).prev = nodei;
		(*nodei).next = new;
	}

	return (new);
}
