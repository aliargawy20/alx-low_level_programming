#include "main.h"

/**
 * print_alphabet -function to print alphabets in lower
 *
 * Return: always (0);
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a' ; c <= 'z' ; c++)
		_putchar(c);
	_putchar('\n');

}
