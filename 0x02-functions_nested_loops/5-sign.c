#include "main.h"

/**
 *print_sign - prints the sign (+ or -) of number
 *@n: number
 *Return: 1 if pos, 0 if zero, -1 if neg
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	_putchar('0');
	return (0);
}
