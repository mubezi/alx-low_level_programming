#include "main.h"
#include <string.h>

/**
 * puts2 - function to print every other character
 * @str: characer to  be printed
 *
 * Return : void
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		putchar(str[i]);
		i += 2;
	}
	putchar('\n');
}
