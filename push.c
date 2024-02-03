#include "monty.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * push: Pushes an element
 * @stack: Pointer to the top stack
 * @line_number: line number in the file
 *
 * Return: void
 */
void push(stack_t **stack, unsigned int line_number, char *arg)
{
	stack_t *new_node;
	int value;

	if (!stack || !line_number || !arg)
	{
		dprintf(STDOUT_FILENO,
			"L%u: usage: push integer\n",
			line_number);
		exit(EXIT_FAILURE);
	}

	value = atoi(arg);
	new_node = malloc(sizeof(stack_t));

	if (!new_node)

	{
		dprintf(STDERR_FILENO, "Error:malloc failed\n");
		exit(EXIT_FAILURE):
	}
	new_node->n = value;
	new_node->prev = NULL;

	if (!*stack)
		new_node->next = NULL;
	else
	{
		new_node->next = *stack;
		(*stack)->prev = new_node;
	}
	*stack = new_node;
}
