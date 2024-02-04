#include "monty.h"

/**
 * main: function that executes the monty code
 * @argc: argument count
 * @argv: argument value
 * Return: Success
 */

int main(int argc, char *argv[])
{
	FILE *bytecodes;
	char *line = NULL;
	size_t len = 0;
	ssize_t read;
	unsigned int line_number = 0;
	stack_t *stack = NULL;
	instruction_t *opcodes = get_opcodes();

	if(argc  != 2)
	{
		dprintf(STDERR_FILENO, "Usage: %s <file>\n", argv[0]);
		exit(EXIT_FAILURE);
	}

	bytecodes = fopen(argv[1], "r");

	if(!bytecodes)
	{
		dprintf(STDERR_FILENO, "Usage: %s <file>\n", argv[0]);
		exit(EXIT_FAILURE);
	}

	while ((read = getline(&line, &len, bytecode)) != -1)
	{
		line_number++;
		execute_opcode(line, &stack, line_number, opcodes);
	}
	fclose(bytecode);
	free(line);
	free_stack(stack);

	return (0);
}
