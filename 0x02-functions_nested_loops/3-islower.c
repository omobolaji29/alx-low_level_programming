#include "main.h"

/**
 *_islower - function to print  lower case
 *
 * @c: parameter to be printed
 *
 * Return: 1 if its lowercase
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
