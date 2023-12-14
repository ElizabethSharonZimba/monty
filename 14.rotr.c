#include "monty.h"

/**
 * rotate_stack_right - Rotates the stack to the bottom
 * @head: Pointer to stack head
 * @line_number: Line number in Monty file
 */

void rotate_stack_right(stack_t **head, __attribute__((unused)) unsigned int line_number)
{
	if (*head == NULL || (*head)->next == NULL)
		return;

	stack_t *temp = *head;

	stack_t *last = *head;

	while (last->next != NULL)
		last = last->next;

	last->next = temp;
	temp->prev = last;
	last->prev->next = NULL;
	last->prev = NULL;

	*head = last;
}
