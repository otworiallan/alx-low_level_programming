#include <stdio.h>

/**
 * main - prints sequence from 1 to 100 [Fizz - Buzz]
 *
 * Return: (0) for success
 *
 */

int main(void)
{
	int n = 1;

	while (n <= 100)
	{
		if (n < 3)
		{
			printf("%d", n);
		}
		else if ((n % 3 == 0) && (n % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else if (n % 3 == 0)
		{
			printf("Fizz");
		}
		else if (n % 5 == 0)
		{
			printf("Buzz");
		}
		else
			printf("%d", n);
		if (n < 100)
			printf(" ");
		n++;
	}
	printf("\n");
	return (0);
}
