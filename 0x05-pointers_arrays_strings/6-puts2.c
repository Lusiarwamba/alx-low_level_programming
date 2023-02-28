#include "main.h"
/**
 * puts2 - this function should print only one character out of the two
 * starting with the first character
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int longa = 0;
	int b = 0;
	char *z = str;
	int o;

	while (*z != '\0')
	{
		b++;
		longa++;
	}
	b = longa - 1;
	for (o = 0 ; o <= b ; o++)
	{
		if (o % 2 == 0)
	{
		_putchar(str[o]);
	}
	}
	_putchar('\n');
}
