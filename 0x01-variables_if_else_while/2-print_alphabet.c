#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Determines if a number is positive, negative or zero.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(ch[i]);
	}
	putchar('\n');
	return (0);

}
