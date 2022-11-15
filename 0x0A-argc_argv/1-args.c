#include <stdio.h>

/**
 * main - prints the number of argumnents passed into it
 *
 * @argc: argument counter
 * @argv: argument vector
 *
 * Retur: 0
 *
 **/

int main(int argc, char *argv[])
{
	int c;
	(void)argv;

	for (c = 0; c <= argc; c++)
	{}
	printf("%d\n",c - 2);

	return (0);
}
