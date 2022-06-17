#include "monty.h"
/**
 *op_swap - swaps top two elements of stack
 *@stack: pointer to the head node pointer
 *@line_number: the line number
 *Return: void
 */
void op_swap(stack_t **stack, unsigned int line_number)
{
	stack_t *ptr = *stack;
	int number, count = 0;

	while (ptr)
	{
		ptr = ptr->next;
		count++;
	}
	if (count < 2)
	{
		dprintf(2, "L%d: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	ptr = *stack;
	number = ptr->n;
	ptr->n = ptr->next->n;
	ptr->next->n = number;
}
