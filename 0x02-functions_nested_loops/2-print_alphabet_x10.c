#include "main.h"
/**print the alaphabet in lower
 *
 * Return: 0 
 */
void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a' ; alphabet <= 'z' ; alphabet)
	{
		_putchar(alphabet);
	}

	_putchar('\n');
}