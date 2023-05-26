#include "monty.h"

/**
 * pall - Prints all the elements in the stack.
 * @stack: Pointer to the stack.
 * @line_cnt: Line count (unused).
 *
 * Return: Void.
 */
void pall(stack_t **stack, unsigned int line_cnt __attribute__((unused)))
{
	print_stack(*stack);
}

