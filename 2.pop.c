#include "monty.h"

/**
 * remove_top -element of the stack
 * @head: Pointer to stack head
 * @line_number: in the Monty bytecode file
 */
void remove_top(stack_t **head, unsigned int line_number)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: Can't pop an empty stack\n", line_number);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	stack_t *temp = *head;
	*head = temp->next;
	free(temp);
}
