#include "monty.h"

/**
 * mod_top_two -  division of the second top by the top element
 * @head: Pointer to  stack head
 * @line_number: in  Monty  file
 */
void mod_top_two(stack_t **head, unsigned int line_number)
{
	if (*head == NULL || (*head)->next == NULL)
	{
		fprintf(stderr, "L%u: can't mod, stack too short\n", line_number);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	if ((*head)->n == 0)
	{
		fprintf(stderr, "L%u: division by zero\n", line_number);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	int result = (*head)->next->n % (*head)->n;
	(*head)->next->n = result;

	stack_t *temp = *head;
	*head = temp->next;
	free(temp);
}
