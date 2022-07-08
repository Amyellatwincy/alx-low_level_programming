#include "main.h"

/**
 * _isupper - this is a function to check upper case alphas
 * @c: an interger parameter
 * Return: something but success
 */
int _isupper(int c)
{
	if (c >= 'A' && c  <= 'Z')
		return (1);
	return (0);
}
