#include "monty.h"

/**
 * set_stack_format - Sets the format to stack LIFO
 * @head: Pointer to stack head
 * @counter: Line number in Monty bytecode file
 */
void set_stack_format(stack_t **head, unsigned int line_number)
{
	(void)line_number;
	bus.lifi = 0;
}

/**
 * set_queue_format - Sets the format to queue FIFO
 * @head: Pointer to the stack head
 * @counter: Line number in Monty bytecode file.
 */
void set_queue_format(stack_t **head, unsigned int line_number)
{
	(void)line_number;
	bus.lifi = 1;
}

/**
 * addqueue - Adds a new node to the queue
 * @head: Pointer to the queue head
 * @n: added queue value
 */
void addqueue(stack_t **head, int n)
{
	stack_t *new_node = malloc(sizeof(stack_t));

	if (new_node == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		stack_t *tail = *head;

		while (tail->next != NULL)
			tail = tail->next;

		tail->next = new_node;
		new_node->prev = tail;
	}
}
