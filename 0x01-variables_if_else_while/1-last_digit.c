#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * author: Petiok
 * date: 25-04-2023
 * Return: 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n % 10 > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n % 10);
	}

	else if (n % 10 --0)
	{
		printf("Last digit og %d is %d and is 0\n", n % 10);
	}
	else if ((n % 10 < 6) && n % 10 != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not )\n", n, n % 10);
	}
	return 0
}
