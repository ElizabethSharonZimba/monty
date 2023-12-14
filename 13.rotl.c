#include "monty.h"

/**
 * rotate_stack_left - Rotates the stack to the top
 * @head: Pointer to stack head
 * @line_number: in the Monty file
 */
void rotate_stack_left(stack_t **head, __attribute__((unused)) unsigned int line_number)
{
	if (*head == NULL || (*head)->next == NULL)
		return;

	stack_t *temp = *head;
	stack_t *new_head = (*head)->next;

	new_head->prev = NULL;

	while (temp->next != NULL)
		temp = temp->next;

	temp->next = *head;
	(*head)->next = NULL;
	(*head)->prev = temp;

	*head = new_head;
}
