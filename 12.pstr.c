#include "monty.h"

/**
 * print_string_at_top -starting at the top of the stack followed by a /n
 * @head: Pointer to  stacs head
 * @line_number: in  Monty  file
 */
void print_string_at_top(stack_t **head, unsigned int line_number)
{
	stack_t *current = *head;
	(void)line_number;

	while (current && current->n > 0 && current->n <= 127)
	{
		printf("%c", current->n);
		if (current->n == 0)
			break;
		current = current->next;
	}

	printf("\n");
}
