#include "monty.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * pint: prints the top stack value
 * @stack: head of the linked list
 * @line_number: the line number
 * Return: void
 */
void pint(stack_t **stack, unsigned int line_number)
{

	if (!stack || !*stack)
	{
		dprintf(STDERR_FILENO, "L%u:can't pint, stack empty\n, line_number);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->n);
}
