#include "monty.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * pall: It prints values in the stack
 * @stack: pointer to the top stack
 * @line_number: file line number
 *
 * Return: void
 */

void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *current;

	(void)line_number;

	if(!stack || !*stack)
		return;

	current = *stack;

	while (current)
	{
		printf("%d\n", current->n);
		current = current->next;
	}
}
