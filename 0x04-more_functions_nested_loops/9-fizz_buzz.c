#include "main.h"
#include <stdio.h>
/**
 * main - prints the number from 1 to 100, with Fizz, Buzz, or FizzBuzz for
 * multiples of 3, 5, or both, respectively.
 * *Return: Always 0.
 */
int main(void)
{
	int i; for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz ");
		else if (i % 3 == 0)
			printf("Fizz ");
		else if (i % 5 == 0)
			printf("Buzz ");
	} else
	{
			printf("%d", i);
	}
	printf("\n");
	{
		fizz_buzz();
	}
		return (0);
}
