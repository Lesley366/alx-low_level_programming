#include "main.h"
#include <stdio.h>
/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @s: string
 * Return: dest
 */
char *string_toupper(char *s)
{
	int c = 0;

	while (*(s + c) != '\0')
	{
		if ((*(s + c) >= 97) && (*(s + c) <= 122))
			*(s + c) = *(s + c) - 32;
		c++;
	}

	return (s);
}
