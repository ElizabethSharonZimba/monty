#include "monty.h"

/**
 * add_top_two - elements of the stack
 * @head: pointer to stack head
 * @line_number: in the Monty file
 */
void add_top_two(stack_t **head, unsigned int line_number)
{
	if (*head == NULL || (*head)->next == NULL)
	{
		fprintf(stderr, "L%u: can't add, stack too short\n", line_number);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	int result = (*head)->n + (*head)->next->n;
	(*head)->next->n = result;

	stack_t *temp = *head;
	*head = temp->next;
	free(temp);
}
