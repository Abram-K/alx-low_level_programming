#include <stdio.h>

/**
 *main - Iterate base 16 using only putchar
 *Return: 0 (Success)
 */

int main(void)
{
	int num;

	for (num = 0 ; num < 10 ; num++)
	{
		putchar(48 + num);
	}

	for (num = 'a' ; num <= 'f' ; num++)
	{
		putchar(num);
	}

	putchar('\n');





	return (0);
}
