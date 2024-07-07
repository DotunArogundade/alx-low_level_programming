#include <stdio.h>

/**
 * main - computes and prints the sum of the even-valued terms
 * in the Fibonacci sequence whose values do not exceed 4,000,000
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int a = 1, b = 2, sum = 0, temp;

	while (b <= 4000000)
	{
		if (b % 2 == 0)
			sum += b;
		temp = b;
		b = a + b;
		a = temp;
	}

	printf("%lu\n", sum);
	return (0);
}
