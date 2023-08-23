#include "main.h"

/**
 * usage_error - A function that prints a usage error
 *
 * Return: EXIT_FAILURE.
 */
int usage_error(void)
{
	fprintf(stderr, "USAGE: monty file\n");
	return (EXIT_FAILURE);
}

/**
 * open_error - Prints file openning error msg
 * @filename: the name of the file
 *
 * Return: EXIT_FAILURE.
 */
int open_error(char *filename)
{
	fprintf(stderr, "Error: Can't open file %s\n", filename);
	return (EXIT_FAILURE);
}

/**
 * malloc_error - Prints malloc error msg
 *
 * Return: EXIT_FAILURE.
 */
int malloc_error(void)
{
	fprintf(stderr, "Error: malloc failed\n");
	return (EXIT_FAILURE);
}

/**
 * unknown_op_error - Prints unknown instruction error msg
 * @opcode: the opcode where the error occured
 * @line_number: the line number.
 *
 * Return: EXIT_FAILURE
 */
int unknown_op_error(char *opcode, unsigned int line_number)
{
	fprintf(stderr, "L%u: unknown instruction %s\n",
			line_number, opcode);
	return (EXIT_FAILURE);
}

/**
 * no_int_error - prints invalid push argument error msg
 * @line_number: the number of the line
 *
 * Return: EXIT_FAILURE.
 */
int no_int_error(unsigned int line_number)
{
	fprintf(stderr, "L%u: usage: push integer\n", line_number);
	return (EXIT_FAILURE);
}
