#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates random valid passwords for 101-crackme.
 *
 * Return: Always 0.
 */
int main(void)
{
    int i, sum, target;
    char password[100];

    sum = 0;
    target = 2772;
    srand(time(NULL))

    for (i = 0; sum < target; i++)
    {
        password[i] = (rand() % 94);
        sum += password[i];
    }

    password[i] = '\0';

    if (sum != target)
    {
        password[i - 1] -= (sum - target);
    }

    printf("%s", password);

    return (0);
}
