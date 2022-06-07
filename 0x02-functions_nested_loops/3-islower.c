#include "main.h"
/**
 * _slower - prints 1 or 0 depending on input
 * @c contains a value or parameter
 * Returns: Always 0.
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
