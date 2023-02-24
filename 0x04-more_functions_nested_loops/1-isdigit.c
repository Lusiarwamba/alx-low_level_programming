#include "main.h"
/**
 * _isdigit - check if a character is a digit
 * @c: parameter to be checked
 * Return: 1 for a character that will be a digit
 * and 0 for any else
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
		return (0);
}

