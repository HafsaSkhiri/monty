#include "main.h"

/**
 * pop_error - A function that prints error
 * @line_number: the number of the line
 *
 * Return: EXIT_FAILURE
 */
int pop_error(unsigned int line_number)
{
	fprintf(stderr, "L%u: can't pop an empty stack\n", line_number);
	return (EXIT_FAILURE);
}

/**
 * print_error - A function that prints an error msg
 * @line_number: the number of the line.
 *
 * Return: EXIT_FAILURE.
 */
int print_error(unsigned int line_number)
{
	fprintf(stderr, "L%u: can't print, stack empty\n", line_number);
	return (EXIT_FAILURE);
}

/**
 * short_stack_error - prints math function error
 * @line_number: the number of the line
 * @op: the operation where the error occured
 *
 * Return: EXIT_FAILURE.
 */
int short_stack_error(unsigned int line_number, char *op)
{
	fprintf(stderr, "L%u: can't %s, stack too short\n", line_number, op);
	return (EXIT_FAILURE);
}

/**
 * div_error - Prints div error
 * @line_number: the number of the line
 *
 * Return: EXXIT_FAILURE
 */
int div_error(unsigned int line_number)
{
	fprintf(stderr, "L%u: division by zero\n", line_number);
	return (EXIT_FAILURE);
}

/**
 * pchar_error - Prints pchar error msg
 * @line_number: the number of the line
 * @message: the error msg to print
 *
 * Return: EXIT_FAILURE
 */
int pchar_error(unsigned int line_number, char *message)
{
	fprintf(stderr, "L%u: can't pchar, %s\n", line_number, message);
	return (EXIT_FAILURE);
}
