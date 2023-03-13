#include "main.h"

/**
 *_islower - checks if character is lowercase
 *@c: The character to check
 *Return: 1 if char is lower case, 0 otherwise
 */

int _islower(int c)
{
	if (c > 96 && c < 123)
	{
		return (1);
	}

	return (0);
}
