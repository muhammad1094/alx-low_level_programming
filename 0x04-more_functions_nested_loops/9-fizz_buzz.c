#include <stdio.h>

/**
 * main - program that print numbers from 1 to 100
 * for multiples of three print Fizz
 * for the multiples of five print Buzz
 * For numbers which are multiples of both 3 & 5 print FizzBuzz
 *
 * Return: always 0 (Success)
*/

int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if ((num % 3) == 0 && (num % 5) == 0)
			printf("FizzBuzz");
		else if ((num % 3) == 0)
			printf("Fizz");
		else if ((num % 5) == 0)
			printf("Buzz");
		else
			printf("%d", num);
		if (num != 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}

