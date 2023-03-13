#ifndef _MAIN_H_
#define _MAIN_H_

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c);

/**
 * print_alphabet - print lowercase alphabet
 */

void print_alphabet(void);

/**
 *print_alphabet_x10 - print alphabet 10x
 */

void print_alphabet_x10(void);

/**
 *_islower - checks for lowercase character
 *@c: The character to check
 */

int _islower(int c);

/**
 *_isalpha - check for alphabetics character
 */

int _isalpha(int c);

/**
 *print_sign - prints sign of number
 */

int print_sign(int n);

/**
 *_abs - computes absolute value of int
 */

int _abs(int);


#endif
