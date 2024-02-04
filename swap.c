#include "monty.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * swap: swaps the top two stack elements
 * @stack: head of the linked list
 * @line_number: the line number
 * Return: void
 */

void swap(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;

	if (!stack || !*stack || !((*stack)->next))
	{
		dprintf(STDERR_FILENO, "L%u: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	temp = (*stack)->next;
	(*stack)->next = temp->next;
	(*stack)->prev = temp;
	temp->next = *stack;
	temp->prev = NULL;
	*stack - temp;
}
