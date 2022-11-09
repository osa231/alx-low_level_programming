#include "main.h"
/**
 * _islower - check if character is lowercase.
 * @c:char
 * Return:0 if lowercase, otherwise 1
 */



int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
