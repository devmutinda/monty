#include "monty.h"
/**
 * op_mod - multiplies the second top element of the stack with the top
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

