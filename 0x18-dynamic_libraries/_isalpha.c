#include "main.h"

/**
 * _isalpha - checks for alphabetic character.
 *
 * @c: The character to be checked.
 *
 * Return: returns 1 if c  is a letter, lowercase or uppercase
 *			,else returns 0 .
 *
*/
int _isalpha(int c)
{
		if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		{
			return (1);
		}
		else
		{
			return (0);
		}
}
