#include "main.h"

/**
 *print_alphabet_x10 - print alphabet 10x
 *Return: 0
 */

void print_alphabet_x10(void)
{
	char alpha;
	int num;

	for (num = 1 ; num <= 10 ; num++)
	{
		for (alpha = 'a' ; alpha <= 'z' ; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
	}
}
