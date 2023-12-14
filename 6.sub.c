#include "monty.h"

/**
 * subtract_top_two - Subtracts the top  of the stack from the second top
 * @head: Pointer to stack  head
 * @line_number: in the Monty  file
 */
void subtract_top_two(stack_t **head, unsigned int line_number)
{
	if (*head == NULL || (*head)->next == NULL)
	{
		fprintf(stderr, "L%u: can't sub, stack too short\n", line_number);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	int result = (*head)->next->n - (*head)->n;
	(*head)->next->n = result;

	stack_t *temp = *head;
	*head = temp->next;
	free(temp);
}
