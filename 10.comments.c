#include "monty.h"

/**
 * do_operations - Process Monty  operations
 * @file: Pointer to  Monty  file
 */
void do_operations(FILE *file)
{
	char *line = NULL;
	size_t len = 0;
	ssize_t read;

	while ((read = getline(&line, &len, file)) != -1)
	{
		bus.content = line;
		bus.file = file;

		if (line[0] != '#' && line[0] != '\n')
			parse_line(line);

		bus.content = NULL;
	}

	free(line);
}
