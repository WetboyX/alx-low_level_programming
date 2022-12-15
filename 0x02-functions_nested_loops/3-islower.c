#include "main.h"
/**
 * _islower-check if character islowercase.
 * @c:character to check if islowercase.
 * Return:0-if lowercase,1-if not.
 */



int _lower(int c)
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
