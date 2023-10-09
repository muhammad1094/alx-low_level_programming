#include <stdio.h>

/**
 * main - entry point
 *
 * Description: 'print form a to z in lower and upper case'
 *
 * Return: 0 (success)
*/

int main(void)
{
	char ch = 'a';

	char CH = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	while (CH <= 'Z')
	{
		putchar(CH);
		CH++;
	}

	putchar('\n');

	return (0);

}
