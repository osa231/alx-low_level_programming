#include "main.h"
/**
 * print_alphabet_x10 - function to print alphabet ten times
 * Return: 0 (success)
 */
void print_alphabet_x10(void)
{
	char c, b;

	for (b = 1; b <= 9; b++)
	{
	for (c = 'a'; c <= 'z'; c++)
	{
	_putchar(c);
	}
	_putchar('\n');
	}
}
