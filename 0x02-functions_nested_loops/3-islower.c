#include "main.h"
/**
 * _islower - prints 1 or 0 depending on input
 * @c: firts parameter
 *
 * Description: prints all lowercase
 * Return: Always 0.
 */
int _islower(int c)
{
	if (c > 'a' && c < 'z')
	{
		return (1);
	}

	else
		return (0);
}
