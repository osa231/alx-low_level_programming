#include "main.h"
/**
 * print_diagonal - a function that draws a diagonal line on the terminal.
 * @n: input variable
 * Return: Always void
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\n');
		_putchar('\n');
	}
}
