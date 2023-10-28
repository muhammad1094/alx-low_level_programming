#include "main.h"
#include <stdio.h>

/**
 * _puts - prints a string to stdout
 *
 * @str: string to be printed
 *
 * Return: Nothing
*/

void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str + 0);
		str++;
	}
	putchar('\n');
}
