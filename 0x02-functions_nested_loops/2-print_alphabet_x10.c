#include "main.h"

/**
 * print alphabet x10 - utilize on the putchar function to
 *                    print the alphabet ten times.
*/

void print_alphabet_x10(void)
{
	int line, ch;

	for (line = 0; line <= 9; line++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
		_putchar('\n');
	}
}

