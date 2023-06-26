#include "main.h"

/**
 * _puts - prints a string
 * @str: string to be printed
 *
 * Return - 0
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}
	putchar('\n');
}