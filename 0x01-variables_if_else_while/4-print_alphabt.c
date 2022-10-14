#include <stdio.h>

/**
 * main - entry point
 * Return: Always 0 (success)
 */

int main(void)

{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
	if (ch == 'e' || ch == 'q')
	{
	continue;
	}
	putchar(ch);
	}
	putchar('\n');

	return (0);

}
