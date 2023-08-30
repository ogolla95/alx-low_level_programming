#include "main.h"

/**
 *_puts_recursion - Prints a string in reverse
 *@s: String to be printer
 * Return: Always 0 (Success)
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
		return;
	s++;
	_print_rev_recursion(s);
	s--;
	_putchar(*s);
}
