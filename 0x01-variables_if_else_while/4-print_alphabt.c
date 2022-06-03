#include <stdio.h>
/**
 * main - Entry point 
 *
 * Return: 0 Always (Success)
 */
int main(void)
{
	int ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		if (ch == 'q')
			continue;

		else if (ch == 'e')
			continue;

		putchar(ch);
	}

	putchar('\n');

return (0);
}
