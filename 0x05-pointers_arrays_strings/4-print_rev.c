#include "main.h"

/**
 * print_rev - function to print reverse
 * @s: string to be reverse
 *
 * Return -void
 */
void print_rev(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	while (len > 0)
	{
		putchar(*(--s));
		len--;
	}
	putchar('\n');

}
