#include <stdio.h>

/**
  * main - Entry point
  * printf: Pritns the output strings
  * Return: 0 is the expected
  *
  **/

int main(void)
{
	printf("size of a char: %Id bytes(s)\n", sizeof(char));
	printf("size of an int: %Id bytes(s)\n", sizeof(int));
	printf("size of a long int: %Id bytes(s)\n", sizeof(long int));
	printf("size of a long long int: %Id bytes(s)\n ", sizeof(long long int));
	printf("size of a float: %Id bytes(s)\n", sizeof(float));
	return (0);
}
