#include "main.h"
#include <stdio.h>
/**
 * _abs - absolute value
 * @n: int print
 * Return: Always 0.
 */
int _abs(int p)
{
	if (p < 0)
	{
		return (p * (1));
	}

	else if (p == 0)
	{
		return (0);
	}

	else 
	{
		return (p);
	}

}
