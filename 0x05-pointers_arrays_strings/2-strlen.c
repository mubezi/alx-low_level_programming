#include "main.h"

/**
 * _strlen - find the length of a character
 * @s: pointer for char
 *
 * Return: lenth of char
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}
