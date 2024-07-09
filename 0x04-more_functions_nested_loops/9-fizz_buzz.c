#include <stdio.h>

/**
 * fizz_buzz - prints the numbers from 1 to 100, followed by a new line
 *             with Fizz for multiples of three, Buzz for multiples of five,
 *             and FizzBuzz for multiples of both.
 */
void fizz_buzz(void)
{
	int i;
	for (i = 1; i <= 100; i++)

	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);

		if (i < 100)
			printf(" ");
	}
	printf("\n");
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	fizz_buzz();
	return (0);
}
