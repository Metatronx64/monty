#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "./monty.h"

/**
 * opcode - Executes the corresponding operation based on the given opcode.
 * @stack: Pointer to the stack.
 * @str: Opcode string to compare.
 * @line_cnt: Line count.
 *
 * Return: Void.
 */
void opcode(stack_t **stack, char *str, unsigned int line_cnt)
{
	int i = 0;

	instruction_t op[] = INSTRUCTIONS;

	if (!strcmp(str, "stack"))
	{
		global.data_struct = 1;  // Change the data structure to a "stack".
		return;
	}
	if (!strcmp(str, "queue"))
	{
		global.data_struct = 0;  // Change the data structure to a "queue".
		return;
	}

	while (op[i].opcode)
	{
		if (strcmp(op[i].opcode, str) == 0)
		{
			op[i].f(stack, line_cnt);  // Execute the function associated with the matching opcode.
			return;  // Exit the function after executing the opcode.
		}
		i++;
	}
	fprintf(stderr, "L%d: unknown instruction %s\n", line_cnt, str);  // Print an error message for an unknown opcode.
	exit(EXIT_FAILURE);
}

