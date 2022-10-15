#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (success)
 */

int main(void)
{
	int ch;
	int counter;

	counter = 0;

	for (ch = '0'; ch <= '9'; ch++)
	{
	putchar(ch);
	if (counter <= 8)
	{
	putchar(',');
	putchar(' ');
																		}
	counter++;
	}
	putchar('\n');
	return (0);
}
