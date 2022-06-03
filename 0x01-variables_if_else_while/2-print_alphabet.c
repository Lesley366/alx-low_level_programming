#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Print letters of the alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		putchar(ch);
	}

	putchar('\n');

return (0);
}
