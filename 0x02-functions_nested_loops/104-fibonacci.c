#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int a = 1, b = 2;
	unsigned long int a_half1, a_half2, b_half1, b_half2;
	unsigned long int half1, half2;
	int count;

	printf("%lu, %lu", a, b);

	for (count = 2; count < 92; count++)
	{
		unsigned long int temp = a + b;

		printf(", %lu", temp);
		a = b;
		b = temp;
	}

	a_half1 = a / 1000000000;
	a_half2 = a % 1000000000;
	b_half1 = b / 1000000000;
	b_half2 = b % 1000000000;

	for (; count < 98; count++)
	{
		half1 = a_half1 + b_half1;
		half2 = a_half2 + b_half2;
		if (half2 >= 1000000000)
		{
			half1 += 1;
			half2 -= 1000000000;
		}

		printf(", %lu%09lu", half1, half2);
		a_half1 = b_half1;
		a_half2 = b_half2;
		b_half1 = half1;
		b_half2 = half2;
	}

	printf("\n");
	return (0);
}
