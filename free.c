#include "monty.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * free_stack - free a doubly linked list
 * @stack: pointer to the head of the stack
 * Return: void
 */
void free_stack(stack_t *stack)
{
	stack_t *temp;

	while (stack)
	{
		temp = stack;
		stack = stack->next;
		free(temp);
	}
}
