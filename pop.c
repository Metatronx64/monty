#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include "monty.h"

/**
 * pop - Removes the top element of the stack.
 * @stack: Pointer to the stack.
 * @line_cnt: Line number for error messages.
 *
 * Return: Void.
 */
void pop(stack_t **stack, unsigned int line_cnt)
{
	stack_t *tmp = NULL;

	if (!stack || !*stack)
	{
		fprintf(stderr, "L%u: can't pop an empty stack\n", line_cnt);
		exit(EXIT_FAILURE);
	}

	tmp = (*stack)->next;
	free(*stack);
	*stack = tmp;

	if (!*stack)
		return; /* Prevents errors because the next line might assign a NULL */
	(*stack)->prev = NULL;
}

