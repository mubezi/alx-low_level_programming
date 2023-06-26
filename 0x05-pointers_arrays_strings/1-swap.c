#include "main.h"
/**
 * swap_int - swap integers
 * @a: The integers to be swapped
 * @b: The integers to be swapped
 *
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp; 
}
