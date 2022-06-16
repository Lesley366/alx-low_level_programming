#include "main.h"
#include <stdio.h>
/**
 * _strcat - concatenates two strings
 * buffer to by dest
 * @dest: pointer
 * @src: pointer
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int count = 0;

	while (count >= 0)
	{
		*(dest + count) = *(src + count);

		if (*(src + count) == '\0')
			break;
		count++;
	}
	return (dest);
}
