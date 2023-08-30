#include "main.h"

/**
 *_puts_recursion - prints a string in reverse
 *
 *@s: source string
 *
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
