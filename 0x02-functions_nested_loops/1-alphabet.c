#include "main.h"
/**
 * print_alphanet - print alphabet lowercase
 *
 * Rerurn: Always 0
 */
void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a' ; alphabet <= 'z' ; alphabet++)
	{
		_putchar(alphabet);
	}

	_putchar('\n');
}
