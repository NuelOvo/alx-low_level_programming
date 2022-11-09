#include "main.h"

/**
 * primeFinder - searches if a number is prime
 *
 * @a: the number to check
 * @b: the numbers to be checked
 *
 * Return: whether or not the number is a prime number
 **/

int primeFinder(int a, int b)
{
	if (a <= 1 || a % b == 0)
		return (0);
	else if (a == b)
		return (1);
	else if (a > b)
		primeFinder(a, b + 1);

	return (1);
}
