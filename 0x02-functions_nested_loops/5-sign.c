#include "main.h"
/**
 * print_sign - return 1,0,-1 if n is greater,equal or less
 * @n: int to be printed
 * Return: Always 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}

	else
	{
		_putchar('-');
		return (-1);
	}

}
