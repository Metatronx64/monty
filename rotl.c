#include "monty.h"

/**
 * rotl - Rotates the first element of the stack to the last position.
 * @stack: Pointer to the stack head.
 * @line_count: Line count.
 *
 * Return: Void.
 */
void rotl(stack_t **stack, unsigned int line_count)
{
	stack_t *left;
	stack_t *right;

	(void) line_count;

	if (!stack || !*stack || !(*stack)->next)
		return;

	left = right = *stack;

	while (right->next) /* Move the right pointer to the last node */
		right = right->next;

	right->next = left; /* Create a circular infinite linked list loop */
	left->prev = right;

	*stack = left->next; /* Cut the link between the first and second elements */
	(*stack)->prev->next = NULL;
	(*stack)->prev = NULL;
}

