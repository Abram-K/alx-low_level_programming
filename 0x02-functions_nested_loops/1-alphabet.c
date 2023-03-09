#include "main.h"

/**
 *print_alphabet - Write a function that prints the alphabet, lowercase,
 *then a new line.
 *Return: 0
 */
void print_alphabet(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}
	_putchar('\n');

}
