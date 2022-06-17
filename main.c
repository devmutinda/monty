#include "monty.h"
/**
 * main - entry point
 * @ac: argument count
 * @av: argument vector
 * Return: Always 0
 */
int main(int ac, char **av)
{
	FILE *fd;
	size_t n = 0, line_number = 1;
	stack_t *stack = NULL;
	char *lineptr = NULL, **line;
	int length;
	void (*result)(stack_t**, unsigned int);

	if (ac != 2)
	{
		dprintf(2, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	fd = fopen(av[1], "r");
	if (fd == NULL)
	{
		dprintf(2, "Error: Can't open file %s\n", av[1]);
		exit(EXIT_FAILURE);
	}
	while ((getline(&lineptr, &n, fd)) != -1)
	{
		length = strlen(lineptr);
		lineptr[length - 1] = '\0';
		line = split_line(lineptr);
		result = check_instruction(line[0]);
		value = line[1];
		if (*result == NULL)
		{
			dprintf(2, "L%ld: unknown instruction %s\n", line_number, lineptr);
			exit(EXIT_FAILURE);
		}
		result(&stack, line_number);
		free(line);
		line_number++;
	}
	free_stack(stack);

	return (0);
}
