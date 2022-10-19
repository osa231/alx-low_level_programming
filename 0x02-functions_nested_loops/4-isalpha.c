#include "main.h"
/**
 * _isalpha - check if character is lowercase or uppercase
 * @c:chara
 * Return:1 if lowercase or uppercase, otherwise 0
 */



int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
