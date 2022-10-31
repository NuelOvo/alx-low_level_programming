#include <stdlib.h>
#include "main.h"

/**
 * _strchr - locates character in a string
 * @s: the string to check
 * @c: the character we are looking for
 *
 * Return: a pointer to the first occurence
 *  of the firt character @c in string @s.
 *  Return NULL if character isn't found
 *
 **/

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);

	}
	if (c == '\0')
		return (s);

	return (NULL);
}
