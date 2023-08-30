#include "main.h"

/**
 *_puts_recursion - Prints a string in reverse
 *@s: String to be printer
 * Return: Always 0 (Success)
 *
 *
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}