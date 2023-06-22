#include "main.h"
/**
 * _isupper - check for upper case
 * @c: The character to print
 *
 * Return: Always 0.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
