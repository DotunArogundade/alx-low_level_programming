#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0
 */
int main(void)
{
	int count;
	long int fib1 = 1, fib2 = 2, next;

	printf("%ld, %ld", fib1, fib2);

	for (count = 2; count < 50; count++)
	{
		next = fib1 + fib2;
		printf(", %ld", next);
		fib1 = fib2;
		fib2 = next;
	}

	printf("\n");

	return 0;
}
