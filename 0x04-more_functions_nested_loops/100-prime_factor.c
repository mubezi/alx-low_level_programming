#include <stdio.h>
#include <math.h>
/**
 * main-calculate the largest prime number
 *
 * Return: 0
 *
 */
int main(void)
{
	long int i;
	long int num;
	long int max;

	num = 612852475143;
	max = -1;

	while (num % 2 == 0)
	{
		max = 2;
		num /= 2;
	}

	for (i = 3; i <= sqrt(num); i = i + 2)
	{
		while (num % i == 0)
		{
			max = i;
			num = num / 2;
		}
	}
	if (num > 2)
		max = num;

	printf("%ld\n", max);

	return (0);
}
