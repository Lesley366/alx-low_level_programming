#include "main.h"
/**
 * _strcat - function that concatenates two strings
 * @src: first string
 * @dest: second string
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
