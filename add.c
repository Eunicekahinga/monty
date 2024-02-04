#include "monty.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * add: adds the top two stack elements
 * @stack: head of the linked list
 * @line_number: the line number
 * Return: void
 */

void add(stack_t **stack, unsigned int line_number)
{
        stack_t *temp;

	if (!stack || !*stack || !((*stack)->next))
	{
		 dprintf(STDERR_FILENO, "L%u: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	temp = (*stack)->next;
	temp->n += (*stack)->n;

	pop(stack, line_number);
}
