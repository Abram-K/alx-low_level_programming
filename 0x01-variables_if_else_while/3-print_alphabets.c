#include <stdio.h>
/**
 *main - Entry point
 *Return: Always 0 (Success)
 */

int main(void)
{
	char upper;
	char lower;

	for (upper = 'a' ; upper <= 'z' ; upper++)
	{
		putchar(upper);
	}
	for (lower = 'A' ; lower <= 'Z' ; lower++)
	{
		putchar(lower);
	}
	putchar ('\n');




	return (0);
}
