#include "monty.h"

/**
 * f_push_pall - handles push and pall opcodes
 * @head: pointer to the head of the stack
 * @line_number: line number in the file
 * @opcode: execute push or pall
 * Return: nothing
 */
void f_push_pall(stack_t **head, unsigned int line_number, char *opcode)
{
	if (strcmp(opcode, "push") == 0)
	{
		int n, j = 0, flag = 0;

		if (bus.arg)
		{
			if (bus.arg[0] == '-')
				j++;
			for (; bus.arg[j] != '\0'; j++)
			{
				if (bus.arg[j] > 57 || bus.arg[j] < 48)
					flag = 1;
			}
			if (flag == 1)
			{
				fprintf(stderr, "L%d: usage: push integer\n", line_number);
				fclose(bus.file);
				free(bus.content);
				free_stack(*head);
				exit(EXIT_FAILURE);
			}
		}
		else
		{
			fprintf(stderr, "L%d: usage: push integer\n", line_number);
			fclose(bus.file);
			free(bus.content);
			free_stack(*head);
			exit(EXIT_FAILURE);
		}
		n = atoi(bus.arg);
		if (bus.lifi == 0)
			addnode(head, n);
		else
			addqueue(head, n);
	}
	else if (strcmp(opcode, "pall") == 0)
	{
		print_stack(*head);
	}
	else
	{
		fprintf(stderr, "L%d: unknown instruction %s\n", line_number, opcode);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
}

