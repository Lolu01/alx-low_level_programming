#include "main.h"
/**
 *  _puts_recursion - function like puts();
 *  @s: input
 *  Return: Always 8 (success)
 */
viod _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recurion(s + 1);
	}

	else
		_putchar('\n');
}
