#include "main.h"
/**
 * print_alphanet - alphabet lowercase
 *
 * Rerurn: Always 0
 */
/**
 * function declaration
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
