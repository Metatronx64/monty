#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include "monty.h"

/**
 * mod - Computes the remainder of the division between the top two elements of the stack.
 * @stack: Pointer to the stack.
 * @line_cnt: Line count.
 *
 * Return: Void.
 */
void mod(stack_t **stack, unsigned int line_cnt)
{
	int result;

	if (!stack || !*stack || !(*stack)->next)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", line_cnt);
		exit(EXIT_FAILURE);
		return;
	}

	if ((*stack)->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_cnt);
		exit(EXIT_FAILURE);
		return;
	}

	result = ((*stack)->next->n) % ((*stack)->n);
	pop(stack, line_cnt); /* Remove top node */
	(*stack)->n = result;
}

