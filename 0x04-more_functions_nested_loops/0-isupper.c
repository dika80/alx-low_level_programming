#include "main.h"

/**
 * _isupper - checks for an uppercase character
 * @c: the character to check
 *
 * Return: 1 if the character is uppercase, otherwise 0
 */
int _isupper(int c)
{
	if (c >= 0 && c <= 9)
		return (1);
	else
		return (0);
}
