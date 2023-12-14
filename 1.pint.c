#include "monty.h"

/**
 * pint_stack - Print the value
 * @head: Pointer to the  head
 * @line_number: Line number in  Monty
 */
void pint_stack(stack_t **head, unsigned int line_number)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: Can't pint, stack empty\n", line_number);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	printf("%d\n", (*head)->n);
}
