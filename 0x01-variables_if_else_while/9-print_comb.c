#include <stdio.h>

/**
 *main - All possible combos 0 - 9
 *Return: 0 (Success)
 */
int main(void)
{
	int num;
	int nine = 9;

	for (num = 0 ; num < 9 ; num++)
	{
		putchar(48 + num);
		putchar(',');
		putchar(' ');
	}
	putchar(48 + nine);

	return (0);
}
