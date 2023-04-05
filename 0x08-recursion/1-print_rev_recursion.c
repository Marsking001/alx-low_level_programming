#include "main.h"
/**
 * _print_rev_recursion - prints a string in reverse
 * @s: the pointer input
 *
 * Return: On success 1.
 * On erro, -1 is returned, and erron is set appropriately
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);

	}
}
