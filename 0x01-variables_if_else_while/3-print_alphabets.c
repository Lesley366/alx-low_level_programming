#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 Always (success)
 */
int main(void)
{
	int ch;
	int ph;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		putchar(ch);
	}

	for (ph = 'A' ; ph <= 'Z' ; ph++)
	{
		putchar(ph);
	}

	putchar('\n');

return (0);
}
