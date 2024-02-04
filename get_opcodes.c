#include "monty.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * get_opcodes: initializes array of available opcodes
 * Return: array of instruction_t structures
 */

instruction_t *get_opcodes(void)
{
	static instruction_t opcodes[] = {
		{"push", push},
		{"pall", pall},
		{"pint", pint},
		{"pop", pop},
		{"swap", swap},
		{"add", add},
		{"nop", nop},
		{NULL, NULL}
	};
	return (opcodes);
}
