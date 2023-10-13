#include "main.h"

/**
 * print_most_numbers - prints numbers from 0 to 9
 *                  but don't print 2 & 4
 *
 * Return: always 0 (Success)
*/

void print_most_numbers(void)
{
	int num = 0;

	for (num = 0; num <= 9; num++)
	{
		if (num == 2 || num == 4)
			continue;
		_putchar(num + 48);
	}
	_putchar('\n');
}
