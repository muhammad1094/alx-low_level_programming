#include <stdio.h>

/**
 * main - entry point
 *
 * Description: 'print form a to z'
 *
 * Return: 0 (sucess)
*/

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
