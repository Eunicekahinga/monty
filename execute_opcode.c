#include "monty.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * execute_opcode: executes operations
 * @opcode: opcode to execute
 * @stack: pointer to stack
 * @line_number: the line number
 * @opcode: opcodes available
 * Return: void
 */
void execute_opcode(char *opcode, stack_t **stack, unsigned int line_number, instruction_t *opcodes)
{
	int i = 0;

	if (opcode && opcode[strlen(opcode) - 1] == '\n')
		opcode[strlen(opcode) - 1] = '\0';

	while (opcodes[i].opcode)
	{
		if (strcmp(opcode, opcodes[i].opcode) == 0)
		{
			opcodes[i].f(stack, line_number);
			return;
		}
		i++
	}
	dprintf(STDERR_FILENO, "L%u: unknown instruction %s\n", line_number, opcode);
	exit(EXIT_FAILURE);
}
