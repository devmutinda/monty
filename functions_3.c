#include "monty.h"
/**
 * op_mod - computes the rest of the division
 * @stack: pointer to the head node pointer
 * @line_number: the line number
 * Return: void
 */
void op_mod(stack_t **stack, unsigned int line_number)
{
	stack_t *ptr = *stack;
	int count = 0;

	while (ptr)
	{
		ptr = ptr->next;
		count++;
	}
	if (count < 2)
	{
		dprintf(2, "L%d: can't mod, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	ptr = *stack;
	if (ptr->n == 0)
	{
		dprintf(2, "L%d: division by zero\n", line_number);
		exit(EXIT_FAILURE);
	}
	ptr->next->n = ptr->next->n % ptr->n;
	*stack = ptr->next;
	(*stack)->prev = NULL;
	free(ptr);
}
/**
 * op_pchar - prints the char at the top of the stack,
 * @stack: pointer to the head node pointer
 * @line_number: the line number
 * Return: void
 */
void op_pchar(stack_t **stack, unsigned int line_number)
{
	stack_t *ptr = *stack;

	if (ptr == NULL)
	{
		dprintf(2, "L%d: can't pchar, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	if (ptr->n < 0 || ptr->n > 127)
	{
		dprintf(2, "L%d: can't pchar, value out of range\n", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", ptr->n);
}
/**
 * op_pstr - prints the string from linked list
 * @stack: pointer to the head node pointer
 * @line_number: the line number
 * Return: void
 */
void op_pstr(stack_t **stack, unsigned int line_number)
{
	stack_t *ptr = *stack;

	(void)line_number;
	while (ptr)
	{
		if (ptr->n == 0 || (ptr->n < 0 || ptr->n > 127))
		{
			printf("\n");
			break;
		}
		printf("%c", ptr->n);
		if (ptr->next == NULL)
			printf("\n");
		ptr = ptr->next;
	}
}
