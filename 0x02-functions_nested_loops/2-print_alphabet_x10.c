#include "main.h"

/**
 * print_alphabet_x10 - print alphabet 10 times
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int round = 0;
	char letters = 'a';

	while (round < 10)
	{
	letters = 'a';
	while (letters <= 'z')
	{
	_putchar(letters);
	letters++;
	}
	_putchar('\n');

	round++;
	}
}
