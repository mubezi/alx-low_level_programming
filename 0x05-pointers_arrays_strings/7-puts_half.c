#include "main.h"
#include <string.h>

/**
 * puts_half - function to print half string
 * @str: string to be printed
 *
 * Return -voild
 */
void puts_half(char *str)
{
	int len = strlen(str);
	int start;

	if (len % 2 == 0)
	{
		start = len / 2;
	}
	else if (len % 2 == 1)
	{
		start = (len - 1) / 2;
	}
	while (str[start] != '\0')
	{
		putchar(str[start]);
		start++;
	}
	putchar('\n');
}
