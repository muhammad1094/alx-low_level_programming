#include <stdio.h>

/**
 * main -  prints the number of arguments passed into it.
 * @argc: number of commandline arguments
 * @argv: pointer to an array
 * @Return: 0-success, non-zero-fail
*/

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
