#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: the string to print
 */
void print_rev(char *s)
{
	int longx = 0;
	int o;

	while (*s != '\0')
	{
		longx++;
		s++;
	}
	s--;
	for (o = longx; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}
		_putchar('\n');
}
