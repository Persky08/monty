#include "monty.h"

/**
 * _push - a function that pushes a stack
 * @stack: a pointer to a pointer to the stack
 * @value: the value to be push
 * @line_number: where the push is going to take place
 *
 * Return: void
 */

void _push(stack_t **stack, int value, unsigned int line_number)
{
	stack_t *new_node;

	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		fprintf(stderr, "Error: malloc failed");
		exit(EXIT_FAILURE);
	}
	new_node->n = value;
	new_node->prev = NULL;
	new_node->next = *stack;

	if (*stack != NULL)
	{
		(*stack)->prev = new_node;
	}

	*stack = new_node;
}

