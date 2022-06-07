#include "main.h"
/**
 * print_alphabet_x10 - Print letters of the alphabet x10
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int alphabet;
	int count;

	count = 0;
	while (count < 10)
	{
		for (alphabet = 'a' ; alphabet <= 'z' ; alphabet++)
		{
			_putchar(alphabet);
		}

		count++;
		_putchar('\n');
	}

}
