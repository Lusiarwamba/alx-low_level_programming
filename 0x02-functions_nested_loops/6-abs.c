#include "main.h"
/**
 * _abs - function that checks absolute value
 *
 * @b: parameter to be checked
 *
 * Return: always 0
 */
int _abs(int b)
{
	if (b < 0)
		b = -(b);
	else if (b > 0)
		b = b;
	return (b);
}
