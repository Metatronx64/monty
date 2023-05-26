#include "monty.h"

/**
 * rotr - Rotates the last node of a stack_t stack to the top.
 * @stack: Pointer to the stack head.
 * @line_count: Line count.
 *
 * Return: Void.
 */
void rotr(stack_t **stack, unsigned int line_count)
{
	stack_t *bottom;
	stack_t *prev;

	(void) line_count;

	if (!stack || !*stack || !(*stack)->next)
		return;

	bottom = *stack;

	while (bottom->next)
		bottom = bottom->next;

	prev = bottom->prev;
	bottom->next = *stack;
	bottom->prev = NULL;
	prev->next = NULL;
	(*stack)->prev = bottom;
	*stack = bottom;
}

