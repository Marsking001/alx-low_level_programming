#include "main.h"

/**
 * _isalpha - Checks if a character is alphabetic
 * @c: the char to be checked
 *
 * Return: 1 if char is letter lower or upper, 0 otherwise
 */
int _isalpha(int c)

{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	return (0);
}
