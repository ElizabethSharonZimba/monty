#include "monty.h"

/**
 * print_char_at_top - Prints the char at the top of the stack followed by a /n
 * @head: Pointer to  stack head
 * @line_number: in the Monty  file
 */
void print_char_at_top(stack_t **head, unsigned int line_number)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pchar, stack empty\n", line_number);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	if ((*head)->n > 127 || (*head)->n < 0)
	{
		fprintf(stderr, "L%u: can't pchar, value out of range\n", line_number);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	printf("%c\n", (*head)->n);

	stack_t *temp = *head;
	*head = temp->next;
	free(temp);
}
