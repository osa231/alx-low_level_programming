#include "main.h"
/**
 * _isalpha - function to check for alphabetic characters
 * @c: char
 * Return: 1 if char is lower or upper, else 0
 */
int _isalpha(int c)
{

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
	{
	_putchar('\n');
	}
}
