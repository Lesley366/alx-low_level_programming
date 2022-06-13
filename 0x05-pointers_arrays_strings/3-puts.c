#include "main.h"
/**
 * _puts - prints a string
 * @str - string
 * Return: void 
 */
void _puts(char *str)
{
	int j =0;

	while (str[j])
	{
		_putchar(str[j]);
		j++;
	}

	_putchar('\n');

}

