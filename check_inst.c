#include "monty.h"
/**
 * check_instruction - checks if command is valid
 * @s: instruction
 * Return: function
 */
void (*check_instruction(char *s))(stack_t**, unsigned int)
{
	int i = 0;
	instruction_t ops[] = {
		{"push", op_push},
		{"pall", op_pall},
		{"pint", op_pint},/*To include pop, swap, add fcns*/
		{"nop", op_nop},
		{"pop", op_pop},
		{"swap", op_swap},
		{NULL, NULL}
	};

	while (ops[i].opcode)
	{
		if (!strcmp(ops[i].opcode, s))
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
