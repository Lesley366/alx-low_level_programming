#include "main.h"
/**
 * main -entry point
 *
 * Return: 0 (correct)
 */
int main(void)
{
	char c[9] = "_putchar";
	int n;

	for (n = 0 ; n < 9 ; n++)
	{
		_putchar(c[n]);
	}

	_putchar('\n');

return (0);
}
