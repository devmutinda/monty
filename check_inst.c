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
		{NULL, NULL}
	};

	while (strcmp(ops[i].opcode, s) && ops[i].opcode != NULL)
		i++;
	return (ops[i].f);
}
